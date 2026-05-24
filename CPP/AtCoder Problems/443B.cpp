#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    cout << n << " " << k << endl;

    //今ｎ歳　ｎ個の豆食った

    int sum = 0;
    int yearcount = 0;

    while(sum < k){
        sum = sum + n + yearcount;
        yearcount++;
    }

    cout << yearcount - 1 << endl;
}