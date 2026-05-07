#include<bits/stdc++.h>
using namespace std;

int main(){
    int d, n;
    cin >> d >> n;
    vector<int> dayNum(d);
    vector<int> right(n);
    vector<int> left(n);
    

    for(int i = 0; i < d; i++){
        cin >> dayNum[i];
    }

    for(int i = 0; i < n; i++){
        cin >> left[i] >> right[i];
    }

    int result = 0;
    vector<int> sum(d);


    for(int i = 0; i < d; i++){
        result += dayNum[i];
        sum[i] = result;
    }

    /*
    for(int i = 0; i < sum.size(); i++){
        cout << sum[i] << " ";
    }
    */

    //cout << endl;

    /*
    for(int i= 0; i < left.size(); i++){
        cout << "right " << right[i] << endl;
        cout << "left " << left[i] << endl;
    }
    */

    int ans = 0;

    for(int i = 0; i < n; i++){
        if(left[i] - 2 < 0){
            ans = sum[right[i] - 1] - 0;
        }else{
            ans = sum[right[i] - 1] - sum[left[i] - 2];
        }
        cout << ans << endl;
    }
    /*問題の解釈
    10 5                            10日間で5個の問題がある
    8 6 9 1 2 1 10 100 1000 10000   
    2 3
    1 4
    3 9 
    6 8
    1 10
    */
}
