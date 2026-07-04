#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    int result = x + y;

    if(result % 12 == 0){
        cout << "12" << endl;
    }else{
        cout << result % 12 << endl;
    }
}