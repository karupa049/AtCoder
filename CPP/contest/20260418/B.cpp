#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> data(n);

    int i = 0;
    while (i < n){
        cin >> data[i];
        i++;
    }

    //質問１について →　dataの中身がすべて違えばyes
    bool q1 = false;

    for(int j = 0; j < data.size() - 1; j++){
        for(int k = j + 1; k < data.size(); k++){
            //cout << data[j] << " " << data[k] << endl;
            if(data[j] == data[k]){
                q1 = true;
            }
        }
    }

    if(q1 == false){
            cout << "Yes" << endl;
    }else{
            cout << "No" << endl;
    }

    //質問2について　→　少なくとも一人はその服着ている？    
    vector<int> q2(m, 0);
    //cout << "size" << q2.size() << endl;

    for(int j = 1; j < m + 1; j++){
       // cout << j << endl;
        for(int k = 0; k < data.size(); k++){
            if(j == data[k]){
                q2[j - 1] = 1;
            }
        }
    }

    /*
    for(int j = 0; j < q2.size(); j++){
        cout << q2[j] << " ";
    }
    */

    bool flag = false;

    for(int j = 0; j < q2.size(); j++){
        if(q2[j] != 1){
            flag = true;
        }
    }

    if(flag == false){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }



}