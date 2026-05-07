#include <iostream>   // cin, cout 用
#include <vector>     // vector 用
#include <algorithm>  // sort, min 用
using namespace std;

int main(){
    int x;
    cin >> x;

    bool flag = false;

    for(int i = 1; i < 7; i++){
        for(int j = 1; j < 7; j++){
            for(int k = 1; k < 7; k++){
                if(i + j + k == x){
                    flag = true;
                }
            }
        }
    }

    if(flag == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }




}