#include<bits/stdc++.h>
using namespace std;

// 配達管理の問題を解く
// 配達リクエスト多数、1人で作業

// 利用者　→　配達センターへ運搬 and 依頼　→　配達センターの従業員はシステムに「配達リクエスト」を送信

// 二つ以上のリクエストが同時に割り当てられることはない。
// リクエストtype 通常 0, 速達 1としてみる。
//     同時にリクエストがあるとき速達を優先

// 目的：配達員に適切な配達リクエストを適切な時間に割り当てるプログラムを作成すること。

// 日時フォーマット hh:mm

// 配達リクエスト{
//     id　先頭0の5桁
//     state 状態（配達待ち、配達中、配達済み）
//     type 通常,NORMAL 速達, EXPRESS
//     delivery_time 配達時間
//     };

// 配達員{
//     state 状態（配達中、割り当て待ち）
//     busy_time　この時間帯はリクエスト受理しない and 既に受理されたものも配達員に割り当てられない！！
// }

// 配達員の状態が「割り当て待ち」なら、毎分ごとに？割り当てるべきリクエストがないかを確認する
// if(配達員.state == 割り当て待ち and 今割あっても忙しい時間帯に入らない　配達リクエスト.time != 配達員.busy_time){
//     if(配達リクエスト.type == 速達){
//         配達員に速達のリクエストを割り当て
//     }else{
//         配達員に通常のリクエストを割り当て
//     }
// }

// 配達リクエストがそもそも配達リクエストに入るか入らないかのチェック
// if(それぞれのtypeの配達時間 <= 120){
//     配達リクエスト受理
// }

// 注意ポイント
// 配達リクエストがそもそも配達リクエストに入るか入らないかのチェックと
// 既にある配達リクエストから、配達員に割り当てられるか割り当てられないかのチェックがある

// 処理順序　毎分チェック

// ちょうど現在に配達が完了して入れば、cout << 配達完了のお知らせ << endl;
// その配達リクエスト.state = 配達済み
// 配達員.state = 割り当て待ち

// その時刻で、クエリが与えられたかを確認　→　whileループで1日をすべて分で管理するのかな？？
// あれば、その処理を行う

// その時刻で、配達リクエストが配達員に割り当てられたかを確認
// 配達リクエスト.state = 配達中
// 配達員.state = 配達中

// ログが残る感じなのね。

// 1 10:00 NORMAL aaaaa 20
// 1 10:10 NORMAL bbbbb 20
// 1 10:15 EXPRESS ccccc 20

// idはaaaaaなの？？？　出力を見る限りそうっぽい、始まり0の5桁の数じゃないの？？？？？？？？


enum State { WAITING, DELIVERY, FINISHED };
enum PersonState { WAITING_FOR_TASK, BUSY };

struct Request{
    int date;
    string time_str;
    string type;
    string id;
    int duration;

    State state;
    int finish_time = -1;
};

struct Person{
    PersonState state;
    int busy_time;
    int delivering_request_index = -1;
};

int to_minuts(string time_str){
    vector<string> hhmm;
    string tempo;
    for(int i = 0; i < time_str.size(); i++){
        if(time_str[i] == ':'){
            hhmm.push_back(tempo);
            tempo = "";
        }else{
            tempo += time_str[i];
        }
    }
    hhmm.push_back(tempo);
    int h = stoi(hhmm[0]);
    int m = stoi(hhmm[1]);

    return h * 60 + m;
}



int main(){
    vector<Request> all_request;
    int d, dur;
    string t, type, id;
    
    while(cin >> d >> t >> type >> id >> dur){
        Request r;
        r.date = d;
        r.time_str = t;
        r.type = type;
        r.id = id;
        r.duration = dur;
        r.state = WAITING;
        all_request.push_back(r);
        cout << "読み込んだぞ: " << id << endl; // これが出るか確認
    }

    Person staff;
    //最初は、割り当て待ち and 忙しくない
    staff.state = WAITING_FOR_TASK;
    staff.busy_time = -1;

    vector<Request> request;

    for(int now = 0; now < 1440; now++){
        //配達が完了した　＝＝　配達員は配達中であり、busy_time何時前忙しいフラグに達したとき
        if(staff.state == BUSY and staff.busy_time == now){
            staff.state = WAITING_FOR_TASK;
            cout << request[staff.delivering_request_index].date << " " << request[staff.delivering_request_index].time_str << " " << request[staff.delivering_request_index].id << " has been deliverd" << endl;
        }
        
        for(int i = 0; i < all_request.size(); i++){

        }

    }




}