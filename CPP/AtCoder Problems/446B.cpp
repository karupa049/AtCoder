#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; //n人の、、m種類の
    cin >> n >> m;
    
    vector<int> already;

    for(int i = 1; i <= n; i++){ //人で回す
        int l;
        cin >> l;

        vector<int> order(l + 1);
        for(int ii = 1; ii <= l; ii++){
            cin >> order[ii];
        }

        // for(int i = 1; i <= l; i++){
        //     cout << order[i] << " ";
        // }
        // cout << endl;

        int ans = 0;

        for(int k = 1; k <= l; k++){
            bool flag = false;
            for(int j = 0; j < already.size(); j++){
                if(order[k] == already[j]){
                    flag = true;
                    break;
                }
            }

            if(flag == false){
                already.push_back(order[k]);
                ans = order[k];
                break;
            }
        }

        cout << ans << endl;

        // cout << "already ";
        // for(int i = 0; i < already.size(); i++){
        //     cout << already[i] << " ";
        // }
        // cout << endl;

    }
}