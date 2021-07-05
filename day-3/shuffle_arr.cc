#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,1,0};
    string s1[]={"a","b","c"};
   int n=sizeof(arr)/sizeof(int);
    string s2[n];
    for(int i=0;i<n;i++){
        s2[i]=s1[arr[i]];
    }
    for(int i=0;i<n;i++){
        cout<<s2[i]<<" ";
    }
    return 0;
}