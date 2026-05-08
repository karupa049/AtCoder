#include<bits/stdc++.h>
using namespace std;

int main(){
    int d, n;
    cin >> d >> n;

    vector<int> left(n + 1);
    vector<int> right(n + 1);

    for(int i = 1; i < left.size(); i++) cin >> left[i] >> right[i];
    //for(int i = 1; i < left.size(); i++) cout << left[i] << right[i];  cout << endl;

    vector<int> sum(d + 1);

    for(int i = 1; i <= n; i++){
        sum[left[i]]++;
        sum[right[i] + 1]--;
    }

    int current = 0;
    for(int i = 1; i <= d; i++){
        current = current + sum[i];
        cout << current <<endl;
    }

    /*
    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < sum.size(); j++){
            if(j >= left[i] and j <= right[i]){
                sum[j] = sum[j] + 1;
            }
        }
    }

    for(int i = 1; i < sum.size(); i++){
        for(int j = 1; j < n + 1; j++){
            if(i >= left[j] and i <= right[j]){
                sum[i] = sum[i] + 1;
            }
        }
    }
    */

    //for(int i = 1; i < sum.size(); i++) cout << sum[i] << endl;

    //cout << endl; cout << sum.size();

}