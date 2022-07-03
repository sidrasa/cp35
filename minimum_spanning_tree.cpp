#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct UnionFind {
   int n, set_size, *parent, *rank;
   UnionFind(){}
   UnionFind(int a) {n = set_size = a;parent = new int[n+1];rank = new int[n+1];
       for(int i = 1; i <= n; ++i) parent[i]=i, rank[i]=1;}
   int find(int x) {if (x != parent[x]) return parent[x] = find(parent[x]);return x;}
   bool merge(int x, int y) {int xroot = find(x), yroot = find(y);
       if (xroot != yroot) {
           if (rank[xroot] >= rank[yroot]) {parent[yroot] = xroot;rank[xroot] += rank[yroot];}
           else {parent[xroot] = yroot;rank[yroot] += rank[xroot];}
           set_size -= 1;
           return 1;
       }
        return 0;
    }
   void reset(){
       set_size=n;for(int i=1;i<=n;i++)parent[i]=i,rank[i]=1;
   }
   int sz(int x){
        x=find(x);
        return rank[x];
   }
   int size() { return set_size; }
   void print() {for(int i = 1; i <= n; ++i)cout << i << " -> " << parent[i] << "\n";}
};

bool cmp(pair<pair<int,int>,int>a,pair<pair<int,int>,int>b){
    return a.second<b.second;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<pair<int,int>,int>>v;
    while(m--){
        int a,b,c;
        cin>>a>>b>>c;
        v.push_back({{a,b},c});
    }
    sort(v.begin(),v.end(),cmp);
    UnionFind dsu(n);
    int ans=0;
    for(auto e:v){
        int a=e.first.first;
        int b=e.first.second;
        int w=e.second;
        if(dsu.merge(a,b)){
            ans+=w;
        }
    }
    cout<<ans;


    return 0;
}