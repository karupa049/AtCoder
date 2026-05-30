#include<bits/stdc++.h>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;  //h行w列

    vector<vector<char>> g(h + 1, vector<char> (w + 1));
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cin >> g[i][j];
        }
    }

    // for(int i = 1; i <= h; i++){
    //     for(int j = 1; j <= w; j++){
    //         cout << g[i][j];
    //     }
    //     cout << endl;
    // }

    //      #黒　　.白
    //　前の二次元配列を見て、白が白のままのところだけを先に新しい二次元配列に確定させ、確定したマス目以外はすべて反転？？

    // vector<vector<char>> gnext(h + 1, vector<char> (w + 1, '/'));

    // while カウントが < 10^100まで繰り返す
    // 二次元配列を更新していかないといけない
    vector<vector<char>> g_prev = g;
    vector<vector<char>> g_prev2 = g;

    int count = 0;

    while(count < 10000){
        vector<vector<char>> gnext(h + 1, vector<char> (w + 1, '/'));
        for(int i = 1; i <= h; i++){
            for(int j = 1; j <= w; j++){
                bool has_block = false;

                if(i - 1 >= 1 and g[i - 1][j] == '#') has_block = true;
                if(i + 1 <= h and g[i + 1][j] == '#') has_block = true;
                if(j - 1 >= 1 and g[i][j - 1] == '#') has_block = true;
                if(j + 1 <= w and g[i][j + 1] == '#') has_block = true;
                if(i - 1 >= 1 and j - 1 >= 1 and g[i - 1][j - 1] == '#') has_block = true;
                if(i - 1 >= 1 and j + 1 <= w and g[i - 1][j + 1] == '#') has_block = true;
                if(i + 1 <= h and j - 1 >= 1 and g[i + 1][j - 1] == '#') has_block = true;
                if(i + 1 <= h and j + 1 <= w and g[i + 1][j + 1] == '#') has_block = true;

                if(g[i][j] == '.' and has_block == false){
                    gnext[i][j] = '.';
                }else{
                    if(g[i][j] == '.'){
                        gnext[i][j] = '#';
                    }else{
                        gnext[i][j] = '.';
                    }
                }
            }
        }

        g_prev2 = g_prev;
        g_prev = gnext;
        g = gnext;

        count++;
    }


    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cout << g[i][j];
        }
        cout << endl;
    }


}