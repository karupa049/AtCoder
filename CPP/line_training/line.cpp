#include<bits/stdc++.h>
using namespace std;

int main(){
    //10:30を630に変換する。

    string s;
    cin >> s;
    cout << s << endl;

    vector<string> jikan;
    string ans;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ':'){
            ans += s[i];
        }else{
            jikan.push_back(ans);
            ans = "";
        }
    }
    jikan.push_back(ans);

    for(int i = 0; i < jikan.size(); i++){
        cout << jikan[i] << " ";
    }
    cout << endl;

    int h = stoi(jikan[0]);
    int m = stoi(jikan[1]);

    int result = 0;
    result = h * 60 + m;

    cout << result << endl;
}