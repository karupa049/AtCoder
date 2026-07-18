#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> array(n + 1);
    for(int i = 1; i <= n; i++) cin >> array[i];

    bool flag = true;
    for(int i = 1; i <= n; i++){
        if(array[i] >= 0){
            flag = false;
        }
    }

    if(flag == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}