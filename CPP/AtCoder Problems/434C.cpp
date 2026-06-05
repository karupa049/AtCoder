#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    cout << " -----------------------------------------" << endl;

    for(int i = 0; i < T; i++){
        int n, h;
        cin >> n >> h;
        cout << " -----------------------------------------" << endl;
        vector<int> t(n + 1);
        vector<int> l(n + 1);
        vector<int> u(n + 1);

        
        for(int i = 1; i <= n; i++) cin >> t[i] >> l[i] >> u[i];
        cout << " -----------------------------------------" << endl;
        for(int i = 1; i <= n; i++) cout << t[i] << " " << l[i] << " " << u[i] << endl;
        cout << " -----------------------------------------" << endl;
    }
}