#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum=0;
        int maxi=INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
            sum +=nums[i];

            if(sum>maxi)
            {
                maxi=sum;
            }

            if(sum<0)
            {
                sum=0;
            }
        }
        return maxi;
    }
};
   int main()
   {

    int n;
    cout<<"Enter the number of elements:\n";
    cin>>n;

    vector <int>nums(n);
    cout<<"Enter the array elements:\n";
    for(int i=0;i<n;i++)
    {
      cin>>nums[i];
    }

    Solution obj;
     int result=obj.maxSubArray(nums);
     cout<<"maximum subarray sum is:"<< result  << endl;

    return 0;
    
   }



