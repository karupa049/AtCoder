#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> before(n + 1);
    vector<int> after(n + 1);

    for(int i = 1; i <= n; i++) cin >> before[i] >> after[i];

    /*
    for(int i = 1; i <= n; i++){
        cout << i << " people " << " before " <<  before[i] << " after " << after[i] << endl;
    }
        */

    //出力は四つか、、、 after - before


    vector<int> deperBefore(m + 1);
    vector<int> deperAfter(m + 1);

    for(int i = 1; i <= n; i++){
        deperBefore[before[i]]++;
        deperAfter[after[i]]++;
    }
    for(int i = 1; i <= m; i++){
        cout << deperAfter[i] - deperBefore[i] << endl;
    }






}

    
