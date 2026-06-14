#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<int>> grid(n, vector<int> (2));
    for(int i = 0; i < n; i++){
        cin >> grid[i][0] >> grid[i][1];
    }

    // for(int i = 0; i < n; i++){
    //     cout << grid[i][0] << " " << grid[i][1] << " " << endl;
    // }

    sort(grid.begin(), grid.end());

    // for(int i = 0; i < n; i++){
    //     cout << grid[i][0] << " " << grid[i][1] << " " << endl;
    // }

    int min = 2e9;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(grid[i][1] < min){
            count++;
            min = grid[i][1];
        }
    }

    cout << count << endl;
}