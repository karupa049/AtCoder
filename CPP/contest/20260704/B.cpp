#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y, l, r, a, b;
    cin >> x >> y >> l >> r >> a >> b;
    
    int result = 0;
    for(int i = a; i < b; i++){
        if(l <= i && i < r){
            result += x;
        }else{
            result += y;
        }
    }

    cout << result << endl;
}