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

    // for(int i = 1; i <= h; i++){
    //     for(int j = 1; j <= w; j++){
    //         cout << grid[i][j];
    //     }
    //     cout << endl;
    // }

    vector<bool> usedH(h + 1, false);
    vector<bool> usedW(w + 1, false);

    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            if(grid[i][j] == '#'){
                usedH[i] = true;
                usedW[j] = true;
            }
        }
    }

    int top = -1;
    int bottom = -1;
    int left = -1;
    int right = -1;

    for(int i = 1; i <= h; i++){
        if(usedH[i] == true){
            if(top == -1){
                top = i;
            }
            bottom = i;
        }

    }

    for(int i = 1; i <= w; i++){
        if(usedW[i] == true){
            if(left == -1){
                left = i;
            }
            right = i;  
        }
    }

    for(int i = top; i <= bottom; i++){
        for(int j = left; j <= right; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }












}
