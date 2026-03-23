#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, A;
    cin >> N >> A;

    int i = 0;
    while (i < N){
        int B1;
        string op1;
        cin >> op1 >> B1;

        if(op1 == "+"){
            A = A + B1;
        }else if(op1 == "-"){
            A = A - B1;
        }else if(op1 == "*"){
            A = A * B1;
        }else if(op1 == "/" && B1 != 0){
            A = A / B1;
        }else{
            cout << "error" << endl; 
            break;
        }
        i++;
        cout << i  << ":" << A << endl;
    }

}