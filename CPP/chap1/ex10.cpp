#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    int i = 0;
    int j = 0;
    string graphA = "";
    string graphB = "";

    while (i < A){
        graphA += "]";
        i++;
    }

    while (j < B){
        graphB += "]";
        j++;
    }

    cout << "A:" << graphA << endl;
    cout << "B:" << graphB << endl;
    
}