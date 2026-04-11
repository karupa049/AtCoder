#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    string s;
    cin >> s;

    string result = "";
    bool check = false;

    for (int i = 0; i < N; i++){
        if(s[i] == 'o' && check == false){
            continue;
        }else{
            check = true;
            result = result + s[i];
        }
    }
    cout << result << endl;

} 
