#include<bits/stdc++.h>
using namespace std;

int main(){
    int p, q, x, y;
    cin >> p >> q >> x >> y;

    // cout << p << q << x << y << endl;

    // vector<vector<int>> grid(101, vector<int>(101));

    // for(int i = 1; i < 101; i++){
    //     for(int j = 1; j < 101; j++){
    //         cout << grid[i][j];
    //         if(p < grid[i][0] and grid[i][0] < p + 100 and grid[i][1] < y and grid[i][1] < 100){
    //             grid[i][j] = 1;
    //         }
    //     }
    //     cout << endl;
    // }

    // for(int i = 1; i < 101; i++){
    //     for(int j = 1; j < 101; j++){
    //         cout << grid[i][j];
    //     }
    //     cout << endl;
    // }


    if(p <= x and x < p + 100 and q <= y and y < q + 100){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}