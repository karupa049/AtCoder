// #include<bits/stdc++.h>
using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

int main(){
    int n, q;
    cin >> n >> q;

    vector<int> A(n + 1);
    vector<int> B(n + 1);
    for(int i = 1; i <= n; i++)cin >> A[i];
    for(int i = 1; i <= n; i++)cin >> B[i];
    // for(int i = 1; i <= n; i++)cout << A[i] << " "; cout << endl;
    // for(int i = 1; i <= n; i++)cout << B[i] << " "; cout << endl;

    char c;
    int x, v;
    long long result = 0;

    for(int i = 1; i <= n; i++){
        result += min(A[i], B[i]);
    }

    for(int i = 1; i <= q; i++){
        cin >> c;
        
        if(c == 'A'){
            cin >> x >> v;
            result -= min(A[x], B[x]);
            A[x] = v;
            result += min(A[x], B[x]);
            // cout << "-------------------------------------------" << endl;
            // for(int j = 1; j <= n; j++) cout << A[j] << " "; cout << endl;
            // for(int j = 1; j <= n; j++) cout << B[j] << " "; cout << endl;
            // cout << "-------------------------------------------" << endl;
            cout << result << endl;
        }else{
            cin >> x >> v;
            result -= min(A[x], B[x]);
            B[x] = v;
            result += min(A[x], B[x]);
            // cout << "-------------------------------------------" << endl;
            // for(int j = 1; j <= n; j++) cout << A[j] << " "; cout << endl;
            // for(int j = 1; j <= n; j++) cout << B[j] << " "; cout << endl;
            // cout << "-------------------------------------------" << endl;
            cout << result << endl;
        }
    }
}