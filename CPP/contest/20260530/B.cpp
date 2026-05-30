#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        long long x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        long long d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        long long diff = (r1 - r2) * (r1 - r2);
        long long sum = (r1 + r2) * (r1 + r2);
        if(diff <= d and d <= sum){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}