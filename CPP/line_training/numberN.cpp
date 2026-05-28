#include<bits/stdc++.h>
using namespace std;

// https://engineering.linecorp.com/ja/blog/algorithm-description-for-coding-tests

// 1から昇順で数えたときに、N番目にあたる素数を出力するコマンドラインツールを作成してください。
// 入力：出力したい素数の順番 N
// 出力：N番目の素数

bool isPrime(int n){
    if(n < 2){
        return false;
    }else{
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int count = 0;
    int num = 1;

    while(count < n){
        num++;
        if(isPrime(num)){
            count++;
        }
    }

    cout << num << endl;
}