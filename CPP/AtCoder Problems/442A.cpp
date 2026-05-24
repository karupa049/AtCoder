#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    // cout << s << endl;

    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'i' or s[i] == 'j'){
            count++;
        }else{
            continue;
        }
    }
    cout << count << endl;
}