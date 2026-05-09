#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Kが大きくなるので long long を使う
    long long n, k;
    cin >> n >> k;

    vector<vector<int>> allarray(n);
    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        allarray[i].resize(l);
        for (int j = 0; j < l; j++) cin >> allarray[i][j];
    }

    vector<long long> c(n);
    for (int i = 0; i < n; i++) cin >> c[i];

    // ここから「作らずに」探す
    for (int i = 0; i < n; i++) {
        // この行が繰り返されることで発生する合計要素数
        long long row_len = allarray[i].size();
        long long total_elements_in_row = row_len * c[i];

        if (k <= total_elements_in_row) {
            // K番目はこの行にある！
            // その行の「何番目の要素か」を割り出す（0-indexedに直して余りをとる）
            int index = (k - 1) % row_len;
            cout << allarray[i][index] << endl;
            return 0; // 答えが出たら終了
        } else {
            // この行にはないので、Kからこの行の総数を引いて次へ
            k -= total_elements_in_row;
        }
    }

    return 0;
}