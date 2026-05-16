#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, q;
    cin >> x >> q;

    vector<int> a(q);
    vector<int> b(q);

    for(int i = 0; i < q; i++) cin >> a[i] >> b[i];

    /*
    for(int i : b){
        cout << i << " ";
    }
    */

    vector<int> v;
    v.push_back(x);

    for(int i = 0; i < q; i++){
        auto it_a = lower_bound(v.begin(), v.end(), a[i]);
        v.insert(it_a, a[i]);
        auto it_b = lower_bound(v.begin(), v.end(), b[i]);
        v.insert(it_b, b[i]);

        /*
        cout << i + 1 << " count: ";
        for(int val : v){
            cout << val << " ";
        }
        cout << endl;
        */

        cout << v[v.size() / 2] << endl;
    }


}
