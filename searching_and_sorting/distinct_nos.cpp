#define ll long long
#define savetime ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#include<bits/stdc++.h>
using namespace std;

int main(){
    savetime;
    ll n;
    cin>>n;
    ll arr[n];
    set<ll> st;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        st.insert(arr[i]);
    }
    cout<<st.size()<<" ";
}