#include<bits/stdc++.h>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;

    vector<vector<char>> grid(h + 1, vector<char>(w + 1));
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cin >> grid[i][j];
        }
    }
    queue<pair<int, int>> que;

    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            if(i == 1 and grid[i][j] == '.'){
                grid[i][j] = 'x';
                que.push({i, j});
            }
            if(i == h and grid[i][j] == '.'){
                grid[i][j] = 'x';
                que.push({i, j});
            }
            if(j == 1 and grid[i][j] == '.'){
                grid[i][j] = 'x';
                que.push({i, j});
            }
            if(j == w and grid[i][j] == '.'){
                grid[i][j] = 'x';
                que.push({i, j});
            }
        }
    }

    /*
    cout << "---------------------------" << endl;
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }
    */

    while(!que.empty()){
        auto current = que.front();
        int r = current.first;
        int c = current.second;
        que.pop();

        // 1. 上のマスをチェック
        // 盤面からはみ出さない（r - 1 が 1以上）かつ、上が白マスだったら
        if (r - 1 >= 1 and grid[r - 1][c] == '.') {
            grid[r - 1][c] = 'x';      // 上を水にする
            que.push({r - 1, c});      // 上の座標を待合室に入れる
        }

        // 2. 下のマスをチェック
        if (r + 1 <= h and grid[r + 1][c] == '.') {
            grid[r + 1][c] = 'x';      // 下を水にする
            que.push({r + 1, c});      // 下の座標を待合室に入れる
        }

        // 3. 左のマスをチェック
        if (c - 1 >= 1 and grid[r][c - 1] == '.') {
            grid[r][c - 1] = 'x';      // 左を水にする
            que.push({r, c - 1});      // 左の座標を待合室に入れる
        }

        // 4. 右のマスをチェック
        if (c + 1 <= w and grid[r][c + 1] == '.') {
            grid[r][c + 1] = 'x';      // 右を水にする
            que.push({r, c + 1});      // 右の座標を待合室に入れる
        }
    }

    /*
    cout << "---------------------------" << endl;
    for(int i = 2; i <= h - 1; i++){
        for(int j = 2; j <= w - 1; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }
    */

    /*
    cout << "---------------------------" << endl;
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }
    */

    //cout << "---------------------------" << endl;

    int ans = 0;
    
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            if(grid[i][j] == '.'){
                ans++; // 新しい湖を発見！

                grid[i][j] = 'x'; // スタート地点を染める
                que.push({i, j}); // 待合室に入れる

                // ★ ここからが if文4つの queueループ
                while(!que.empty()){
                    auto current = que.front();
                    int r = current.first;
                    int c = current.second;
                    que.pop();

                    // 1. 上のマスをチェックして染める
                    if (r - 1 >= 1 and grid[r - 1][c] == '.') {
                        grid[r - 1][c] = 'x';
                        que.push({r - 1, c});
                    }

                    // 2. 下のマスをチェックして染める
                    if (r + 1 <= h and grid[r + 1][c] == '.') {
                        grid[r + 1][c] = 'x';
                        que.push({r + 1, c});
                    }

                    // 3. 左のマスをチェックして染める
                    if (c - 1 >= 1 and grid[r][c - 1] == '.') {
                        grid[r][c - 1] = 'x';
                        que.push({r, c - 1});
                    }

                    // 4. 右のマスをチェックして染める
                    if (c + 1 <= w and grid[r][c + 1] == '.') {
                        grid[r][c + 1] = 'x';
                        que.push({r, c + 1});
                    }
                } // 湖を1つ消し去る while はここまで
                
            }
        }
    }

    cout << ans << endl;

}

