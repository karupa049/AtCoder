#include <iostream>   // cin, cout 用
#include <vector>     // vector 用
#include <algorithm>  // sort, min 用
using namespace std;

int main(){
    vector<vector<int>> sai(3, vector<int>(6));

    for(int i = 0; i < sai.size(); i++){
        for(int j = 0; j < sai[0].size(); j++){
            cin >> sai[i][j];
        }
    }

    int count = 0;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            for (int k = 0; k < 6; k++) {
                
                int a = sai[0][i];
                int b = sai[1][j];
                int c = sai[2][k];
                if(a == 4 && b == 5 && c == 6 ||
                    a == 4 && b == 6 && c == 5 ||
                    a == 5 && b == 4 && c == 6 ||
                    a == 5 && b == 6 && c == 4 ||
                    a == 6 && b == 4 && c == 5 ||
                    a == 6 && b == 5 && c == 4){
                        count++;
                    }
            }
        }
    }

    double ans = 0;
    ans = count / 216.0;

    cout << ans << endl;
    //cout << count << endl;

}