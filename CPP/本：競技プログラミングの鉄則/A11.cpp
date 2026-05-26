#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> array(n + 1);

    for(int i = 1; i <= n; i++) cin >> array[i];
    // for(int i = 1; i <= n; i++) cout << array[i] << " "; cout << endl;

    int left = 1;
    int right = n;

    while(left <= right){
        int mid = (left + right) / 2;

        if(array[mid] == x){
            cout << mid << endl;
            return 0;
        }else if(array[mid] < x){
            left = mid + 1;
        }else if(array[mid] > x){
            right = mid - 1;
        }
    }


}