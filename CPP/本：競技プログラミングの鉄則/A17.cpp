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

    for(int i = 3; i <= n; i++){
        if(dp[i - 1] + a[i] > dp[i - 2] + b[i]){
            dp[i] = dp[i - 2] + b[i];
        }else{
            dp[i] = dp[i - 1] + a[i];
        }
    }

    vector<int> path;
    int current = n;

    while(current >= 1){
        path.push_back(current);

        if(current == 1) break;

        if(dp[current - 1] + a[current] == dp[current]){
            current = current - 1;
        }else{
            current = current - 2;
        }
    }

    reverse(path.begin(), path.end());
    
    cout << path.size() << endl;
    for(int i = 0; i < path.size(); i++) cout << path[i] << " "; cout << endl;
}