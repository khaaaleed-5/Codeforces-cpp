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
    int n = 4;
    int x, y, x1, y1;
    int area = INT_MAX;
    cin >> x1 >> y1;
    for (int i = 0; i < n - 1; i++) {
        cin >> x >> y;
        int dist = pow(x - x1, 2) + pow(y - y1, 2);
        dist = sqrt(dist);
        x1 = x, y1 = y;
        area = min(dist * dist, area);
    }
    cout<< area;
}
 
int main() {
    why {
        solve();
        nl;
    }
 
    return 0;
}
