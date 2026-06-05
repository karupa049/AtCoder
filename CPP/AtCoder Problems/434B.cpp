#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> type(n + 1);
    vector<int> size(n + 1);
    for(int i = 1; i <= n; i++) cin >> type[i] >> size[i];
    // for(int i = 1; i <= n; i++) cout << type[i] << " " << size[i] << endl;

    vector<vector<int>> array(m + 1);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(type[i] == j){
                array[j].push_back(size[i]);
            }
        }
    }

    // arrayの2次元全出力

    // for(int i = 1; i <= m; i++){
    //     for(int j = 0; j < array[i].size(); j++){
    //         cout << array[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int sum = 0;
    int count = 0;
    for(int i = 1; i <= m; i++){
        for(int j = 0; j < array[i].size(); j++){
            // cout << array[i][j] << " ";
            sum += array[i][j];
            count++;
        }
        cout << (double)sum / count << endl;
        sum = 0;
        count = 0;
    }


}