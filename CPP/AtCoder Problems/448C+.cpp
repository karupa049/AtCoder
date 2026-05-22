#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;

    vector<int> ball(n + 1);
    map<int, int> bag_map;

    for(int i = 1; i <= n; i++){
        cin >> ball[i];
        //bag_map[ball[i]]++;
        int num = ball[i];

        if(bag_map.count(num) == 0){
            bag_map[num] = 1;
        }else{
            bag_map[num] = bag_map[num] + 1;
        }
    }

    // cout << "--- Œ»Ý‚Ìbag_map‚Ì’†g ---" << endl;
    // for (auto p : bag_map) {
    //     cout << "”Žš: " << p.first << ", ŒÂ”: " << p.second << endl;
    // }
    // cout << "---------------------------" << endl;

    for(int i = 0; i < q; i++){
        int k;
        cin >> k;
        vector<int> b(k);

        for(int j = 0; j < k; j++){
            cin >> b[j];
            int num = ball[b[j]];

            bag_map[num]--;

            if(bag_map[num] == 0){
                bag_map.erase(num);
            }
        }

        cout << bag_map.begin()->first << endl;

        for(int j = 0; j < k; j++){
            int num = ball[b[j]];
            if(bag_map.count(num) == 0){
                bag_map[num] = 1;
            } else {
                bag_map[num] = bag_map[num] + 1;
            }
        }
    }
}