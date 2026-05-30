#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; //ｎシャリの個数　ｍネタの個数
    cin >> n >> m;

    //一対一、正し 2a >= b
    //作ることのできる最大の寿司の個数を求めて、
    
    //それぞれの重さを小さい順にした方がよさそう

    vector<int> a(n);
    vector<int> b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    // for(int i = 0; i < n; i++) cout << a[i] << " "; cout << endl;
    // for(int i = 0; i < m; i++) cout << b[i] << " "; cout << endl;

    //並び変える
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    // for(int i = 0; i < n; i++) cout << a[i] << " "; cout << endl;
    // for(int i = 0; i < m; i++) cout << b[i] << " "; cout << endl;

    //a[i]から順にみていき、b[j]で　2a[i] >= b[i]　が見つかったときにカウントすればよい？？

    //お目当てが見つかったら、bの範囲狭めていかないといけない

    int count = 0;
    int j = 0;
    for(int i = 0; i < n; i++){
        if(b[j] <= a[i] * 2 and j < m){
            count++;
            j++;
        }
    }

    cout << count << endl;
}