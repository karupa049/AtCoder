#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> array(n + 1);
    for(int i = 1; i <= n; i++) cin >> array[i];
    int x;
    cin >> x;

    bool flag = false;
    for(int i = 1; i <= n; i++){
        if(array[i] == x){
            flag = true;
            break;
        }
    }

    if(flag == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}