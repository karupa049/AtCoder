#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    for(int x = 9;  x >= 0; x--){
        int wari = (1 << x);
        cout << (N / wari) % 2;
    }
    cout << endl;
}


/*
int main(){
    int N;
    cin >> N;
    vector<int> vec;

    for(int i = 9; i >= 0; i--){
        if(N / pow(2,i) >= 1){
            vec.push_back(1);
            N = N - pow(2,i);
        }else{
            vec.push_back(0);
        }
    }

    for(int i = 0; i < vec.size(); i++){
        cout << vec[i];
    }
    cout << endl;
}
    */