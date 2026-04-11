#include<bits/stdc++.h>
using namespace std;

int main(){
    int T; //時間の長さ
    int X; //差がｘの時保存するの基準
    //T回だけ値を配列で受け取る。大きさTのint配列宣言
    cin >> T >> X;
    vector<int> temData(T + 1);
    int i = 0;
    while (i < T + 1){
        cin >> temData[i];
        i++;
    }


    //初期値どれって思ってたけど、最初の入力でT0を初期値として扱うのね
    //Tの配列の大きさは（T+1）か。

    /*
    for(int j = 0; j < temData.size(); j++){
        cout << temData[j] << " ";
    }
    cout << endl;
    */

    int lastData = temData[0];
    int nowData = 0;


    cout << 0 << " " << lastData << endl;

    for(int j = 1; j < temData.size(); j++){
        nowData = temData[j];

        /*
        cout << j << endl;
        cout << "最後に保存されたデータ" << preData << endl;
        cout << "現在に保存されたデータ" << nowData << endl;
        */

        //とんでもない見落とし、「最後に保存されたデータ」比較していることが判明

        if(abs(nowData - lastData) >= X){
            cout << j << " " << nowData << endl;
            lastData = nowData;
        }
    }
} 