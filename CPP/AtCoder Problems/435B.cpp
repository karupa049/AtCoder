#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> array(n + 1);
    for(int i = 1; i <= n; i++) cin >> array[i];
    // for(int i = 1; i <= n; i++) cout << array[i] << " "; cout << endl;

    // for(int i = 1; i < n; i++){
    //     for(int j = i + 1; j <= n; j++){
    //         cout << "i : " << array[i] << " j : " << array[j] << " ";
    //     }
    //     cout << endl;
    // }

    int result = 0;
    int count = 0;
    for(int i = 1; i < n; i++){
        for(int j = i; j <= n; j++){
            result = result + array[j];
            if(i == j){
                continue;
            }else{
                bool is_ok = true;
                // cout << result << " ";
                for(int k = i - 1; k < j; k++){
                    // cout << k + 1 << " ";
                    if(result % array[k + 1] == 0){
                        is_ok = false;
                        break;
                    }
                }
                if(is_ok == true){
                    count++;
                }
            }
        }
        result = 0;
    }

    cout << count << endl;

    //  for(int i = 1; i < n; i++){
    //     for(int j = i; j <= n; j++){
    //         result = result + array[j];
    //         if(i == j){
    //             continue;
    //         }else{
    //             cout << result << " ";
    //         }
    //     }
    //     result = 0;
    //     cout << endl;
    // }
}