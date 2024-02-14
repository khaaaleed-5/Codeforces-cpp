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
    ll s = 0, elm;
    cin >> n;
    vecl v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        s += v[i];
    }
    elm = s / n;
    s = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > elm)
            s += (v[i] - elm);
        else {
            s -= (elm - v[i]);
        }
        if (s < 0)
            return void(no);
    }
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
