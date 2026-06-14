#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> array(n);
    for(int i = 0; i < n; i++){
        int s;
        cin >> s;

        for(int j = 0; j < s; j++){
            int val;
            cin >> val;
            array[i].push_back(val);
        }
    }

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < array[i].size(); j++){
    //         cout << array[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<vector<int>> gift(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < array[i].size(); j++){
            gift[array[i][j] - 1].push_back(i + 1);
        }
    }

    for(int i = 0; i < n; i++){
        cout << gift[i].size() << " ";
        for(int j = 0; j < gift[i].size(); j++){
            cout << gift[i][j] << " ";
        }
        cout << endl;
    }

    
}