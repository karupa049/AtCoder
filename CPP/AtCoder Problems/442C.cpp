#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    // n人人がいる　利害関係は二人の間、

    vector<int> a(m + 1);
    vector<int> b(m + 1);

    for(int i = 1; i <= m; i++) cin >> a[i] >> b[i];
    // cout << "---------------------------------------" << endl;
    // for(int i = 1; i <= m; i++) cout << a[i] << " " << b[i] << endl;

    //クエリが研究者の人数分n個　for文は１スタートの方がいい気がする

    //[[2, 4, 3], [1, 3], [2, 5, 1], [1], [3],[]]こんな配列を作れたらよさそう

    vector<vector<int>> stakeholder(n + 1);

    for(int i = 1; i <= m; i++){
        stakeholder[a[i]].push_back(b[i]);
        stakeholder[b[i]].push_back(a[i]);
    }

    // for(int i = 1; i <= n; i++){
    //     cout << "member " << i << " stakeholder ";
    //     for(int j = 0; j < stakeholder[i].size(); j++){
    //         cout << stakeholder[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for(int i = 1; i < stakeholder.size(); i++){
        // cout << i << endl;
        long long deadline = 0;
        deadline = n - 1 - stakeholder[i].size();
        if(deadline < 3){
            cout << 0 << " ";
        }else{
            // cout << deadline << endl;
            long long ans = deadline * (deadline - 1) * (deadline - 2) / 6;
            cout << ans << " ";
        }
    }



}