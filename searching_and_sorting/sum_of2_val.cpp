#include<bits/stdc++.h>
#define ll long long
#define savetime ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int main() {
    ll n, x;
    cin>>n>>x;
    unordered_map<ll, ll> mp;
    for(int i=0; i<n; ++i){
        int a;
        cin>>a;
        int val = x-a;
        if(mp.find(val) != mp.end()){
            cout<<mp[val]+1<<" "<<i+1<<endl;
            return 0;
        }
        mp[a] = i;
    }
    // for(ll i=0; i<n; i++){
    //     mp[a[i]] = i;
    // }
    // for(ll i=0; i<n; i++){
    //     ll val = x-a[i];
    //     if(mp.find(val) != mp.end() && mp[val] != i){
    //         cout<<mp[val]+1 <<" "<<i+1<<endl;
    //         return 0;
    //     }
    // }
    cout<<"IMPOSSIBLE"<<endl;
}