#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. 入力の準備
    int n, m;
    vector<int> data(n);
    vector<int> checked(m, 0); // 各色の服が着られているか記録する配列（すべて0で初期化）

    // 2. データの読み込みと同時に「どの色が着られたか」を記録
    for (int i = 0; i < n; i++) {
        cin >> data[i];
        
        // 1番〜M番の範囲内であれば、その色のインデックスを 1 (済み) にする
        // data[i]が「2」なら checked[1] を 1 にする（0始まりのため -1 する）
        if (data[i] >= 1 && data[i] <= m) {
            checked[data[i] - 1] = 1;
        }
    }

    // --- 質問1: 全員が違う服を着ているか？ ---
    // set（集合）に入れると重複が自動で消えるので、サイズが変わらなければ「全員違う」
    set<int> unique_elements(data.begin(), data.end());
    
    if (unique_elements.size() == n) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    // --- 質問2: 全種類の服が少なくとも一人には着られているか？ ---
    // checked 配列の中に 0 (まだ着られていない色) が一つもなければ「Yes」
    bool all_worn = true;
    for (int j = 0; j < m; j++) {
        if (checked[j] == 0) {
            all_worn = false;
            break; // ひとつでも0が見つかれば十分なのでループを抜ける
        }
    }

    if (all_worn) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}