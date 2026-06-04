#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int> (n, 0));

    grid[0][(n - 1) / 2] = 1;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cout << grid[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    int pre_r = 0;
    int pre_c = (n - 1) / 2;
    int pre_grid = 1;

    for(int i = 0; i < n * n - 1; i++){
        if(grid[(pre_r - 1 + n) % n][(pre_c + 1) % n] == 0){
            pre_grid++;
            grid[(pre_r - 1 + n) % n][(pre_c + 1) % n] = pre_grid;
            pre_r = (pre_r - 1 + n) % n;
            pre_c = (pre_c + 1) % n;
        }else{
            pre_grid++;
            grid[((pre_r + 1) % n)][pre_c] = pre_grid;
            pre_r = (pre_r + 1) % n;
            pre_c = pre_c;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    

    
}