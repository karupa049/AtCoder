#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n + 1, vector<char> (n + 1));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> grid[i][j];
        }
    }

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++){
    //         cout << grid[i][j];
    //     }
    //     cout << endl;
    // }
    // [[., ., #. #], [., ., #, #], [#, #, #, .], [#, #, ., #]]

    set<vector<vector<char>>> unique_grid;

    for(int i = 1; i <= n - m + 1; i++){
        for(int j = 1; j <= n - m + 1; j++){
            vector<vector<char>> sub(m, vector<char>(m));

            for(int x = 0; x < m; x++){
                for(int y = 0; y < m; y++){
                    sub[x][y] = grid[i + x][j + y];
                }
            }
            unique_grid.insert(sub);
        }
    }

    cout << unique_grid.size() << endl;
}