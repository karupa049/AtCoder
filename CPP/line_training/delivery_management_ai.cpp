#include <bits/stdc++.h>
using namespace std;

// 構造体の変数の並び順を、入力データ {d, t, type, id, dur} の順番に合わせる
struct Request { int date; string t, type, id; int duration, finish_time; };
struct Person { int busy_until = -1; Request task; };

int to_min(string s) { return stoi(s.substr(0, 2)) * 60 + stoi(s.substr(3, 2)); }
string to_str(int m) { char b[10]; sprintf(b, "%02d:%02d", m / 60, m % 60); return string(b); }

int main() {
    freopen("input_delivery_management.txt", "r", stdin);
    vector<Request> all;
    
    // 変数をちゃんと宣言する
    int d, dur;
    string t, type, id;
    while (cin >> d >> t >> type >> id >> dur) {
        all.push_back({d, t, type, id, dur, -1}); // 順番通りに入れ、finish_timeには-1を入れる
    }

    Person staff;
    queue<Request> q[2]; // q[0]: normal, q[1]: express
    
    for (int now = 0; now < 1440; now++) {
        // 1. 完了処理
        if (staff.busy_until == now) 
            cout << staff.task.date << " " << to_str(now) << " " << staff.task.id << " has been deliverd" << endl;

        // 2. 受理処理
        for (auto &r : all) {
            if (now == to_min(r.t)) {
                if (r.duration > 120) cout << r.date << " ERROR: Delivery time cannot exceed 120 minutes." << endl;
                else {
                    cout << r.date << " " << r.t << " " << r.id << " has been accepted." << endl;
                    (r.type == "EXPRESS" ? q[1] : q[0]).push(r);
                }
            }
        }

        // 3. 割り当て処理
        if (staff.busy_until <= now && (!q[0].empty() || !q[1].empty())) {
            Request trg = q[1].empty() ? q[0].front() : q[1].front();
            (q[1].empty() ? q[0] : q[1]).pop();
            staff = {now + trg.duration, trg};
            cout << trg.date << " " << to_str(now) << " " << trg.id << " has been assigned." << endl;
        }
    }
}