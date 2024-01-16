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
    int n, k;
    cin >> n >> k;
    if (k == n)
        for (int i = 1; i <= n; i++)
            cout << i << ' ';
    else if (k == 0)
        for (int i = n; i > 0; i--)
            cout << i << ' ';
    else {
        for (int i = n - k; i <= n; i++)
            cout << i << ' ';
        for (int i = n - k - 1; i > 0; i--)
            cout << i << ' ';
    }
}

int main() {
    Khaaaleed_5
    why {
        solve();
        nl;
    }

    return 0;
}
 
