#include<bits/stdc++.h>
using namespace std;

/*
===========================================================
【問題文】
あなたのスマートフォンには N 曲の音楽が入ったプレイリストがあります。
各曲には「タイトル（文字列）」と「再生時間（秒）」のデータがあります。
N 曲のデータを順番に読み込み、最後にすべての曲の情報を指定のフォーマットで出力するプログラムを書いてください。

【入力例】
3
Lemon 255
Pretender 322
Idol 210

【出力例】
1 ha Lemon 255 second desu
2 ha Pretender 322 second desu
3 ha Idol 210 second desu
===========================================================
*/

struct Kyoku{
    string name;
    int second;
};

int main(){
    int n; 
    cin >> n;

    vector<Kyoku> playlist;

    for(int i= 0; i < n; i++){
        string name;
        int d;

        cin >> name >> d;

        Kyoku number1;
        number1.name = name;
        number1.second = d;

        playlist.push_back(number1);
    }

    for(int i = 0; i < playlist.size(); i++){
        cout << i + 1 << " ha " << playlist[i].name << " " << playlist[i].second <<  " second desu" << endl;
    }

    //これの何がうれしい？
}