#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N=1e5+5;
int t[N*4];

void bulid(int ind,int l,int r){
    if(l==r){ //leaf node
        t[ind]=a[l];
        return;
    }
    int mid=(l+r)/2; //divide the tree into left and right
    build(2*ind,l,mid); //left side
    build(2*ind+1,mid+1,r); //right side
    t[ind]=t[2*ind]+t[2*ind+1]; //build the root
}

void update(int ind,int l,int r,int pos,int val){
    if(r<pos||l>pos){
        return;
    }
    if(l==r){
        t[ind]=val;
        a[pos]=val
        return;
    }
    int mid=(l+r)/2;
    update(ind*2,l,mid,pos,val);
    update(ind*2+1,mid+1,r,pos,val);
    t[ind]=t[ind*2]+t[ind*2+1];
}

// lq and rq are the range given in the question
// l and r are the our own
int query(int ind,int l,int r,int lq,int rq){
    // not contribute the ans
    if(r<lq||l>rq){
        return 0;
    }
    // contribute the answer
    if(l>=lq&&r<=rq){
        return t[ind];
    }
    int mid=(l+r)/2;
    // Go down
    return{query(ind*2,l,mid,lq,rq)+query(ind*2+1,mid+1,r,lq,rq)};
}

int main()
{
    

    return 0;
}