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

void solve() {
    int n;
    cin >> n;
    veci v(n);
    for (auto &i: v)
        cin >> i;
    sort(all(v));
    cout << v[n - 1] - v[0];
}

int main() {
    Khaaaleed_5
    why {
        solve();
        nl;
    }

    return 0;
}
