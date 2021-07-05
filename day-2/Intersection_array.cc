// problem statement: FInd the intersection of two array

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr1={4,9,5};
    vector<int>arr2={4,9,4};
     set<int> s;
        set<int> s1;
    vector<int> j;
    for(auto i :arr1){
        s.insert(i);
    }
    for(auto b : arr2){
        if(s.find(b)!=s.end())
        {
           s1.insert(b);
        }
    }
        for(auto s : s1){
            j.push_back(s);
            cout<<s<<"  ";
        }
        
   
}