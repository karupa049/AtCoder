#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int x;

    int count = 0;

    while (m != 0){
        x = n % m;
        m = x;
        count++;
    }
    cout << count  << endl;
}