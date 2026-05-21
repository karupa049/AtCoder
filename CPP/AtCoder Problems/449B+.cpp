#include<bits/stdc++.h>
using namespace std;

int main(){
    int h, w, q;
    cin >> h >> w >> q;

    vector<vector<int>> array(q, vector<int>(2));
    for(int i = 0; i < q; i++) for(int j = 0; j < 2; j++) cin >> array[i][j];
    // for(int i = 0; i < q; i++){
    //     for(int j = 0; j < 2; j++){
    //         cout << array[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int limith = h;
    int limitw = w;
    
    int all = limith * limitw;

    for(int k = 0; k < q; k++){
        if(array[k][0] == 1){
            cout << limitw * array[k][1] << endl;
            limith = limith - array[k][1];
        }else if(array[k][0] == 2){
            cout << limith * array[k][1] << endl;
            limitw = limitw - array[k][1];
        }
    }
}