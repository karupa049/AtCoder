#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin >> s;
    // cout << s.length();
    string moji = "";
    for(int i = 0; i < s.length(); i++){
        if(i == (s.length() + 1) / 2 - 1){
            continue;
        }else{
            moji += s[i];
        }
    }

    cout << moji << endl;
}