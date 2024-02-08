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

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    map<int, int> mp1, mp2;
    veci v(n), vv(m);
    for (auto &i: v) {
        cin >> i;
        mp1[i]++;
    }
    for (auto &i: vv) {
        cin >> i;
        mp2[i]++;
    }
    int cnt1 = 0, cnt2 = 0;
    for (int i = 1; i <= k; i++) {
        if (mp1[i] == 0 and mp2[i] == 0) {
            no;
            re;
        }
        if (mp1[i] >= 1)
            cnt1++;
        if (mp2[i] >= 1)
            cnt2++;
    }
    if (cnt1 < k / 2 or cnt2 < k / 2)
        no;
    else
        yes;
}

int main() {
    Khaaaleed_5
    why {
        solve();
        nl;
    }

    return 0;
}
