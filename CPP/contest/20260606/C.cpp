#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, m;
    cin >> n >> k >> m;

    vector<int> color(n + 1);
    vector<int> value(n + 1);
    for(int i = 1; i <= n; i++) cin >> color[i] >> value[i];
    // for(int i = 1; i <= n; i++) cout << color[i] << " "; cout << endl;
    // for(int i = 1; i <= n; i++) cout << value[i] << " "; cout << endl;

    vector<vector<int>> colortype(n + 1);
    for(int i = 1; i <= n; i++){
        colortype[color[i]].push_back(value[i]);
    }
    

    // for(int i = 1; i <= n; i++){
    //     for(int j = 0; j < colortype[i].size(); j++){
    //         cout << colortype[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for(int i = 1; i <= n; i++){
        sort(colortype[i].rbegin(), colortype[i].rend());
    }

    // for(int i = 1; i <= n; i++){
    //     for(int j = 0; j < colortype[i].size(); j++){
    //         cout << colortype[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // for(int i = 0; i < k; i++){

    // }

    vector<int> musttype;
    vector<bool> used(n + 1, false);
    vector<int> maxarray;
    int max_val = -1;
    int best_i = -1;

    for(int j = 1; j <= m; j++){
        int max_val = -1;
        int best_i = -1;

        for(int i = 1; i <= n; i++){
            if(used[i] == true || colortype[i].empty()){
                continue;
            }
            if(colortype[i][0] > max_val){
                max_val = colortype[i][0];
                best_i = i;
            }
        } 

        if(best_i != -1){
            musttype.push_back(best_i);
            maxarray.push_back(max_val);
            used[best_i] = true;
        }
    }

    // for(int i = 0; i < musttype.size(); i++){
    //     cout << musttype[i] << " ";
    // }
    // cout << endl;
    // for(int i = 0; i < maxarray.size(); i++){
    //     cout << maxarray[i] << " ";
    // }
    // cout << endl;

    vector<int> remain;
    for(int i = 1; i <= n; i++){
        int start_j = 0; 
        
        if(used[i] == true){
            start_j = 1;
        } else {
            start_j = 0;
        }
        for(int j = start_j; j < colortype[i].size(); j++){
            remain.push_back(colortype[i][j]);
        }
    }

    // for(int i = 0; i < remain.size(); i++){
    //     cout << remain[i] << " ";
    // }

    long long total_sum = 0;

    for(int i = 0; i < musttype.size(); i++){
        total_sum += colortype[musttype[i]][0];
    }

    sort(remain.rbegin(), remain.rend());
    
    for(int i = 0; i < k - m; i++){
        total_sum += remain[i];
    }

    cout << total_sum << endl;




}