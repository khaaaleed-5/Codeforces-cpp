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
    string s = "";
    if (n > 52) {
        s += "zz";
        n -= 52;
        s += ('a' + n - 1);
    } else if (n <= 52 and n > 27) {
        s += 'z';
        n -= 26;
        s += 'a';
        n -= 1;
        s += ('a' + n - 1);
    } else {
        s += "aa";
        n -= 2;
        s += ('a' + n - 1);
    }
    sort(s.begin(), s.end());
    cout << s;
}

int main() {
    Khaaaleed_5
    why {
        solve();
        nl;
    }

    return 0;
}
