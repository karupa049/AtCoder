#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, m;
    cin >> n >> k >> m;

    vector<int> color(n + 1);
    vector<int> value(n + 1);
    for(int i = 1; i <= n; i++) cin >> color[i] >> value[i];

    vector<vector<int>> colortype(n + 1);
    for(int i = 1; i <= n; i++){
        colortype[color[i]].push_back(value[i]);
    }

    vector<int> top_values;
    vector<int> remain;

    for(int i = 1; i <= n; i++){
        if(colortype[i].empty()) continue;

        sort(colortype[i].rbegin(), colortype[i].rend());
        top_values.push_back(colortype[i][0]);

        for(int j = 1; j < colortype[i].size(); j++){
            remain.push_back(colortype[i][j]);
        }
    }

    sort(top_values.rbegin(), top_values.rend());

    long long total_sum = 0;

    for(int i = 0; i < m; i++){
        total_sum += top_values[i];
    }

    for(int i = m; i < top_values.size(); i++){
        remain.push_back(top_values[i]);
    }

    sort(remain.rbegin(), remain.rend());

    for(int i = 0; i < k - m; i++){
        total_sum += remain[i];
    }

    cout << total_sum << "\n";

    return 0;
}