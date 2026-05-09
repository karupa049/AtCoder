#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int w = 2;
    
    vector<vector<int>> graph(n + 1, vector<int>(w + 1));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= w; j++){
            cin >> graph[i][j];
            //cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    vector<vector<int>> sum(n + 1, vector<int>(w + 1));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= w; j++){
            sum[i][j] = sum[i - 1][j] + graph[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= w; j++){
            sum[i][j] = sum[i][j - 1] + sum[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    int q;
    cin >> q;
    int side = 4;

    vector<vector<int>> tion(q + 1, vector<int>(side + 1));
    for(int i = 1; i <= q; i++){
        for(int j = 1; j <= side; j++){
            cin >> tion[i][j];
            cout << tion[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 1; i <= q; i++){
        //int a = tion[i][1];
        //int b = tion[i][2];
        //int c = tion[i][3];
        //int d = tion[i][4];

        int ans = sum[tion[i][3]][tion[i][4]]
                - sum[tion[i][1] - 1][tion[i][4]]
                - sum[tion[i][3]][tion[i][2] - 1]
                + sum[tion[i][1] - 1][tion[i][2] - 1];
        cout << ans << endl;

    }

}