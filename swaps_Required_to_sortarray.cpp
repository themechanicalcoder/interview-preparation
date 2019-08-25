#include<bits/stdc++.h>
using namespace std;


// treat the elements as graph nodes
// ans+=cycle_size-1;
int main(){
    vector<int>v={0,2,3,4,1,6,5};
    int n=v.size();
    bool vis[n];
    vector<pair<int,int>>a;
    for(int i=0;i<n;i++){
        vis[i]=false;
        a.push_back({v[i],i});
    }
    int ans=0;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(i==a[i].second||vis[i])
            continue;
        int cycle_size=0,idx=i;
        while(!vis[idx]){
            vis[idx]=true;
            cycle_size++;
            idx=a[idx].second;
        }
    if(cycle_size)ans+=cycle_size-1;
    }
    cout<<ans;
}
