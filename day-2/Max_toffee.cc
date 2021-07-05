// problem statement:- Find the max tofee ;

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={2,3,5,1,3};
    int ma= *max_element(v.begin(),v.end());

    int extofe=3;
    for(int i=0;i<v.size();i++){
        if( (extofe + v[i]) >= ma){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    }


}