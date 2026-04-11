#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, key;
    cin >> N >> key;

    vector<int> array(N);

    for(int i = 0; i < N; i++){
        cin >> array[i];
    }

    int flag = 0;
    for (int i = 0; i < array.size(); i++){


        if(array[i] == key){
            flag = 1;
        }

        if(flag == 1){
            break;
        }
    }

    if(flag == 0){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }

}