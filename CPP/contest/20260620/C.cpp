#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> h(n + 1);
    vector<int> l(n + 1);
    for(int i = 1; i <= n; i++) cin >> h[i] >> l[i];

    vector<int> max_h(n + 2, 0); 
    for(int i = n; i >= 1; i--) {
        max_h[i] = max(max_h[i+1], h[i]);
    }

    int q;
    cin >> q;

    for(int i = 1; i <= q; i++){
        int t;
        cin >> t;

        auto it = upper_bound(l.begin() + 1, l.end(), t);
        int index = distance(l.begin(), it);

        if(index > n) {
            cout << 0 << endl;
        } else {
            cout << max_h[index] << endl;
        }
    }
}