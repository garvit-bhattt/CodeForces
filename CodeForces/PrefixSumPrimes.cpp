#include <iostream>
using namespace std;
int main(){
    int n;
    int ones=0;
    int twoes=0;
    cin>>n;
    for (int i=0; i<n;i++){
        int x;
        cin>>x;
        if (x==1){
            ones++;
        }
        else{
            twoes++;
        }
    }
    if (twoes==0){
        for (int i=0;i<ones;i++){
            cout<<"1 ";
        }
    }
    else if(ones==0){
        for (int i=0;i<twoes;i++){
            cout<<"2 ";
        }
    }
    else{
        cout<<"2 1 ";
        for(int i=0;i<twoes-1;i++){
            cout<<"2 ";
        }
        for(int i=0;i<ones-1;i++){
            cout<<"1 ";
        }
    }

    return 0;
}