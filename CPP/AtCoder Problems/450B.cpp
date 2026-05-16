#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<long long>> cc(n + 1, vector<long long>(n + 1));
    for(int i = 1; i < n; i++){
        for(int j = i + 1; j <= n; j++){
            cin >> cc[i][j];
            //cout << c[i][j] << " ";
        }
        //cout << endl;
    }

    for(int a = 1; a <= n; a++){
        for(int b = a + 1; b <= n; b++){
            for(int c = b + 1; c <= n; c++){
                if(cc[a][c] > cc[a][b] + cc[b][c]){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;

}