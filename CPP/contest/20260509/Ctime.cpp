#include<bits/stdc++.h>
#include <chrono> // 時間計測用のライブラリ

using namespace std;

int main(){
    // 高速化（入力が多い場合に有効）
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    // --- 計測開始 ---
    auto start = chrono::high_resolution_clock::now();

    vector<vector<int>> allarray(n);
    int count = 0;
    while(count < n){
        int l;
        cin >> l;
        vector<int> array(l);
        for(int i = 0; i < l; i++) cin >> array[i];
        allarray[count] = array;
        count++;
    }

    vector<int> c(n);
    for(int i = 0; i < n; i++) cin >> c[i];

    vector<int> connect;
    // 効率化：あらかじめ必要なサイズを予測できる場合は reserve すると速くなります
    for(int i = 0; i < n; i++){
        for(int j = 0; j < c[i]; j++){
            for(int val : allarray[i]){
                connect.push_back(val);
                // もし k 番目が見つかればそこで止める最適化も可能ですが、
                // 元のロジックを維持して最後まで結合します
            }
        }
    }

    if (k <= connect.size()) {
        cout << "Result: " << connect[k - 1] << endl;
    }

    // --- 計測終了 ---
    auto end = chrono::high_resolution_clock::now();
    
    // 経過時間を計算（秒単位）
    chrono::duration<double> elapsed = end - start;

    cout << "----------------------------" << endl;
    cout << "Execution time: " << fixed << setprecision(6) << elapsed.count() << " seconds" << endl;
    cout << "----------------------------" << endl;

    return 0;
}