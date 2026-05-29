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

    vector<bool> visited(n + 1, false);

    queue<int> q;

    visited[1] = true;
    q.push(1);

    while(!q.empty()){
        int point = q.front();
        q.pop();

        for(int i = 0; i < g[point].size(); i++){
            if(visited[g[point][i]] == false){
                visited[g[point][i]] = true;
                q.push(g[point][i]);
            }
        }
    }

    bool flag = false;

    for(int i = 1; i <= n ; i++){
        if(visited[i] == false){
            flag = true;
        }
    }

    if(flag == false){
        cout << "The graph is connected." << endl;
    }else{
        cout << "The graph is not connected." << endl;
    }










}