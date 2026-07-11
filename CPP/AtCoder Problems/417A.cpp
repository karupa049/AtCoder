#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        if(a <= i and i < n - b){
            cout << s[i];
        }
    }
    cout << endl;
}