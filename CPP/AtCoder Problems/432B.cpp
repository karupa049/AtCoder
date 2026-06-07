#include <bits/stdc++.h>
using namespace std;

int main() {
    string X;
    cin >> X;

    sort(X.begin(), X.end());

    if (X[0] == '0') {
        for (int i = 0; i < X.size(); i++) {
            if (X[i] != '0') {
                swap(X[0], X[i]);
                break;
            }
        }
    }

    cout << X << endl;

    return 0;
}