#include<bits/stdc++.h>
#include <algorithm>

#define Khaaaleed_5 (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define re return
#define dsort      sort(arr,arr+n,greater<>())
#define asort      sort(arr,arr+n)
#define all(v)     v.begin(),v.end()
#define veci vector<int>
#define vecl vector<ll>
#define ll long long
#define ld long double
#define ull unsigned long long
#define dd double
#define nl cout<<"\n"
#define no cout<<"NO"
#define yes cout<<"YES"
#define why int t;cin>>t; while(t--)

using namespace std;

template<typename S>
ostream &operator<<(ostream &os, const vector<S> &vector) {
    for (auto element: vector) {
        os << element << " ";
    }
    re os;
}

bool compareStrings(string &s, string &ss) {
    if (s.length() != ss.length()) {
        return s.length() < ss.length();
    } else {
        return s < ss;
    }
}

template<typename K, typename V>
struct ValueComparator {
    bool operator()(const std::pair<K, V> &lhs, const std::pair<K, V> &rhs) const {
        return lhs.second < rhs.second;
    }
};

void solve() {
    int n, m;
    cin >> n >> m;
    vecl v(n), vv(m);
    for (auto &i: v)
        cin >> i;
    for (auto &i: vv)
        cin >> i;
    sort(all(v));
    sort(all(vv));
    int l = 0, r = m - 1;
    ll ans = 0;
    int i = 0, j = n - 1;
    while (i <= j) {
        ll absA = abs(vv[r] - v[i]);
        ll absB = abs(vv[l] - v[j]);
        if (absA > absB)
            ans += absA, r--, i++;
        else
            ans += absB, l++, j--;
    }
    cout << ans;
}

int main() {
    Khaaaleed_5
    why {
        solve();
        nl;
    }

    return 0;
}
