#include<bits/stdc++.h>
using namespace std;
int add(int n){
    int s=0;
    for(int i=0;i<n;i++){
        s+=i;
    }
    return s;
} 

int main(){
    vector<int> v={1,2,3,1,1,3};
    map<int,int> mp;
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;
    }
    int c=1;
    int sum=0;
    for(auto a : mp){
        c=1;
        if(a.second>c){
            c=a.second;
            sum=sum+add(c);
        }
    }
    cout<<sum;

}