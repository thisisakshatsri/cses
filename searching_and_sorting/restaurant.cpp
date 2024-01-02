#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a, b;
    vector<pair<int, bool>> mark;
    while(n--){
        cin>>a>>b;
        mark.push_back({a, true});
        mark.push_back({b, false});
    }
    sort(begin(mark) , end(mark));
    int ans = 0;
    int cnt = 0;
    for(int i=0; i<mark.size(); i++){
        if(mark[i].second == true) {
            cnt++;
            ans = max(ans, cnt);
        }
        else cnt--;
        }
    cout<<ans<<"\n";
}