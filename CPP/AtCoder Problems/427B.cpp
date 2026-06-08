#include<bits/stdc++.h>
using namespace std;

int f(int x){
    int sum = 0;

    while(x > 0){
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

int main(){
    int n;
    cin >> n;

    vector<int> a(n + 1);
    a[0] = 1;


    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans += f(a[i - 1]);
        a[i] = ans;
    }

    cout << a[n] << endl;

}