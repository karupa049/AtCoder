#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    
    vector<long long> array(n);
    map<long long, long long> impact;
    
    long long total_sum = 0;

    for(int i = 0; i < n; i++){
        cin >> array[i];
        
        total_sum = total_sum + array[i];
        impact[array[i]] = impact[array[i]] + array[i];
    }


    vector<long long> sumType;
    for(auto pair : impact){ 
        sumType.push_back(pair.second); 
    }

    sort(sumType.rbegin(), sumType.rend());

    long long keysum = 0;
    int limit = min(k, (int)sumType.size()); 
    for(int i = 0; i < limit; i++){
        keysum = keysum + sumType[i];
    }
    
    cout << total_sum - keysum << endl;
}