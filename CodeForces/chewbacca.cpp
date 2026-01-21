#include <iostream>
using namespace std;
int main(){
    string num;
    cin>>num;
    string ans="";
    for (int i=0;i<num.size();i++){
        int ch=num[i]-'0';
        int curr=9-ch;
        if (curr>ch){
            ans+=ch+'0';
        }
        else{
            ans+=curr+'0';
        }
    }
    if(ans[0]=='0'){
        ans[0]='9';
    }
    cout<<ans;
    return 0;
}