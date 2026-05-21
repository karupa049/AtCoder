#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int n, l, r;
    cin >> n >> l >> r;
    
    string s;
    cin >> s;
    //cout << s << endl;

    ll count = 0;
    for(int i = 0; i < s.length(); i++){
        for(int j = 0; j < s.length(); j++){
            if(s[i] == s[j] and l <= j - i and j - i <= r){
                count++;
            }
        }
    }

    cout << count << endl;
}

