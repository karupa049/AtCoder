#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n + 1);
    vector<int> b(n + 1);

    for(int i = 1; i <= n; i++) cin >> a[i] >> b[i];

    vector<vector<int>> adj(n + 1); 
    for(int i = 1; i <= n; i++){
        if(a[i] != 0) adj[a[i]].push_back(i);
        if(b[i] != 0) adj[b[i]].push_back(i);
    }

    queue<int> q;
    vector<bool> is_learned(n + 1, false);
    int count = 0;

    for(int i = 1; i <= n; i++){
        if(a[i] == 0 && b[i] == 0){
            is_learned[i] = true;
            q.push(i);
            count++;
        }
    }

    while(!q.empty()){
        int u = q.front(); q.pop();
        
        for(int v : adj[u]){
            if(!is_learned[v]){
                if(is_learned[a[v]] || is_learned[b[v]]){
                    is_learned[v] = true;
                    q.push(v);
                    count++;
                }
            }
        }
    }
    
    cout << count << endl;
}