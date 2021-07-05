// problem statement:program to remove duplicate from the array.dont use another array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i,j=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1]){
            arr[j++]=arr[i];
        }
    }
    arr[j++]=arr[n-1];

    for(int i=0;i<j;i++){
        cout<<arr[i]<<" ";
    }
    
}
