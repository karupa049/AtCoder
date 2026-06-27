#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> change(n + 1, vector<int>(4));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 3; j++){
            cin >> change[i][j];
        }
    }

    sort(change.begin() + 1, change.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[2] < b[2]; // 2列目（インデックス2）の要素を比較して小さい順（昇順）に並び替える
    });

    cout << "--------------------------------------------" << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 3; j++){
            cout << change[i][j] << " ";
        }
        cout << endl;
    }


    vector<bool> used(m + 1);
    int count = 0;
    for(int i = 1; i <= m + 1; i++){
        for(int j = 1; j <= n; j++){
            if(i < change[i][2]){
                used[change[i][1]] = true;
            }else{
                used[change[i][3]] = true;
            }
        }

        for(int j = 1; j <= m; j++){
            if(used[j] == true){
                count++;
            }
            cout << count << endl;
        }
    }
}
