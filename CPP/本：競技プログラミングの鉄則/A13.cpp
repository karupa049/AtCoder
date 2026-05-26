#include<bits/stdc++.h>
using namespace std;

int main(){
    //全探査してみる
    int n, k;
    cin >> n >> k;
    
    vector<int> array(n + 1);
    for(int i = 1; i <= n; i++) cin >> array[i];
    // for(int i = 1; i <= n; i++) cout << array[i] << " "; cout << endl;

    //全探査
    // int count = 0;
    // for(int i = 1; i <= n; i++){
    //     for(int j = i + 1; j <= n; j++){
    //         if(array[j] - array[i] <= 10){
    //             count++;
    //         }
    //     }
    // }
    
    // cout << count << endl;

    long long count = 0;
    int right = 1;

    for(int left = 1; left <= n; left++){
        while(right <= n and array[right] - array[left] <= k){
            right++;
        }
        count = count + (right - 1) - left;
    }

    cout << count << endl;




}