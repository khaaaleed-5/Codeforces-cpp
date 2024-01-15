#include<bits/stdc++.h>
#include <algorithm>

#define Khaaaleed_5 (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define re return
#define dsort      sort(arr,arr+n,greater<>())
#define asort      sort(arr,arr+n)
#define vsort      sort(v.begin(),v.end())
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
    ll n, k;
    cin >> n >> k;
    ll arr[n], arrb[n];
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        v.push_back({arr[i], i});
    }
    vsort;
    for (int i = 0; i < n; i++)
        cin >> arrb[i];
    sort(arrb, arrb + n);
    veci vv(n);
    for (int i = 0; i < n; i++) {
        vv[v[i].second] = arrb[i];
    }
    cout<<vv;
}


int main() {
    Khaaaleed_5
    why {
        solve();
        nl;
    }
    return 0;
}
 
