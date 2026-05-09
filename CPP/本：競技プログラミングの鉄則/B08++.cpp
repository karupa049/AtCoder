#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 実行速度を速めるためのマジックコード（Qが多い時に有効）
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // 1500x1500の「方眼紙」を用意
    const int MAX_VAL = 1501;
    vector<vector<int>> grid(MAX_VAL + 1, vector<int>(MAX_VAL + 1, 0));

    // ステップ1: 点をプロットする
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        grid[x][y]++; 
    }

    // --- デバッグ用：座標(1,1)から(10,10)を可視化 ---
    for (int y = 10; y >= 1; y--) { // Y軸は上が大きいので逆順で回す
        for (int x = 1; x <= 10; x++) {
            if (grid[x][y] > 0) cout << "* "; // 点がある場所
            else cout << ". ";               // 点がない場所
             }
             cout << endl;
        }

    // ステップ2: 2次元累積和テーブルを作成
    vector<vector<int>> sum(MAX_VAL + 1, vector<int>(MAX_VAL + 1, 0));

    // 横方向に累積
    for (int i = 1; i <= MAX_VAL; i++) {
        for (int j = 1; j <= MAX_VAL; j++) {
            sum[i][j] = sum[i][j - 1] + grid[i][j];
        }
    }

    // 縦方向に累積
    for (int i = 1; i <= MAX_VAL; i++) {
        for (int j = 1; j <= MAX_VAL; j++) {
            sum[i][j] = sum[i - 1][j] + sum[i][j];
        }
    }

    // ステップ3: クエリに答える
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // 面積パズルの公式
        int ans = sum[c][d] 
                - sum[a - 1][d] 
                - sum[c][b - 1] 
                + sum[a - 1][b - 1];
        
        cout << ans << "\n"; // endlの代わりに "\n" を使うと高速
    }

    return 0;
}