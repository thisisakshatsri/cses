#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    array<int, 2> a[n];
    for(int i=0; i<n; i++){
        cin>>a[i][1]>>a[i][0];
    }
    sort(a, a+n);
    int ans = 0;
    int l=0;
    for(int i=0; i<n; i++){
        if(a[i][1] >= l){
            ans++;
            l = a[i][0];
        }
    }
    cout<<ans<<endl;
}