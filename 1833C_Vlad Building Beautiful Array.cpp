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
    int n;
    cin >> n;
    vecl v(n);
    for (auto &i: v)
        cin >> i;
    vsort;
    ll mi = v[0];
    int o = (mi % 2 != 0);
    for (int i = 1; i < n; i++) {
        if (v[i] % 2 == 0 && o == 0)
            continue;
        if (v[i] % 2 != 0 && o != 0)
            continue;
        for (int j = 0; j < n; j++) {
            if (v[i] > v[j]) {
                if ((v[i] - v[j]) % 2 == 0 && o == 0)
                    break;
                if ((v[i] - v[j]) % 2 != 0 && o != 0)
                    break;
            }
            if (j == n - 1) {
                no;
                re;
            }
        }
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
 
