#include<bits/stdc++.h>
using namespace std;

int main(){
    int h, w, q;
    cin >> h >> w >> q;

    vector<vector<int>> array(q, vector<int>(2));
    for(int i = 0; i < q; i++){
        for(int j = 0; j < 2; j++){
            cin >> array[i][j];
        }
    }

    
    // cout << "-------------------------------" << endl;
    // for(int i = 0; i < q; i++){
    //     for(int j = 0; j < 2; j++){
    //         cout << array[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<vector<int>> choco(h, vector<int> (w, 0));

    // cout << "-------------------------------" << endl;
    // for(int i = 0; i < h; i++){
    //     for(int j = 0; j < w; j++){
    //         cout << choco[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    int limitH = h;
    int limitW = w;

    for(int k = 0; k < q; k++){
        int count = 0;

        if(array[k][0] == 1){
            for(int i = 0; i < h; i++){
                for(int j = 0; j < w; j++){
                    if( i >= limitH - array[k][1] and i < limitH and j < limitW){
                        if(choco[i][j] == 0){
                            count++;
                            choco[i][j] = 1;
                        }
                    }
                }
            }
            limitH = limitH - array[k][1];
        }else if(array[k][0] == 2){
            for(int i = 0; i < h; i++){
                for(int j = 0; j < w; j++){
                    if(j >= limitW - array[k][1] and j < limitW and i < limitH){
                        if(choco[i][j] == 0){
                            count++;
                            choco[i][j] = 1;
                        }
                    }
                }
            }
            limitW = limitW - array[k][1];
        }
        cout << count << endl;
        
    }



    // cout << "-------------------------------" << endl;
    // for(int i = 0; i < h; i++){
    //     for(int j = 0; j < w; j++){
    //         cout << choco[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    

}