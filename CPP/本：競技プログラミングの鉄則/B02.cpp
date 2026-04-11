#include <bits/stdc++.h>
using namespace std;

int main(){
    int start, end;
    cin >> start >> end;


    bool flag = false;

    for (int i = start; i < end + 1; i++){
        //cout << i << endl;
        if(100 % i == 0){
            flag = true;
            break;
        }
    }

    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


}