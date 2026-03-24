#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> data(5);
    for (int i = 0; i < 5; i++){
        cin >> data[i];
    }


    int flag = 0;

    for (int i = 1; i < data.size() - 1; i++){
        if(i == 1){
            if(data[i] == data[0]){
                cout << "YES" << endl;
                flag++;
                break;
            }
        }

        if(data[i] == data[i + 1]){
            cout << "YES" << endl;
            flag++;
            break;
        }

    }
    
    if(flag == 0){
        cout << "NO" << endl;
    }

}