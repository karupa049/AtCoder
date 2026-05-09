#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;


    vector<vector<int>> allarray(n);

    int count = 0;
    while(count < n){
        int l;
        cin >> l;

        vector<int> array(l);
        for(int i = 0; i < array.size(); i++) cin >> array[i];
        allarray[count] = array;

        count++;
    }

    int x, y;
    cin >> x >> y;

    cout << allarray[x - 1][y - 1];
}