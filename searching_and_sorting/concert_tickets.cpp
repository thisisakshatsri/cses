#include<bits/stdc++.h>
#define ll long long
#define savetime ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int main() {
    ll n, m;
    cin>>n>>m;
    multiset<int> s;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        s.insert(x);
    }
    for(int i=0; i<m; i++){
        int tic;
        cin>>tic;
        auto pri = s.upper_bound(tic);
        if(pri == s.begin()){
            cout<<-1<<"\n";
        }
        else{
            --pri;
            cout<<*pri<<"\n";
            s.erase(pri);
        }
    }
}