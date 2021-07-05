// problem Statement: show the array  in this format .
// x[]={a1,x1,a2,x2,a3,x3}
        // ||
// x[]={a1,x1,a2||,x2,a3,x3}
// ouput:= a1,x2,x1,a3,a2,x3
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
    vector<int> vec;
    for(int i=0;i<n/2;i++)
    {
        vec.push_back(arr[i]);
        vec.push_back(arr[n/2+i]);
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}
