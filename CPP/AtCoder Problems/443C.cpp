#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;

    vector<int> array(n + 1);
    for(int i = 1; i <= n; i++) cin >> array[i];
    // for(int i = 1; i <= n; i++) cout << array[i] << " "; cout << endl;

    // 0 - 700秒のお仕事
    // 0 時点で chokutterスタート
    // 100 - 200まで閉じてる　この間 150は閉じている間なので無視？？if文でchokkutterが開いているか閉じているか管理しそう
    // 200 - 300まで開いている
    // 300 - 400まで閉じている
    // 400 - 700まで開いている
    // 0 - 100, 200 - 300, 400 - 700 合計500　なんかうまいことできそう
    // for文で一秒一秒開いているか開いていないかチェックするのはダメなんだろうなー

    int nextopen = 0;
    int opentime = 0;
    for(int i = 1; i <= n; i++){
        if(nextopen < array[i]){
            opentime = opentime + (array[i] - nextopen);
            nextopen = array[i] + 100;
            // cout << i << " : " << opentime << endl;
        }else{
            continue;
        }
    }
    if(nextopen < t){
        opentime = opentime + (t - nextopen);
    }

    cout << opentime << endl;
}