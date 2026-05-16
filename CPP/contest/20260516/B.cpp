#include<bits/stdc++.h>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;

    vector<vector<int>> g(h, vector<int>(w, 0));
    

    if(h >= 2 and w >= 2){
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if(i == 0 and j == 0 or i == 0 and j == w - 1 or i == h - 1 and j == 0 or i == h - 1 and j == w - 1){
                    g[i][j] = 2;
                }else if(i == 0 or i == h - 1 or j == 0 or j == w - 1){
                    g[i][j] = 3;
                }else{
                    g[i][j] = 4;
                }
            }
        }
    }else{
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if(h == 1 and w == 1){
                    g[i][j] = 0;
                }else if((h == 1 and (j == 0 or j == w - 1)) or (w == 1 and (i == 0 or i == h - 1))){
                    g[i][j] = 1;
                }else{
                    g[i][j] = 2;
                }
            }
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
}