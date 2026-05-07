#include <iostream>  // 入出力 (cin, cout)
#include <vector>    // 配列 (vector)
#include <string>    // 文字列 (string)
#include <algorithm> // 便利な関数 (sort, max, min, count)
#include <cmath>     // 数学関数 (abs, sqrt)
#include <set>       // 集合 (set)
#include <map>       // 辞書 (map)

using namespace std;

int main(){
    int num, q;
    cin >> num >> q;
    vector<int> day(num);
    vector<int> allday(num + 1);
    for(int i = 0; i < day.size(); i++)cin >> day[i];

    
    for(int i = 0; i < day.size(); i++){
        cout << day[i] << " ";
    }
    cout << endl;
    

    for(int i = 0; i < num; i++){
        allday[i + 1] = allday[i] + day[i];
    }

    
    for(int i = 0; i < allday.size(); i++){
        cout << allday[i] << " ";
    }
    
    
    int start, end;
    int count = 0;

    while(count < q){
        cin >> start >> end;
        cout << allday[end] - allday[start - 1] << endl;
        count++;
    }
}