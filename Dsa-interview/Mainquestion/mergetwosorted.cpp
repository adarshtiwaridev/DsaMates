#include<bits/stdc++.h>
using namespace std;
void merger(int arr1[],int arr2[],int size1,int size2,vector<int>&ans){
    int i=0;
    int j=0;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else{
            ans.push_back(arr2[j]);
            j++;
        }
    }
    while(i<size1){
        ans.push_back(arr1[i]);
        i++;
    }
    while(j<size2){
        ans.push_back(arr2[j]);
        j++;
    }


}
int main(){
     int arr1[] = {1,6,5,7};
     int arr2[] = {2,4,6,8,10,12,22};

     int size1=4;
        int size2=7;
        vector<int>ans;
    merger(arr1,arr2,size1,size2,ans);
  for(int nums:ans){
    cout<<nums<<" ";
  }
    return 0;
}