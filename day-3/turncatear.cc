#include<iostream>
using namespace std;
string truncateSentence(string s, int k) {
    int c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            c++;
        }
        else if(c==k){
            cout<<i;
            s.erase(i-1);
        }
    }
    return s;        
}
int main(){
    string s="hello how are you customer";
     cout<<truncateSentence(s, 4);

}
