#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;

    vector<int> x(q + 1);
    vector<int> y(q + 1);
    for(int i = 1; i <= q; i++) cin >> x[i] >> y[i];
    for(int i = 1; i <= q; i++) cout << "x : " << x[i] << ", y : " << y[i] << endl;

    vector<int> before;
    for(int i = 1; i <= n; i++) before.push_back(i);
    for(int i = 0; i < n; i++) cout << before[i] << " "; cout << endl;

    

}