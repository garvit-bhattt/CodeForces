#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    float num=0;
    for (int i =0;i<n;i++){
        int ele;
        cin>>ele;
        num+=ele;
    }

    cout<<num/n<<"\n";
    
    return 0;
}