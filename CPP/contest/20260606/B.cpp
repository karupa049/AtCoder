#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> person(n + 1);
    vector<int> shink(n + 1);
    for(int i = 1; i <= n; i++) cin >> person[i];
    for(int i = 1; i <= n; i++) cin >> shink[i];
    // for(int i = 1; i <= n; i++) cout << person[i] << " "; cout << endl;
    // for(int i = 1; i <= n; i++) cout << shink[i] << " "; cout << endl;

    bool flag = true;
    for(int i = 1; i <= n; i++){
        if(shink[person[i]] != i){
            flag = false;
        }
    }

    if(flag == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}