#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(k + 1);
    vector<int> b(k + 1);

    for(int i = 1; i <= k; i++) cin >> a[i] >> b[i];
    // for(int i = 1; i <= k; i++) cout << a[i] << " " << b[i] << endl;

    vector<int> solve(n + 1, 0);
    vector<int> last(n + 1, -1);

    for(int i = 1; i <= k; i++){
        solve[a[i]]++;

        if(solve[a[i]] == m){
            last[a[i]] = i;
        }
    }

    vector<pair<int, int>> winners;
    for (int i = 1; i <= n; i++) {
        if (last[i] != -1) {
            winners.push_back({last[i], i});
        }
    }




    sort(winners.begin(), winners.end());

    for (auto p : winners) {
        cout << p.second << " "; 
    }
    cout << endl;

}