#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t >> n;

    vector<int> left(n + 1);
    vector<int> right(n + 1);
    for(int i = 0; i < n; i++) cin >> left[i] >> right[i];
    //cout << "check" << endl; for(int i = 0; i < n; i++) cout << left[i] << " " << right[i] << endl;
    //cout << left.size();

    vector<int> sum(t);
    //cout << sum.size() << endl;
    for(int i = 0; i < n; i++){
        sum[left[i]]++;
        sum[right[i]]--;
    }

    //for(int i = 0; i < sum.size(); i++) cout << sum[i] << " ";

    vector<int> ruiseki(t);
    int result = 0;
    for(int i = 0; i < t; i++){
        if(i == 0){
            result = sum[i];
            ruiseki[i] = result;
        }else{
            result = result + sum[i];
            ruiseki[i] = result;
        }
    }

    //cout << endl;

    for(int i = 0; i < ruiseki.size(); i++){
        cout << ruiseki[i] << endl;
    }


}