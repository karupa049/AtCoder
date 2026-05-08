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
    for(int i = 1; i <= n; i++){
        sum[i] = sum[i - 1] + aa[i];
    }

    for(int i = 0; i < sum.size(); i++) cout << sum[i] << " ";
    cout << endl; 
    
    for(int i = 1; i <= q; i++){
    // 区間 [L, R] の「あたり」の数
    int wins = sum[right[i]] - sum[left[i] - 1];
    
    // その区間の長さ（全回数）
    int total = right[i] - left[i] + 1;
    
    // 「はずれ」の数 = 全体 - あたり
    int loses = total - wins;

    if(wins > loses) cout << "win" << endl;
    else if(wins < loses) cout << "lose" << endl;
    else cout << "draw" << endl;
}

}
