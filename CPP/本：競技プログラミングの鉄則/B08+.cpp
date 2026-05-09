#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int MAX_VAL = 1505;
    vector<vector<int>> grid(MAX_VAL, vector<int>(MAX_VAL, 0));

    for(int i = 1; i <= n; i++){
        int x, y;
        cin >> x >> y;
        grid[x][y]++;
    }

    vector<vector<int>> sum(MAX_VAL, vector<int>(MAX_VAL, 0));
    
    for(int i = 1; i < MAX_VAL; i++){
        for(int j = 1; j < MAX_VAL; j++){
            sum[i][j] = sum[i][j - 1] + grid[i][j];
        }
    }

    for(int i = 1; i < MAX_VAL; i++){
        for(int j = 1; j < MAX_VAL; j++){
            sum[i][j] = sum[i - 1][j] + sum[i][j];
        }
    }

    

    int q;
    cin >> q;
    int side = 4;

    vector<vector<int>> tion(q + 1, vector<int>(side + 1));
    for(int i = 1; i <= q; i++){
        for(int j = 1; j <= side; j++){
            cin >> tion[i][j];
            //cout << tion[i][j] << " ";
        }
        //cout << endl;
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