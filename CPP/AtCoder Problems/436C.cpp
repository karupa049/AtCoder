#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n + 2, vector<int> (n + 2, 0));
    vector<int> r(m + 1);
    vector<int> c(m + 1);
    for(int i = 1; i <= m; i++) cin >> r[i] >> c[i];

    int count = 1;
    for(int i = 1; i <= m; i++){
        if(grid[r[i]][c[i]] == 0 and grid[r[i] + 1][c[i]] == 0 and grid[r[i]][c[i] + 1] == 0 and grid[r[i] + 1][c[i] + 1] == 0){
            grid[r[i]][c[i]] = count;
            grid[r[i] + 1][c[i]] = count;
            grid[r[i]][c[i] + 1] = count;
            grid[r[i] + 1][c[i] + 1] = count;
            count += 1;
        }
    }

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++){
    //         cout << grid[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << count - 1 << endl;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;

//     set<pair<int, int>> used;
//     int count = 0;

//     for (int i = 0; i < m; i++) {
//         int r, c;
//         cin >> r >> c;

//         if (used.count({r, c}) == 0 && 
//             used.count({r + 1, c}) == 0 && 
//             used.count({r, c + 1}) == 0 && 
//             used.count({r + 1, c + 1}) == 0) {

//             used.insert({r, c});
//             used.insert({r + 1, c});
//             used.insert({r, c + 1});
//             used.insert({r + 1, c + 1});
//             count++;
//         }
//     }

//     cout << count << endl;
//     return 0;
// }