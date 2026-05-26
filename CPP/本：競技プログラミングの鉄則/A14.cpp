#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> a(n + 1);
    vector<int> b(n + 1);
    vector<int> c(n + 1);
    vector<int> d(n + 1);

    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];
    for(int i = 1; i <= n; i++) cin >> c[i];
    for(int i = 1; i <= n; i++) cin >> d[i];
 
    // for(int i = 1; i <= n; i++) cout << "a " << a[i] << ", b " << b[i] << ", c " << c[i] << ", d " << d[i] << endl;

    bool flag = false;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            for(int ii = 1; ii <= n; ii++){
                for(int jj = 1; jj <= n; jj++){
                    if(a[i] + b[j] + c[ii] + d[jj] == k){
                        flag = true;
                    }
                }
            }
        }
        if(flag == true) break;
    }

    if(flag == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}