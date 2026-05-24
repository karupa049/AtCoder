#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int k;
    cin >> n >> k;

    // cout << n << " " << k << endl;

    //整数n以下すべてに対して？？？？？

    int find = 0;

    for(int i = 1; i <= n; i++){
        string s = to_string(i);
        int len = s.length();
        int sum = 0;
        int count = 0;
        
        while(count < len){
            sum = sum + (s[count] - '0');
            count++;
        }

        if(sum == k){
            find++;
        }

        // cout << "sum " << i << " " << sum << endl;
    }

    cout << find << endl;
}