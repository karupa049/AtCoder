#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    int len = n - s.length();
    string oo = "";

    for(int i = 0; i < len; i++){
        oo += "o";
    }
    cout << oo << s << endl;
}