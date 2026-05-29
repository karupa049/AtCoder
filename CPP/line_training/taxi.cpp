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

vector<double> parse_time(string time_str){
    vector<double> hhmmss;
    string tempo;
    for(int i = 0; i < time_str.size(); i++){
        if(time_str[i] == '.' || time_str[i] == ':'){
            hhmmss.push_back(stod(tempo));
            tempo = "";
        }else{
            tempo += time_str[i];
        }
    }
    hhmmss.push_back(stod(tempo));
    return hhmmss;
}

// 今の時間が深夜１、ピーク２、通常３
int get_time_type(string time_str){
    vector<double> hhmmss = parse_time(time_str);

    int h = hhmmss[0];
    int m = hhmmss[1];
    int s = hhmmss[2];

    if(h >= 0 and h < 6){
        return 1;
    }else if((h >= 6 and h < 9) || (h == 9 and m < 30) || (h >= 18 and h < 24)){
        return 2;
    }else{
        return 0;
    }
}

double get_seconds(string time_str){
    //13:50:00.245これを秒になおすとする
    vector<double> hhmmss = parse_time(time_str);

    int h = hhmmss[0];
    int m = hhmmss[1];
    int s = hhmmss[2];
    int ms = hhmmss[3];

    double hhmmssToSecond = 3600 * h + 60 * m + s + (ms / 1000.0);
    return hhmmssToSecond;

}

int get_increment_fare(string time_str){
    int type = get_time_type(time_str);
    double base = 40.0;
    if(type == 1){
        return base * 1.5;
    }else if(type == 2){
        return base * 1.3;
    }else{
        return base;
    }
}

int main(){

    double dist;
    double total_dist = 0;
    double total_low_speed_sec = 0;
    double next_charge_dist = 1400.0;
    string prev_time_str;
    string curr_time_str;

    cin >> prev_time_str >> dist;

    int initial_type = get_time_type(prev_time_str);
    cout << get_time_type(prev_time_str) << endl;

    int total_fare = 0;
    if(initial_type == 0){
        total_fare = 400;
    }else if(initial_type == 1){
        total_fare = 600;
    }else if(initial_type == 2){
        total_fare = 520;
    }

    while(cin >> curr_time_str >> dist){
        cout <<  "時間 : " << curr_time_str << "　距離 : "<< dist << endl;
        double time_diff = get_seconds(curr_time_str) - get_seconds(prev_time_str);
        double speed = dist / time_diff;
        
        if(speed <= 10.0 / 3.6){
            //typeにより、倍率変わる
            total_low_speed_sec += time_diff;
            if(total_low_speed_sec >= 45){
                total_fare += get_increment_fare(curr_time_str);
                total_low_speed_sec -= 45;
            }
        }

        total_dist += dist;
        while(total_dist >= next_charge_dist){
            int fare = get_increment_fare(curr_time_str);
            total_fare += fare;

            if(next_charge_dist < 10000.0){
                next_charge_dist += 400.0;
            }else{
                next_charge_dist += 350.0;
            }
        }
        prev_time_str = curr_time_str;
    }

    cout << total_fare << endl;





}



