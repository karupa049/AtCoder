#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;

    //    1    + 1 + 1 -   1

    char right = S.at(0) - '0';
    char left = S.at(S.size() - 1) - '0';

    int result = 0;
    char op;

    for (int i = 1; i < S.size(); i++){
        //cout << S.at(i) << endl;
        if (i % 2 == 1){                    //偶数の時：オペランド
            op = S.at(i);
            //cout << "debug : " << op << endl;
            //cout << "typeId : " << typeid(op).name() << endl;
        }else if(i == S.size() - 1){
            if (op == '+'){
                result = result + int(right) + int(left);
                right = 0;
            }else if (op == '-'){
                result = result + int(right) - int(left);
                right = 0;
            }else{
                cout << "error" << endl;
            }
        }else{                              //奇数の時：整数
            if (op == '+'){
                result = result + int(right) + int(S.at(i) - '0');
                right = 0;
            }else if (op == '-'){
                result = result + int(right) - int(S.at(i) - '0');
                right = 0;
            }else{
                cout << "error" << endl;
            }
        }
    }
    cout << result << endl;


    //cout << left << endl;

}