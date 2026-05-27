#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n + 1);
    for(int i = 2; i <= n; i++) cin >> a[i];
    // for(int i = 1; i <= n; i++) cout << a[i] << " "; cout << endl;

    vector<int> b(n + 1);
    for(int i = 3; i <= n; i++) cin >>b[i];
    // for(int i = 1; i <= n; i++) cout << b[i] << " "; cout << endl;

    vector<int> dp(n + 1);
    dp[1] = 0;
    dp[2] = a[2];

    // dp[3] = min(dp[3 - 1] + a[3], dp[3 - 2] + b[3]);
    // dp[4] = min(dp[4 - 1] + a[4], dp[4 - 2] + b[4]);
    // dp[5] = min(dp[5 - 1] + a[5], dp[5 - 2] + b[5]);

    for(int i = 3; i <= n; i++){
        dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + b[i]);
    }

    cout << dp[n] << endl;



}