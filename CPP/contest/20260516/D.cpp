#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, q;
    cin >> x >> q;

    vector<int> a(q);
    vector<int> b(q);
    for(int i = 0; i < q; i++) cin >> a[i] >> b[i];

    multiset<int> st;
    st.insert(x);

    auto mid = st.begin();

    for(int i = 0; i < q; i++){
        st.insert(a[i]);
        st.insert(b[i]);

        if(a[i] < *mid && b[i] < *mid){
            mid--;
        }
        else if(a[i] >= *mid && b[i] >= *mid){
            mid++;
        }
        cout << *mid << "\n";
    }
}