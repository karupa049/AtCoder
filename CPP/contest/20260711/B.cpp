#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> color(n + 1);
    vector<int> size(n + 1);
    for(int i = 1; i <= n; i++) cin >> color[i] >> size[i];
    // for(int i = 1; i <= n; i++) cout << color[i] << " " << size[i] << endl;

    vector<int> maxsize(m + 1, -1);

    for(int i = 1; i <= n; i++){
        if(size[i] >= maxsize[color[i]]){
            maxsize[color[i]] = size[i];            
        }
    }

    for(int i = 1; i <= m; i++){
        cout << maxsize[i] << " ";
    }
    cout << endl;
}