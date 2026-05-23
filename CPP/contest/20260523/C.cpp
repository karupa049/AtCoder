#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> array(n + 1);

    vector<vector<int>> mondai(q, vector<int> (2));
    for(int i = 0; i < q; i++){
        for(int j = 0; j < 2; j++){
            cin >> mondai[i][j];
        }
    }

    // for(int i = 0; i < q; i++){
    //     for(int j = 0; j < 2; j++){
    //         cout << mondai[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<int> count(q + 1);
    int base_h = 0;

    for(int i = 0; i < q; i++){
        if(mondai[i][0] == 1){
            int x = mondai[i][1];
            array[x] = array[x] + 1;
            count[array[x]] = count[array[x]] + 1;

            if(count[base_h + 1] == n){
                base_h++;
            }


        }else if(mondai[i][0] == 2){
            int y = mondai[i][1];
            if(base_h + y > q){
                cout << 0 << endl;
            }else{
                cout << count[base_h + y] << endl;
            }
        }
    }
}