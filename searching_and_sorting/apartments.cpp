#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m,k;
    cin>>n>>m>>k;
    vector<int>a;
    vector<int>fa;
    for(int i=0; i<n; i++){
        int val;
        cin>>val;
        a.push_back(val);
    }
    for(int i=0; i<m; i++){
        int val;
        cin>>val;
        fa.push_back(val);
    }
    sort(a.begin() , a.end());
    sort(fa.begin() , fa.end());
    int i=0;
    int j=0;
    int cnt=0;
    // for(int i=0; i<n; i++) cout<<a[i] <<" ";
    // for(int i=0; i<m; i++) cout<<fa[i] <<" ";
    while(i<n && j<m){
        if(a[i] >= fa[j]-k && a[i] <= fa[j]+k){
            i++;
            j++;
            cnt++;
        }
        else if(a[i] > fa[j]) j++;
        else i++;
    }
    cout<<cnt<<endl;
}
// 4 3 5
// 60 45 80 60
// 30 60 75