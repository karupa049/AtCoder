#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;


    for(int i = 0; i < t; i++){
        string S;
        cin >> S;
        
        map<char, int> count_map;

        int max = 0;

        for(int j = 0; j < S.length(); j++){
            char index = S[j];
            if(count_map.count(index) == 0){
                count_map[index] = 1;
            }else{
                count_map[index] = count_map[index] + 1;
            }

            if(count_map[index] > max){
                max = count_map[index];
            }
        }

        int n = S.length();

        if(max > (n + 1) / 2){
            cout << "No" << endl;
        }else{
            vector<pair<int, char>> v;
            for(auto p : count_map){
                v.push_back({p.second, p.first});
            }
            sort(v.rbegin(), v.rend());

            string ans(n, ' ');

            int idx = 0;
            for(int k = 0; k < v.size(); k++){
                int num = v[k].first;
                char c = v[k].second;

                for(int m = 0; m < num; m++){
                    ans[idx] = c;
                    idx += 2;

                    if(idx >= n){
                        idx = 1;
                    }
                }
            }

            cout << "Yes" << endl;
            cout << ans << endl;
        }



    }

}