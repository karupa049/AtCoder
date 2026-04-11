#include<bits/stdc++.h>
using namespace std;

int main(){
    // 10111(2) → 23(10)
    int n;
    cin >> n;

    int ans = 0;
    int base = 1;

    while (n > 0){
        int digit = n % 10;

        if (digit == 1){
            ans = ans + base;
        }

        n = n / 10;
        base = base * 2;
    }

    cout << ans << endl;
}