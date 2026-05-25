#include<bits/stdc++.h>
using namespace std;

/*
===========================================================
【問題文】
あなたの手元に N 人のプロフィールデータ（名前と年齢）があります。
この N 人を、以下のルールに従って並べ替えて出力するプログラムを書いてください。

1. 基本ルール: 年齢が「若い（小さい）」順に並べる。
2. 同点ルール: もし年齢が全く同じ人がいた場合は、名前の「辞書順（アルファベット順）」で早い方を前にする。

【入力例】
4
Takahashi 25
Aoki 20
Snuke 20
Yandex 30

【出力例】
(※出力前に件数などのデバッグ出力が含まれます)
-------------------------------------------------------
1 ha Aoki de 20 desu
2 ha Snuke de 20 desu
3 ha Takahashi de 25 desu
4 ha Yandex de 30 desu
===========================================================
*/

// structを使わないで実装してみよう
// 

int main(){
    int n;
    cin >> n;

    vector<string> name(n + 1);
    vector<int> age(n + 1);

    for(int i = 1; i <= n; i++) cin >> name[i] >> age[i];
    for(int i = 1; i <= n; i++) cout << name[i] << " "; cout << endl;
    for(int i = 1; i <= n; i++) cout << age[i] << " "; cout << endl;

    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(age[j] < age[i] || (age[j] == age[i] and name[j] < name[i])){
                int tmpa = age[i];
                age[i] = age[j];
                age[j] = tmpa;

                string tmpn = name[i];
                name[i] = name[j];
                name[j] = tmpn;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        cout << i << " ha " << name[i] << " de " << age[i] << " desu" << endl;
    }

    //structを使わないとvectorを使いがち、、
    //vectorを何個も宣言しないでいいからstructは便利
    //vectorごとに対応しているデータを扱うときはstructが便利。今回で言うと、nameとageのindexが対応している
    
    
}