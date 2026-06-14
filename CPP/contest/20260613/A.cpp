#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '0' or s[i] == '1' or s[i] == '2' or s[i] == '3' or s[i] == '4' or s[i] == '5' or s[i] == '6' or s[i] == '7' or s[i] == '8' or s[i] == '9'){
            cout << s[i];
        }
    }
    cout << endl;
}