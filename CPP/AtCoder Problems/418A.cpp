#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    if(s[n - 3] == 't' and s[n - 2] == 'e' and s[n - 1] == 'a'){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}