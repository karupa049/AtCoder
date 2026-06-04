#include<bits/stdc++.h>
using namespace std;

int main(){
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<int>> grid(h + 1, vector<int> (w + 1));
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cin >> grid[i][j];
        }
    }
    // for(int i = 1; i <= h; i++){
    //     for(int j = 1; j <= w; j++){
    //         cout << grid[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    vector<int> array(n + 1);
    for(int i = 1; i <= n; i++) cin >> array[i];
    // for(int i = 1; i <= n; i++) cout << array[i] << " "; cout << endl;

    int count = 0;
    vector<int> num;
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            for(int k = 1; k <= n; k++){
                if(grid[i][j] == array[k]){
                    count++;
                }
            }
        }
        num.push_back(count);
        count = 0;
    }

    // for(int i = 0; i < num.size(); i++){
    //     cout << num[i] << " ";
    // }
    // cout << endl;

    int maxCount = 0;
    for(int i = 0; i < num.size(); i++){
        if(num[i] > maxCount){
            maxCount = num[i];
        }
    }

    cout << maxCount << endl;


    // cout << count << endl;
}