#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >>  q;

    vector<vector<int>> mondai(q, vector<int> (2));
    for(int i = 0; i < q; i++){
        for(int j = 0; j < 2; j++){
            cin >> mondai[i][j];
            //cout << mondai[i][j] << " ";
        }
        //cout << endl;
    }

    multiset<int> niwa;

    for(int i = 0; i < q; i++){
        if(mondai[i][0] == 1){
            niwa.insert(mondai[i][1]);
            cout << niwa.size() << endl;
        }else if(mondai[i][0]){
            auto it = niwa.upper_bound(mondai[i][1]);
            niwa.erase(niwa.begin(), it);
            cout << niwa.size() << endl;
        }
    }
}