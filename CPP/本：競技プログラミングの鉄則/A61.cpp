#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    vector<int> b(m);

    for(int i = 0; i < m; i++) cin >> a[i] >> b[i];
    // for(int i = 0; i < m; i++) cout << a[i] << " " << b[i] << endl;

    vector<vector<int>> g(n + 1);

    for(int i = 0; i < m; i++){
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }

    for(int k = 1; k <= n; k++){
        cout << k << ": {";
        for(int i = 0; i < g[k].size(); i++){
            cout << g[k][i]; 
            
            if(i != g[k].size() - 1){
                cout << ", ";
            }
        }
        
        cout << "}" << endl;
    }
}