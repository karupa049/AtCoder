#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;

    int Max = max(A, B);
    Max = max(Max, C);

    int Min = min(A, B);
    Min = min(Min, C);

    int result = Max - Min;

    cout << result << endl;
}