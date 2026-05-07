#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    //vector<int> a(n);
    //for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> aa(n + 1);
    for(int i = 1; i < n + 1; i++) cin >> aa[i];
    for(int i = 0; i < aa.size(); i++) cout << aa[i] << " "; cout << endl;

    int q;
    cin >> q;

    vector<int> left(q + 1);
    vector<int> right(q + 1);

    for(int i = 1; i < left.size(); i++) cin >> left[i] >> right[i];

    vector<int> sum(n + 1);
    int result = 0;
    for(int i = 0; i < sum.size(); i++){
        result = result + aa[i + 1];
        sum[i + 1] = result;
    }

    for(int i = 0; i < sum.size(); i++) cout << sum[i] << " ";
    cout << endl; for(int i = 0; i < sum.size(); i++) cout << "left " << left[i] << " " << "right " << right[i] << endl;


}
