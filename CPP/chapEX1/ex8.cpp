#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    int p;
    cin >> p;

    if(p == 2){
        string text;
        cin >> text;
        cout << text << "!" << endl;
    }

    int price;
    cin >> price;

    int N;
    cin >> N;
    cout << price * N << endl;
    */


    int p;
    cin >> p;

    string text = ""; // パターン2のとき用の保存場所
    if (p == 2) {
        cin >> text;
    }

    int price, N;
    cin >> price >> N;

    // --- ここから下でまとめて出力 ---
    if (p == 2) {
        cout << text << "!" << endl;
    }
    cout << price * N << endl;
    
}