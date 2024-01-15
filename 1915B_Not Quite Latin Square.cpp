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
    char arr[3][3];
    map<char, int> mp;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            mp[arr[i][j]]++;
        }
    char ans;
    for (auto i: mp) {
        if (i.second < 3 and i.first != '?') {
            ans = i.first;
            break;
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
 
