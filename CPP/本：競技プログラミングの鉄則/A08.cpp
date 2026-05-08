#include<bits/stdc++.h>
using namespace std;
int main(){
    int h, w;
    cin >> h >> w;

    vector<vector<int>> g(h + 1, vector<int>(w + 1, 0));
    for(int i = 1; i <= h; i++) for(int j = 1; j <= w; j++) cin >> g[i][j];

    /*
    cout << "---------" << endl;

    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
    */

    vector<vector<int>> sum(h + 1, vector<int>(w + 1, 0));
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            sum[i][j] = sum[i][j - 1] + g[i][j];
            
        }
    }

    /*
    cout << "---------" << endl;

    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    */

    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            sum[i][j] = sum[i - 1][j] + sum[i][j];
            
        }
    }

    /*
    cout << "---------" << endl;

    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    */

    int q;
    cin >> q;
    int side = 4;
    vector<vector<int>> tion(q + 1, vector<int>(side + 1, 0));
    for(int i = 1; i <= q; i++){
        for(int j = 1; j <= side; j++){
            cin >> tion[i][j];
        }
    }

    /*
    for(int i = 1; i <= q; i++){
        for(int j = 1; j <= side; j++){
            cout << tion[i][j] << " ";
        }
        cout << endl;
    }
    */

    for(int i = 1; i <= q; i++){
        int ans = sum[tion[i][3]][tion[i][4]]
                - sum[tion[i][1] - 1][tion[i][4]]
                - sum[tion[i][3]][tion[i][2] - 1]
                + sum[tion[i][1] - 1][tion[i][2] - 1];
        cout << ans << endl;
    }
}