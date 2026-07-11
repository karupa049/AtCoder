#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, l, r;
    cin >> n >> l >> r;
    string s;
    cin >> s;

    bool flag = true;
    for(int i = 1; i <= n; i++){
        // cout << i << endl;
        if(l <= i and i <= r){
            if(s[i - 1] == 'x'){
                flag = false;
            }
        }
    }

    if(flag == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}