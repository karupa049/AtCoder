#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int num;
    cin >> num;

    //cout << s << endl;

    for(int i = 0; i < s.length(); i++){
        if(i >= num and i < s.length() - num){
            cout << s[i];
        }
    }
    cout << endl;


}