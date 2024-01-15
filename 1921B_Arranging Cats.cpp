#include<bits/stdc++.h>
#include <algorithm>

#define why int t;cin>>t; while(t--)
using namespace std;
 
template<typename S>
ostream &operator<<(ostream &os, const vector<S> &vector) {
    for (auto element: vector) {
        os << element << " ";
    }
    re os;
}
void solve() {
    int n;
    cin >> n;
    string s, ss;
    cin >> s >> ss;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1' and ss[i] == '0')
            cnt1++;
        if (ss[i] == '1' and s[i] == '0')
            cnt2++;
    }
    cout << max(cnt1, cnt2);
}
 
int main() {
    why {
        solve();
        nl;
    }
 
    return 0;
}
