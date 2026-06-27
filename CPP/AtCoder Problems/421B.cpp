#include<bits/stdc++.h>
using namespace std;

int main(){
    string x, y;
    cin >> x >> y;


    long long num1 = stoll(x);
    long long num2 = stoll(y);
    long long sum = 0;
    string moji = "";

    for(int i = 1; i <= 10; i++){
        if(i == 1 or i == 2){
            continue;
        }
        
        sum = num1 + num2;
        moji = to_string(sum);
        reverse(moji.begin(), moji.end());
        num1 = num2;
        num2 = stoll(moji);
    }

    cout << num2 << endl;

    // reverse(x.begin(), x.end());
    // cout << x << endl;
    // int num = stoi(x);
    // cout << num << endl;
}