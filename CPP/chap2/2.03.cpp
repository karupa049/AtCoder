#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> vec = {
        {7, 4, 0, 8},
        {2, 0, 3, 5},
        {6, 1, 7, 0},
    };

    int count = 0;

    for (int i = 0; i < vec.size(); i++){
        for (int j = 0; j < vec[0].size(); j++){
            if(vec[i][j] == 0){
                count++;
            }
        }
    }

    cout << "count =  " << count;
}