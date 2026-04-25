#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> array(n);

    for(int i = 0; i < n; i++)cin >> array[i];

    /*
    for(int i = 0; i < array.size(); i++){
        cout << array[i] << " ";
    }
    cout << endl;
    */

    /*
    for(int i = 0; i < array.size(); i++){
        if(array[i] == array[k]){
            array[i] = 0;
        }
    }
    */

    vector<int> type;

    for(int i = 0; i < array.size(); i++){
        if (find(type.begin(), type.end(), array[i]) == type.end()){
            type.push_back(array[i]);
        }
    }

    /*
    for(int i = 0; i < type.size(); i++){
        cout << type[i] << " ";
    }
    cout << endl;
    */
    
   vector<int> sumType;

    for(int i = 0; i < type.size(); i++){
        int result = 0;
        for(int j = 0; j < array.size(); j++){
            if(array[j] == type[i]){
                result = result + array[j];
            }
        }
        sumType.push_back(result);
    }

    sort(sumType.rbegin(), sumType.rend());

    /*
    for(int i = 0; i < sumType.size(); i++){
        cout << sumType[i] << " ";
    }
    cout << endl;
    */

    long long sum = 0;
    for(int i = 0; i < array.size(); i++){
        sum = sum + array[i];
    }

    long long keysum = 0;
    int limit = min(k, (int)sumType.size()); 
    for(int i = 0; i < limit; i++){
        keysum = keysum + sumType[i];
    }

    cout << sum - keysum << endl;




}