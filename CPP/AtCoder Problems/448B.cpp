#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> kosyou(m + 1);
    for(int i = 1; i <= m; i++) cin >> kosyou[i];
    // cout << "-------------------------------" << endl;
    // for(int i = 0; i <= m; i++) cout << kosyou[i] << " "; cout << endl;

    vector<vector<int>> dish(n + 1, vector<int>(2));
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < 2; j++){
            cin >> dish[i][j];
        }
    }

    // cout << "-------------------------------" << endl;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 0; j < 2; j++){
    //         cout << dish[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<int> sumkosyou(m + 1);
    // for(int i = 1; i <= n; i++){
    //      if(dish[i][0] == 1){
    //         sumkosyou[1] = sumkosyou[1] + dish[i][1];
    //      }else if(dish[i][0] == 2){
    //         sumkosyou[2] = sumkosyou[2] + dish[i][1];
    //      }else if(dish[i][0] == 3){
    //         sumkosyou[3] = sumkosyou[3] + dish[i][1];
    //      }else if(dish[i][0] == 4){
    //         sumkosyou[4] = sumkosyou[4] + dish[i][1];
    //      }else if(dish[i][0] == 5){
    //         sumkosyou[5] = sumkosyou[5] + dish[i][1];
    //      }
    // }

    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= m; k++){
            if(dish[i][0] == k){
                sumkosyou[k] = sumkosyou[k] + dish[i][1];
            }
        }
        
    }


    // cout << "-------------------------------" << endl;
    // for(int i = 1; i <= m; i++){
    //     cout << sumkosyou[i] << endl;
    // }

    int ans = 0;
    for(int i = 1; i <= m; i++){
        if(sumkosyou[i] <= kosyou[i]){
            ans = ans + sumkosyou[i];
        }else if(sumkosyou[i] > kosyou[i]){
            ans = ans + kosyou[i];
        }
    }

    // cout << "-------------------------------" << endl;
    cout << ans << endl;
}