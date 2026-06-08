#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> array(n + 1);
    for(int i = 1; i <= n; i++) cin >> array[i];
    // for(int i = 1; i <= n; i++) cout << array[i] << " "; cout << endl;

    vector<int> sumarray;
    int count = 1;
    int sum = 0;


    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j){
                continue;
            }else{
                sum += array[j];
            }
        }
        sumarray.push_back(sum);
        sum = 0;
    }

    // for(int i = 0; i < n; i++) cout << sumarray[i] << " "; cout << endl;

    bool flag = false;
    for(int i = 0; i < n; i++){
        if(sumarray[i] == m){
            flag = true;
            break;
        }
    }

    if(flag == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


}
