#include<bits/stdc++.h>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;

    vector<vector<char>> grid(h + 1, vector<char>(w + 1));
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cin >> grid[i][j];
            //cout << grid[i][j];
        }
        //cout << endl;
    }
    

    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            if(i == 1 and grid[i][j] == '.'){
                grid[i][j] = 'x';
            }
            if(i == h and grid[i][j] == '.'){
                grid[i][j] = 'x';
            }
            if(j == 1 and grid[i][j] == '.'){
                grid[i][j] = 'x';
            }
            if(j == w and grid[i][j] == '.'){
                grid[i][j] = 'x';
            }     
        }
    }

    cout << "---------------------------" << endl;
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }

    cout << "---------------------------" << endl;
    for(int i = 2; i <= h - 1; i++){
        for(int j = 2; j <= w - 1; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }

    for(int loop = 0; loop < 1000; loop++){
        for(int i = 2; i <= h - 1; i++){
            for(int j = 2; j <= w - 1; j++){
                if(grid[i][j] == '.' and grid[i - 1][j] == 'x'){
                    grid[i][j] = 'x';
                }
                if(grid[i][j] == '.' and grid[i + 1][j] == 'x'){
                    grid[i][j] = 'x';
                }
                if(grid[i][j] == '.' and grid[i][j - 1] == 'x'){
                    grid[i][j] = 'x';
                }
                if(grid[i][j] == '.' and grid[i][j + 1] == 'x'){
                    grid[i][j] = 'x';
                }
            }
        }
    }



    cout << "---------------------------" << endl;
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }


}