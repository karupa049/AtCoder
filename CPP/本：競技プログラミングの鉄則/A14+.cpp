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
 
    //for(int i = 1; i <= n; i++) cout << "a " << a[i] << ", b " << b[i] << ", c " << c[i] << ", d " << d[i] << endl;

    // cout << "------------------------------------------------------" << endl;

    vector<int> ab;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            ab.push_back(a[i] + b[j]);
        }
    }

    // cout << "ab : ";
    // for(int i = 0; i < ab.size(); i++) cout << ab[i] << " "; cout << endl;

    vector<int> cd;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cd.push_back(c[i] + d[j]);
        }
    }

    // cout << "cd : ";
    // for(int i = 0; i < cd.size(); i++) cout << cd[i] << " "; cout << endl;

    // cout << "------------------------------------------------------" << endl;

    bool flag = false;

    for(int i = 0; i < ab.size(); i++){
        for(int j = 0; j < cd.size(); j++){
            if(ab[i] + cd[j] == k){
                flag = true;
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