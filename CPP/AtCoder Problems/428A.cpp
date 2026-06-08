#include<bits/stdc++.h>
using namespace std;

int main(){
    int s, a, b, x;
    cin >> s >> a >> b >> x;

    int Q = x / (a + b);
    // cout << Q << endl;
    int R = x % (a + b);
    // cout << R << endl;

    if(R > a){
        cout << s * a * Q + s * a << endl;
    }else{
        cout << s * a * Q + s * R << endl;
    }
}