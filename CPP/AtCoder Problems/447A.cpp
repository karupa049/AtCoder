#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    //席に座らせられる最大は奇数の時、奇数/2 + 1 偶数の時、偶数/2 

    int max = 0;
    if(n % 2 == 0){
        max = n / 2;
        if(m <= max){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }else{
        max = n / 2 + 1;
        if(m <= max){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }


}