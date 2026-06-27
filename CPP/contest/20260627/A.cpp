#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int counte = 0;
    int countw = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'E'){
            counte++;
        }else{
            countw++;
        }
    }


    if(counte < countw){
        cout << "West" << endl;
    }else{
        cout << "East" << endl;
    }
}