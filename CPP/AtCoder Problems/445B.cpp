#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    for(int i = 0; i < n; i++) cout << s[i] << " "; cout << endl;

    int max = s[0].length();
    cout << max << endl;

    for(int i = 1; i < n; i++){
        if(s[i].length() > max){
            max = s[i].length();
        }
    }
    cout << max << endl;

}