#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, d;
        cin >> n >> d;

        vector<int> a(n + 1);
        vector<int> b(n + 1);

        map<int, int> deadmap;

        for(int j = 1; j <= n; j++) cin >> a[j];
        for(int k = 1; k <= n; k++) cin >> b[k];

        // for(int l = 1; l <= n; l++){
        //     cout << a[l] << " ";
        //     cout << b[l] << " ";
        // }
        // cout << endl;

        int oldest = 1;

        for(int ii = 1; ii <= n; ii++){
            deadmap[ii] = a[ii];
            
            int need = b[ii];
            while(need > 0){
                if(deadmap[oldest] >= need){
                    deadmap[oldest] -= need;
                    need = 0;
                }else{
                    need -= deadmap[oldest];
                    deadmap[oldest] = 0;
                    oldest++;
                }
            }

            while(oldest <= ii - d){
                deadmap[oldest] = 0;
                oldest++;
            }
        }

        int ans = 0;
        for(auto p : deadmap){
            ans += p.second;
        }

        cout << ans << endl;

        // cout << "------------------------------------" << endl;

        // for(auto p : deadmap){
        //     cout << "index : " << p.first << ", num : " << p.second << endl;
        // }


    }
}