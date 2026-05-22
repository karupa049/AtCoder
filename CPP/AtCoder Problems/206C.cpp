#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  n;
    cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    // for(int i = 1; i <= n; i++) cout << a[i] << " "; cout << endl;

    map<long, long> swapmap;

    for(int i = 1; i <= n; i++){
        int index = a[i];

        if(swapmap.count(index) == 0){
            swapmap[index] = 1;
        }else{
            swapmap[index] = swapmap[index] + 1;
        }
    }

    // for(auto p : swapmap){
    //     cout << "index : " << p.first << ", num : " << p.second << endl;
    // }

    long long ans = n * (n - 1) / 2;

    for(auto p : swapmap){
        long long num = p.second;

        ans = ans - (num * (num - 1) / 2);
    }

    cout << ans << endl;



}