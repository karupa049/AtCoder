#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> kosyou(m + 1);
    for(int i = 1; i <= m; i++) cin >> kosyou[i];
    cout << "-------------------------------" << endl;
    for(int i = 0; i <= m; i++) cout << kosyou[i] << " "; cout << endl;

    vector<vector<int>> dish(n + 1, vector<int>(2));
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < 2; j++){
            cin >> dish[i][j];
        }
    }

    cout << "-------------------------------" << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < 2; j++){
            cout << dish[i][j] << " ";
        }
        cout << endl;
    }

    vector<int> sumkosyou(m + 1);

    for(int i = 1; i <= n; i++){
        sumkosyou[dish[i][0]] = sumkosyou[dish[i][0]] + dish[i][0];
    }


    cout << "-------------------------------" << endl;
    for(int i = 1; i <= m; i++){
        cout << sumkosyou[i] << endl;
    }

    int ans = 0;
    for(int i = 1; i <= m; i++){
        if(sumkosyou[i] <= kosyou[i]){
            ans = ans + sumkosyou[i];
        }else if(sumkosyou[i] > kosyou[i]){
            ans = ans + kosyou[i];
        }
    }

    cout << "-------------------------------" << endl;
    cout << ans << endl;
}