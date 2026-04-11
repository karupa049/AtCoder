#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    vector<int> array(N);
    for(int i = 0; i < N; i++){
        cin >> array[i];
    }


    int sum = 0;
    bool flag = false;

    for(int i = 0; i < N; i++){
        for (int j = i + 1; j < N; j++){
            for (int k = j+ 1; k < N; k++){
                sum = array[i] + array[j] + array[k];
                if (sum == 1000){
                    flag = true;
                    break;
                }
            }
            if (flag) break;
        }
        if(flag) break;
    }

    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}