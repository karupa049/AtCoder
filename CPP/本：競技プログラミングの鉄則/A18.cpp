#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n, s;
    // cin >> n >> s;

    // vector<int> array(n + 1);
    // for(int i = 1; i <= n; i++) cin >> array[i];
    // for(int i = 1; i <= n; i++) cout << array[i] << " "; cout << endl;

    int n, goukei;
    cin >> n >> goukei;

    vector<int> kozeni(n + 1);
    for(int i = 1; i <= n; i++) cin >> kozeni[i];
    // for(int i = 1; i <= n; i++) cout << kozeni[i] << " "; cout << endl;

    vector<vector<int>> dp(n + 1, vector<int>(goukei + 1));

    dp[0][0] = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= goukei; j++){
            dp[i][j] = dp[i - 1][j];

            if(j >= kozeni[i]){
                if(dp[i - 1][j - kozeni[i]] == 1){
                    dp[i][j] = 1;
                }
            }
        }
    }
    if(dp[n][goukei] == 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    for(int i = 0; i <= goukei; i++){
        cout << i << " ";
    }
    cout << endl;

    cout << "------------------------------------------------" << endl;

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= goukei; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }


}