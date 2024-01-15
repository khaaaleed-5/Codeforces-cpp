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
    string s, ss;
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < n - 1; i++) {
        ss = "";
        ss += s[i];
        ss += s[i + 1];
        mp[ss]++;
    }

    cout << mp.size();
}


int main() {
    Khaaaleed_5
     why {
        solve();
        nl;
    }
    return 0;
}
 
