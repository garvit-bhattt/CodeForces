#include <iostream>
using namespace std;
bool check(string operation){
    if (operation=="X++" || operation=="++X"){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int t;
    cin>>t;
    int x =0;
    for(int i=0;i<t;i++){
        string operation;
        cin>>operation;
        if (check(operation)){
            x++;
        }
        else {
            x--;
        }
    }
    cout<<x;
    return 0;
}