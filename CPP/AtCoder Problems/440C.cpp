#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, w;
    cin >> t;

    for(int i = 1; i <= t; i++){
        cin >> n >> w;
        vector<int> sima(n + 1); //最初は全部白
        vector<int> cost(n + 1);
        for(int j = 1; j <= n; j++) cin >> cost[j];
        for(int j = 1; j <= n; j++) cout << cost[j] << " "; cout << endl;
    }
}