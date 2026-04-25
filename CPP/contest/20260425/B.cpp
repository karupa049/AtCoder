#include<bits/stdc++.h>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;

    vector<vector<char>> r(h, vector<char>(w));

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> r[i][j];
        }
    }

    /*
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cout << r[i][j] << " ";
        }
        cout << endl;
    }
    */
    int count = 0;

    for (int h1 = 0; h1 < h; h1++)
    {
        for (int h2 = h1; h2 < h; h2++)
        {
            for (int w1 = 0; w1 < w; w1++)
            {
                for (int w2 = w1; w2 < w; w2++)
                {
                    bool flag = true;
                    for (int i = h1; i <= h2; i++)
                    {
                        for (int j = w1; j <= w2; j++)
                        {
                            if (r[i][j] != r[h1 + h2 - i][w1 + w2 - j])
                            {
                                flag = false;
                            }
                        }
                    }
                    if (flag == true)
                    {
                        count++;
                    }
                }
            }
        }
    }
    cout << count << endl;
}