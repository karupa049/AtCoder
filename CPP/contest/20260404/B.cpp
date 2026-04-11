#include<bits/stdc++.h>
using namespace std;

int main(){
    int H;
    int W;

    cin >> H >> W;

    int start = 1;
    int Hithend = H;
    int Wideend = W;

    for(int i = 1; i <= H; i++){
        for(int j = 1; j <= W; j++){
            if(i == start){
                cout << "#";
            }else if(i == Hithend){
                cout << "#";
            }else if(j == start){
                cout << "#";
            }else if(j == Wideend){
                cout << "#";
            }else{
                cout << ".";
            }
        }
        cout << endl;
    }
}