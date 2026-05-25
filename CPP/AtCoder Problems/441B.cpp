#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    int q; 
    cin >> q;

    // cout << n << m << s << t << endl;
    
    vector<string> word(q + 1);
    for(int i = 1; i <= q; i++) cin >> word[i];
    // for(int i = 1; i <= q; i++) cout << word[i] << " "; cout << endl;

    // どちらもtrue確定でunknown
    // これのelse ifで文字列Sと文字列Tのうち、どちらか片方のみに含まれているものがあるとどちらの言語化確定する。

    for(int i = 1; i <= q; i++){
        bool takahasi = true;
        bool aoki = true;

        for(int k = 0; k < word[i].length(); k++){
            bool found = false;
            for(int j = 0; j < s.length(); j++){
                if(word[i][k] == s[j]){
                    found = true;
                }
            }
            if(found == false){
                takahasi = false;
            }
        }

        for(int k = 0; k < word[i].length(); k++){
            bool found = false;
            for(int j = 0; j < t.length(); j++){
                if(word[i][k] == t[j]){
                    found = true;
                }
            }
            if(found == false){
                aoki = false;
            }
        }

        if(takahasi == true and aoki == true){
            cout << "Unknown" << endl;
        }else if( takahasi == true and aoki == false){
            cout << "Takahashi" << endl;
        }else if(takahasi == false and aoki == true){
            cout << "Aoki" << endl;
        }
    }

}