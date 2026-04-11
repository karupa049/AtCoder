#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int key;

    cin >> N >> key;

    int sum = 0;
    int count = 0;

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            for(int k = 1; k <= N; k++){
                sum = i + j + k;
                if(sum == key){
                    count++;
                }
            }
        }
    }

    cout << count << endl;

}