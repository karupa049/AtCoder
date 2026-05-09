#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, k;
    cin >> n >> k;

    vector<vector<int>> allarray(n);

    int count = 0;
    while(count < n){
        int l;
        cin >> l;

        vector<int> array(l);
        for(int i = 0; i < array.size(); i++) cin >> array[i];
        allarray[count] = array;

        count++;
    }

    /*
    cout << "-----------------------" << endl;
    for (int i = 0; i < allarray.size(); i++) {
        for (int j = 0; j < allarray[i].size(); j++) {
            cout << allarray[i][j] << " ";
        }
        cout << endl;
    }
    cout << "-----------------------" << endl;
    */
    
    vector<int> c(n);
    for(int i = 0; i < c.size(); i++) cin >> c[i];
    //for(int i = 0; i < c.size(); i++) cout << c[i] << " ";

    vector<int> connect;

    for(int i = 0; i < c.size(); i++){
        for(int j = 0; j < c[i]; j++){
            for(int val : allarray[i]){
                connect.push_back(val);
            }
        }
    }

    
    cout << "----------------------------" << endl;
    for(int i = 0; i < connect.size(); i++){
        cout << connect[i] << " ";
    }
    cout << endl;
    
    cout << connect[k - 1] << endl;
}


