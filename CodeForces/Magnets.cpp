#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int group=1;
    int first;
    cin>>first;
    vector<int> magnets;
    magnets.push_back(first);
    for(int i=1;i<n;i++){
        int curr;
        cin>>curr;
        if(curr!= magnets.back()){
            group+=1;
        }
        magnets.push_back(curr);

    }
    cout<<group<<"\n";

    return 0;
}