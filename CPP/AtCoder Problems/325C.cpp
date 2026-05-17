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

    /*
    cout << "---------------------" << endl;
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }
    */

    queue<pair<int, int>> que;
    int ans = 0;

    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            if(grid[i][j] == '#'){
                ans++;
                grid[i][j] = 'x';
                que.push({i, j});

                while(!que.empty()){
                    auto current = que.front();
                    int r = current.first;
                    int c = current.second;
                    que.pop();

                    if(r - 1 >= 1 and grid[r - 1][c] == '#'){
                        grid[r - 1][c] = 'x';
                        que.push({r - 1, c});
                    }
                    if(r + 1 <= h and grid[r + 1][c] == '#'){
                        grid[r + 1][c] = 'x';
                        que.push({r + 1, c});
                    }
                    if(c - 1 >= 1 and grid[r][c - 1] == '#'){
                        grid[r][c - 1] = 'x';
                        que.push({r, c - 1});
                    }
                    if(c + 1 <= w and grid[r][c + 1] == '#'){
                        grid[r][c + 1] = 'x';
                        que.push({r, c + 1});
                    }
                    if(r - 1 >= 1 and c - 1 >= 1 and grid[r - 1][c - 1] == '#'){
                        grid[r - 1][c - 1] = 'x';
                        que.push({r - 1, c - 1});
                    }
                    if(r - 1 >= 1 and c + 1 <= w and grid[r - 1][c + 1] == '#'){
                        grid[r - 1][c + 1] = 'x';
                        que.push({r - 1, c + 1});
                    }
                    if(r + 1 <= h and c - 1 >= 1 and grid[r + 1][c - 1] == '#'){
                        grid[r + 1][c - 1] = 'x';
                        que.push({r + 1, c - 1});
                    }
                    if(r + 1 <= h and c + 1 <= w and grid[r + 1][c + 1] == '#'){
                        grid[r + 1][c + 1] = 'x';
                        que.push({r + 1, c + 1});
                    }
                }
            }
        }
    }

    /*
    cout << "---------------------" << endl;
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }
    */

    cout << ans << endl;
}