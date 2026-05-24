#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;

    vector<int> array(n + 1);
    for(int i = 1; i <= n; i++) cin >> array[i];
    // for(int i = 1; i <= n; i++) cout << array[i] << " "; cout << endl;

    // n個クエリがあるようなもん
    // n = 1の時,x = array[1]
    // 10^100動かすといっても、途中で（早い段階で）答え確定する？
    // 終了条件 index  == 中身の数値
    // 何を出力する？　終了条件の時のindexか、、
    // index 1 に 数値 2 があります
    // index 2 を見ます 数値は 4 です
    // index 4 を見ます 数値は 5 です
    // index 5 を見ます 数値は 5 です　→　終了条件より、10^100するまでもなく終了！！

    // for(int i = 1; i <= n; i++){
    //     int index = i;
    //     int x = array[index];

    //     while(index != x){
    //         index = x;
    //         x = array[index];
    //     }

    //     cout << index << " ";
    // }
    // cout << endl;

    vector<int> ans(n + 1);

    for(int i = n;  i >= 1; i--){
        if(array[i] == i){
            ans[i] = i;
        }else{
            ans[i] = ans[array[i]];
        }
    }

    for(int i = 1; i <= n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;


}