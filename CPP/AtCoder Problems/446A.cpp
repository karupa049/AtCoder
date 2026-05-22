#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    // cout << s << endl;

    s[0] = tolower(s[0]);

    // cout << s << endl;

    string ans = "";

    ans = "Of" + s;

    cout << ans << endl;
}