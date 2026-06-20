#include<bits/stdc++.h>
using namespace std;

int id(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c - 'A' + 1;
    }
    return 0;
}

int main(){
    int n;
    char x;
    cin >> n >> x;
    int index = id(x);
    vector<vector<char>> seki(n + 1, vector<char> (5));
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < 5; j++){
            cin >> seki[i][j];
        }
    }

    // for(int i = 1; i <= n; i++){
    //     for(int j = 0; j < 5; j++){
    //         cout << seki[i][j];
    //     }
    // cout << endl;
    // }

    bool flag = false;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < 5; j++){
            if(seki[i][index - 1] == 'o'){
                flag = true;
                break;
            }
        }
    }


    if(flag == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


}