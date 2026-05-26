#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    vector<long long> array(n);
    for(int i = 0; i < n; i++) cin >> array[i];
    // for(int i = 0; i < n; i++) cout << array[i] << " "; cout << endl;

    long long left = 0;
    long long right = 1e18;

    long long ans = right;

    while(left <= right){
        long long mid = (left + right) / 2;

        long long sum = 0;
        for(int  i = 0; i < n; i++){
            sum += mid / array[i];

            if(sum >= k) break;
        }

        if(sum >= k){
            ans = mid;
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }

    cout << ans << endl;

}