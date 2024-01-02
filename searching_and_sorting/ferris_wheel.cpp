#include<bits/stdc++.h>
#define ll long long
#define savetime ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int main() {
    savetime;
    ll n, x;
    cin>>n>>x;
    vector<int> weight(n);
    for(int i=0; i<n; i++){
        cin>>weight[i];
    }
    sort(weight.begin() , weight.end());
    ll start = 0;
    ll end = n-1;
    ll cnt = 0;
    while(start < end) {
        if(weight[start] + weight[end] <= x){
            n--;
            start++;
            end--;
        }
        else{
            end--;
        }
    }
    cout<<n<<" ";
}