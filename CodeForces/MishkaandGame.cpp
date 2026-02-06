#include <iostream>
using namespace std;
int solve(){
    int m,c;
    cin>>m>>c;
    if (m>c){
        return 0;
    }else if(m<c){
        return 1;
    }
    else{
        return -1;
    }

}
int main(){
    int t;
    cin>>t;
    int mishka=0;
    int chris=0;
    while(t--){
        int round=solve();
        if (round==0){
            mishka++;
        }
        else if(round==1){
            chris++;
        }
        else{
            continue;
        }
    }
    if (mishka>chris){
        cout<<"Mishka"<<"\n";
    }
    else if(chris>mishka){
        cout<<"Chris"<<"\n";
    }
    else{
        cout<<"Friendship is magic!^^"<<"\n";
    }

}