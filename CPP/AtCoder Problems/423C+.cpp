#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n, r;
    cin >> n >> r;
    vector<int> a(n + 1);
    
    int min_pos = 1e9, max_pos = -1;
    int zero_count = 0;
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] == 0) {
            zero_count++;
            min_pos = min(min_pos, i);
            max_pos = max(max_pos, i);
        }
    }

    if (zero_count == 0) {
        cout << 0 << endl;
        return 0;
    }

    // ここが一番のポイント！
    // 答えは (min_pos から max_pos までの距離) + (R から近い方の端までの距離) + (ゼロの個数)
    // ただし、ドアiは部屋i-1とiの間にあるので、Rを部屋と見なすと距離はこうなります
    
    int dist_min = abs(r - (min_pos - 1)); // min_posへのアクセス
    int dist_max = abs(r - max_pos);       // max_posへのアクセス
    
    // どちらの端から始めても、往復して全てのドアを閉める距離は (max_pos - min_pos)
    int ans = (max_pos - min_pos) + min(dist_min, dist_max) + zero_count;
    
    cout << ans << endl;
    return 0;
}