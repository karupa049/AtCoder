#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> a(n + 1);
    vector<int> b(m + 1);

    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int j = 1; j <= m; j++) cin >> b[j];
    // for(int i = 1; i <= n; i++) cout << a[i] << " "; cout << endl;
    // for(int j = 1; j <= m; j++) cout << b[j] << " "; cout << endl;

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(b[i] == a[j]){
                a[j] = 0;
                break;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        if(a[i] == 0){
            continue;
        }
        cout << a[i] << " ";
    }
    cout << endl;
}