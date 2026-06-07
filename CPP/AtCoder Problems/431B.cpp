#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, n;
    cin >> x >> n;

    vector<int> weight(n + 1);
    for(int i = 1; i <= n; i++) cin >> weight[i];
    // for(int i = 1; i <= n; i++) cout << weight[i] << " "; cout << endl;

    int q;
    cin >> q;

    vector<int> p(q + 1);
    for(int i = 1; i <= q; i++) cin >> p[i];
    // for(int i = 1; i <= q; i++) cout << p[i] << " "; cout << endl;

    vector<bool> used(n + 1, false);

    for(int i = 1; i <= q; i++){
        if(used[p[i]] == false){
            x  += weight[p[i]];
            used[p[i]] = true;
            cout << x << endl;
        }else{
            x -= weight[p[i]];
            used[p[i]] = false;
            cout << x << endl;
        }
    }
}