// Remove the selected element from the array like if k=2 then rempve all ccurance of 2;

#include<bits/stdc++.h>
using namespace std;
int main(){
    int key;vector<int> arr={2,2,2,2,6,2,2,8,2,5};
    cin>>key;
    for(auto itr=arr.begin();itr!=arr.end();itr++){
        if(*itr==key){
            arr.erase(itr);
            itr--;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
