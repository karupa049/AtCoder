#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
    int n, m;       //友達が何人いてアイテムが何種類あるか、（アイテム1を含む）
    cin >> n >> m;

    vector<vector<int>> graph(n + 1);

   for(int i = 0; i < m; i++){
    int a, b;
    cin >> a >> b;

    graph[a].push_back(b);
   }

   queue<int> q;
   vector<bool> visited(n + 1, false);

   q.push(1);
   visited[1] = true;

   while(!q.empty()){
    int current = q.front();
    q.pop();

    for(int nextItem : graph[current]){
        if(!visited[nextItem]){
            visited[nextItem] = true;
            q.push(nextItem);
        }
    }
   }

   int ans = 0;
    for (int i = 1; i <= n; ++i) {
        if (visited[i]) {
            ans++;
        }
    }

    cout << ans << endl;
}