#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, h, w;
    cin >> n >> h >> w;
    int sx, sy;
    cin >> sx >> sy;
    string s;
    cin >> s;
    
    vector<vector<int>> grid(h + 1, vector<int> (w + 1));
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cin >> grid[i][j];
        }
    }

    // cout << n << h << w << sx << sy << s;
    // cout << endl;

    // for(int i = 1; i <= h; i++){
    //     for(int j = 1; j <= w; j++){
    //         cout << grid[i][j];
    //     }
    //     cout << endl;
    // }

    int count = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'F'){
            sx--;
            cout << grid[sx][sy] << endl;
        }else if(s[i] == 'B'){
            sx++;
            cout << grid[sx][sy] << endl;
        }else if(s[i] == 'R'){
            sy++;
            cout << grid[sx][sy] << endl;
        }else if(s[i] == 'L'){
            sy--;
            cout << grid[sx][sy] << endl;
        }


    }

}