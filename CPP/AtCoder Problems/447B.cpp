#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    // cout << s << endl;

    map<char, int> smap;

    for(int i = 0; i < s.length(); i++){
        char index = s[i];

        if(smap.count(index) == 0){
            smap[index] = 1;
        }else{
            smap[index] = smap[index] + 1;
        }
    }

    int max = 0;
    for(auto p : smap){
        if(max < p.second){
            max = p.second;
        }
        // cout << "index : " << p.first << ", num : " << p.second << endl;
    }

    // cout << "max " << max << endl;

    string ans;


    for(int i = 0; i < s.length(); i++){
        char c = s[i];
        if(smap[c] != max){
            ans = ans + c;
        }
    }


    cout << ans << endl;








}