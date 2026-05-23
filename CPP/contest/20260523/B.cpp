#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    // for(int i = 0; i < n; i++) cout << s[i] << " ";cout << endl;

    for(int i = 0; i < n; i++){
        if(s[i][0] == 'a' or s[i][0] == 'b' or s[i][0] == 'c'){
            cout << 2;
        }else if(s[i][0] == 'd' or s[i][0] == 'e' or s[i][0] == 'f'){
            cout << 3;
        }else if(s[i][0] == 'g' or s[i][0] == 'h' or s[i][0] == 'i'){
            cout << 4;
        }else if(s[i][0] == 'j' or s[i][0] == 'k' or s[i][0] == 'l'){
            cout << 5;
        }else if(s[i][0] == 'm' or s[i][0] == 'n' or s[i][0] == 'o'){
            cout << 6;
        }else if(s[i][0] == 'p' or s[i][0] == 'q' or s[i][0] == 'r' or s[i][0] == 's'){
            cout << 7;
        }else if(s[i][0] == 't' or s[i][0] == 'u' or s[i][0] == 'v'){
            cout << 8;
        }else if(s[i][0] == 'w' or s[i][0] == 'x' or s[i][0] == 'y' or s[i][0] == 'z'){
            cout << 9;
        }
    }
    cout << endl;

}