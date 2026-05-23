#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "HelloWorld";
    int x;
    cin >> x;

    for(int i = 0; i < s.length(); i++){
        if(i == x - 1){
            continue;
        }else{
            cout << s[i];
        }
    }
    cout << endl;
}