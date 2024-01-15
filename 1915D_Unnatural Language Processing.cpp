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

template<typename K, typename V>
struct ValueComparator {
    bool operator()(const std::pair<K, V> &lhs, const std::pair<K, V> &rhs) const {
        return lhs.second < rhs.second;
    }
};

void solve() {
    int n;
    cin >> n;
    string s, ans = "", seq = "C";
    cin >> s;
    ans += s[0];
    for (int i = 1; i < n; i++) {
        if (seq == "C" and (s[i] == 'a' or s[i] == 'e')) {
            ans += s[i];
            seq += "V";
        } else if (seq == "CV") {
            if (s[i + 1] == 'a' or s[i + 1] == 'e') {
                ans += '.';
                ans += s[i];
                seq = "C";
            } else {
                ans += s[i];
                seq += "C";
            }
        }
        if (seq == "CVC" and i != n - 1) {
            seq = "C";
            ans += '.';
            ans += s[i + 1];
        }
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
 
