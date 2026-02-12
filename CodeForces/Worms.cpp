#include <iostream>
#include <vector>
using namespace std;
int lower_bound(vector<int> &nums, int n, int target)
{
    int l = 0;
    int r = n- 1;
    int ans = n;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] >= target)
        {
            ans = min(mid, ans);
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for (int i=1;i<n;i++){
        nums[i]+=nums[i-1];
    }

    int m;
    cin>>m;
    while(m--){
        int q;
        cin>>q;
        int lb=lower_bound(nums,n,q);
        cout<<lb+1<<"\n";
    }
}