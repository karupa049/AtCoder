// #include<bits/stdc++.h>
using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

int main(){
    int n;
    cin >> n;
    vector<int> array(n + 1);
    for(int i = 1; i <= n; i++) cin >> array[i];
    // for(int i = 0; i <= n; i++) cout << array[i] << " "; cout << endl;
    // for(int i = 1; i <= n; i++) cout << array[i] << " "; cout << endl;

    vector<bool> passed(n + 1, false);
    passed[0] = true;
    for(int i = 1; i <= n; i++){
        if(array[i] == 0){
            passed[i] = true;
        }else{
            break;
        }
    }

    // for(int i = 1; i <= n; i++){
    //     cout << passed[i] << " ";
    // }
    // cout << endl;

    passed[n] = true;
    for(int i = n; i >= 1; i--){
        if(array[i] == 0){
            passed[i] = true;
            passed[i - 1] = true;
        }else{
            break;
        }
    }

    // for(int i = 1; i <= n; i++){
    //     cout << passed[i] << " ";
    // }
    // cout << endl;

    int count = 0;
    for(int i = 1; i <= n; i++){
        if(passed[i] == false){
            count++;
        }
    }

    cout << count << endl;



    

}