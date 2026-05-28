#include<bits/stdc++.h>
using namespace std;

// https://engineering.linecorp.com/ja/blog/commentary-of-coding-test-2021

// 1kmまで定額400円
// 1kmから10kmまで400mごとに+40 → 1.4kmは440円ってこと？？
// 10kmから無限まで350mごとに+40
// 時速10km/h以下だと、状態：低速運賃 45sごとに+40
// 深夜12時-朝6時の間、状態：深夜割増料金 初乗り、加算時の料金が+50%
// 朝6時-9時半、夕方6時-深夜12時の間、状態：ピークタイム割増料金 初乗り運賃や、加算時の料金が+30%

// タクシーは三つのメーターを持っている
// ・距離メーター
// ・低速走行時間メーター
// ・運賃メーター

// タクシーはメータを更新するためにレコード（時間、走行距離）を保存
// 初期レコード　（乗車した地点の時間、０）
// 走行レコード　（ある程度時間、ある程度距離）
// 走行レコード　（ある程度時間、ある程度距離）
// 走行レコード　（ある程度時間、ある程度距離）
// 走行レコード　（降車地点の時間、最終走行距離ー前回の走行距離）

// レコードが記録されたときには、三つのメータのうち必ず1つ変化する

// やりたいこと
// これらのレコードや入力を元に「正しい運賃」を出力したい

// 入力
// 13:50:00.245 0.0
// 13:50:11.123 4.0
// 13:50:12.125 10.2
// 13:50:13.100 8.7

// 距離メーター           走行距離を足していく
// 低速走行時間メーター    時速10km/h以下時の場合計算する
// 運賃メーター           最終的な合計金額を記録していく           レコードは全部差分で、メーターは全部合計なのかな？？？

// 初乗り料金は
// 00:00-06:00     深夜            600
// 06:00-09:30     ピークタイム     520
// それ以外         通常            400

// 今の時間が深夜１、ピーク２、通常３
int get_time_type(string time){
    vector<string> hhmmss;
    string tempo;
    for(int i = 0; i < time.length(); i++){
        if(time[i] == '.'){
            hhmmss.push_back(tempo);
            tempo = "";
        }else if(time[i] == ':'){
            hhmmss.push_back(tempo);
            tempo = "";
        }else{
            tempo += time[i];
        }
    }
    hhmmss.push_back(tempo);

    for(int i = 0; i < hhmmss.size(); i++){
        cout << hhmmss[i] << " ";
    }
    cout << endl;

    int h = stoi(hhmmss[0]);
    // h= 3600 * h;
    int m = stoi(hhmmss[1]);
    // m = 60 * m;
    int s = stoi(hhmmss[2]);

    // int time_second = h + m + s;
    // cout << time_second << endl;

    if(h >= 0 and h < 6){
        return 1;
    }else if((h >= 6 and h < 9) || (h == 9 and m < 30) || (h >= 18 and h < 24)){
        return 2;
    }else{
        return 0;
    }
}

int main(){
    // string time = "13:00:00.245";
    string time = "8:50:11.123";
    cout << get_time_type(time) << endl;
}



