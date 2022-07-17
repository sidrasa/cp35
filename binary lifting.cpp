#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N=2e5+5,mxe=log2(N)+5;
int dp[N][mxe];
vector<int>g[N];

// find 2^0th parent
void dfs(int e,int p){
    dp[e][0]=p;
    for(auto ng:g[e]){
        if(!dp[ng][0]){
            dfs(ng,e);
        }
    }
}

int main()
{
    for(int i=0;i<N;i++){
        for(int j=0;j<mxe;j++){
            dp[i][j]=0;
        }
    }
    dfs(1,-1);
    for(int x=0;x<N;x++){
        for(int i=1;i<mxe;i++){
            dp[x][i]=dp[dp[x][i-1]][i-1];
        }
    }
    while(q--){
        int x,k;
        cin>>x>>k;
        int ans=-1;
        for(int i=0;i<mxe;i++){
            if(k&(1<<i)){
                x=dp[x][i];
            }
        }
        cout<<x;
    }

    return 0;
}
