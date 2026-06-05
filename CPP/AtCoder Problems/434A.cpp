#include<bits/stdc++.h>
using namespace std;

int main(){
    int w, b;
    cin >> w >> b;
    w = 1000 * w;

    int n = 0;
    while(true){
        n++;
        if(w < n * b){
            break;
        }
    }
    cout << n << endl;

}