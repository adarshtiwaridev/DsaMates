#include<bits/stdc++.h>
using namespace std;

int getPaintway(int n,int k){
    //base case 
    if(n==1){
        return k;
    }
    if(n==2){
        return k+ k*(k-1);

    }
    int ans=(k-1)*(getPaintway(n-1,k) + getPaintway(n-2,k));
    return ans;
}

int main(){
    // fence problem hai  gfg me 
    //  n=3 and k=2 means n=colur aur k=total pole are 
    int n=3;
    int k=3;
    int ans=getPaintway(n,k);
    cout<<"total possible cases are  :"<<ans;
    return 0;
}