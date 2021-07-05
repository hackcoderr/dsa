// Problem statement: find the max_elemnent from the array

#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> vec{{1,2,3},{3,1,5},{7,2,1}};
    vector<int> v;
    int sum;
    for(int i=0;i<3;i++){
        sum=0;
         for(int j=0;j<3;j++){
             sum=sum+vec[i][j];
        }
             v.push_back(sum);

    }
    cout<<*max_element(v.begin(),v.end());
}
