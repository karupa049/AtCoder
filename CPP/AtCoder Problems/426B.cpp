#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    map<char, int> map;

    for(int i = 0; i < s.length(); i++){
        char index = s[i];
        map[index]++;
    }

    // for(auto p : map){
    //     cout << p.first << " " << p.second << endl;
    // }

    for(auto p : map){
        if(p.second == 1){
            cout << p.first << endl;
        }
    }
    
}