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

    vector<int> dist(n + 1, -1);

    queue<int> q;

    dist[1] = 0;
    q.push(1);

    while(!q.empty()){
        int point = q.front();
        q.pop();

        for(int i = 0; i < g[point].size(); i++){
            if(dist[g[point][i]] == -1){
                dist[g[point][i]] = dist[point] + 1;
                q.push(g[point][i]);
            }
        }
    }

    for(int i = 1; i <= n; i++){
        cout << dist[i] << endl;
    }

}