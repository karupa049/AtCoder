// #include<bits/stdc++.h>
using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<string> vote(n + 1);
    for(int i = 1; i <= n; i++) cin >> vote[i];
    // cout << "-------------------------------------------" << endl;
    // for(int i = 1; i <= n; i++) cout << vote[i] << endl;
    // cout << "-------------------------------------------" << endl;

    vector<int> pointManager(n + 1);
    vector<string> nVote(m + 1);

    for(int i = 1; i <= m; i++){
        string s = "";
        for(int j = 1; j <= n; j++){
            s += vote[j][i - 1];
        }
        nVote[i] = s;
    }

    // for(int i = 1; i <= m; i++) cout << nVote[i] << endl;
    // cout << "-------------------------------------------" << endl;

    int count0 = 0;
    int count1 = 0;

    for(int i = 1; i <= m; i++){
        for(int j = 0; j < n; j++){
            // cout << nVote[i][j] << endl;
            if(nVote[i][j] == '0'){
                count0++;
            }else{
                count1++;
            }
        }
        // cout << count0 << " " << count1 << endl;
        if(count0 == 0 or count1 == 0){
            for(int k = 1;  k <= n; k++){
                pointManager[k] = pointManager[k] + 1;
            }
        }else if(count0 > count1){
            for(int k = 0; k < n; k++){
                if(nVote[i][k] == '1'){
                    pointManager[k + 1] += 1;
                }
            }
        }else if(count0 < count1){
            for(int k = 0; k < n; k++){
                if(nVote[i][k] == '0'){
                    pointManager[k + 1] += 1;
                }
            }
        }
        count0 = 0;
        count1 = 0;
    }

    // for(int i = 1; i <= n; i++) cout << pointManager[i] << " ";
    // cout << "-------------------------------------------" << endl;

    int maxCount = pointManager[0];
    for(int i = 1; i <= n; i++){
        if(pointManager[i] > maxCount){
            maxCount = pointManager[i];
        }
    }

    // cout << maxCount << endl;

    for(int i = 1; i <= n; i++){
        if(pointManager[i] == maxCount){
            cout << i << " ";
        }
    }
    cout << endl;





}

