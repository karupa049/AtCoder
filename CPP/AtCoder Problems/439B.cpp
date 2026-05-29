#include <bits/stdc++.h>
using namespace std;

int get_next(int n) {
    int sum = 0;
    string s = to_string(n);
    for (char c : s) {
        int digit = c - '0'; 
        sum += digit * digit;
    }
    
    return sum;
}
int main() {
    int n;
    cin >> n;
    set<int> visited;

    while (n != 1 && visited.count(n) == 0) {
        visited.insert(n);
        n = get_next(n);
    }

    if (n == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
