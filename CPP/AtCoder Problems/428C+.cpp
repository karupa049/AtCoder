#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '('){
            count++;
        }else{
            count--;
        }

        if(count < 0){
            return false;
        }
    }

    if(count == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    string s = "";
    int q;
    cin >> q;
    
    for(int i = 0; i < q; i++){
        int type;
        cin >> type;
        
        if(type == 1){
            char c;
            cin >> c;
            s += c;
        }else{
            if(!s.empty()){
                s.pop_back();
            }
        }

        if(isValid(s)){
            cout << "Yes" << "\n";
        }else{
            cout << "No" << "\n";
        }
    }
    
    return 0;
}