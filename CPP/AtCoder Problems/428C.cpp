#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "";
    int rcount = 0;
    int lcount = 0;
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int type;
        cin >> type;
        if(type == 1){
            char c;
            cin >> c;

            if(c == '('){
                lcount++;
            }else{
                rcount++;
            }

            s += c;

            // cout << s << endl;

            if(lcount == rcount){
                if((s[0] == '(' and s[s.length() - 1] == ')') || s.empty()){
                    cout << "Yes" << endl;
                }else{
                    cout << "No" << endl;
                }
            }else{
                cout << "No" << endl;
            }

        }else{
            if(s[s.length() - 1] == '('){
                lcount--;
            }else{
                rcount--;
            }

            string t;
            t = s.substr(0, s.length() - 1);
            s = t;
            // cout << s << endl;

            if(lcount == rcount){
                if((s[0] == '(' and s[s.length() - 1] == ')') || s.empty()){
                    cout << "Yes" << endl;
                }else{
                    cout << "No" << endl;
                }
            }else{
                cout<< "No" << endl;
            }
        }
    }
}