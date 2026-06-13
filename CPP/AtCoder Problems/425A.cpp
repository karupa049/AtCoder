#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    long long result = 0;
    bool isOdd = false;
    for(int i = 1; i <= n; i++){
        long long cube = i * i * i;
        if(i % 2 == 1){
            result = result - cube;
        }else{
            result = result + cube;
        }
    }

    cout << result << endl;
}