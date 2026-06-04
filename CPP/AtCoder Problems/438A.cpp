#include<bits/stdc++.h>
using namespace std;

int main(){
    int d, f;
    cin >> d >> f;

    //一年がd日、七日ごとにコンテスト開催
    //ある年の最初のコンテストは一年のうちのf日目に開催された
    //その次の年の最初嗚コンテストは一年のうち何日目に開催されますか？

    // 1年 365日 
    
    int remain = d - f;
    int result = remain % 7;
    cout << 7 - result << endl;
}