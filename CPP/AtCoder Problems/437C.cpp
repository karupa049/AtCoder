#include<bits/stdc++.h>
using namespace std;

struct Tonakai{
    long long w;
    long long p;
    long long cost;
};

bool compareTonakai(Tonakai a, Tonakai b){
    return a.cost < b.cost;
}

int main(){
    int t;
    cin >> t;


    for(int tcase = 0; tcase < t; tcase++){
        int n;
        cin >> n;
        vector<long> weight(n + 1);
        vector<long> power(n + 1);
        for(int i = 1; i <= n; i++) cin >> weight[i] >> power[i];
        // for(int i = 1; i <= n; i++) cout << weight[i] << " " << power[i] << endl;

        vector<Tonakai> tonakai;
        for(int i = 1; i <= n; i++){
            Tonakai sika;
            sika.w = weight[i];
            sika.p = power[i];
            sika.cost = weight[i] + power[i];
            tonakai.push_back(sika);
        }

        sort(tonakai.begin(), tonakai.end(), compareTonakai);

        long long total_power = 0;
        for(int i = 1; i <= n; i++) total_power += power[i];

        int ans = 0;
        for(int i = 0; i < n; i++){
            if(total_power >= tonakai[i].cost){
                ans++;
                total_power -= tonakai[i].cost;
            }else{
                break;
            }
        }
        cout << ans << endl;

    }
}