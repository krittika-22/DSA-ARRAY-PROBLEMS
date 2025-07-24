#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {

         int n=nums.size();
         int sum=(n*(n+1))/2;
         int s2=0;
        for(int i=0;i<n;i++)
        {
            s2+=nums[i];
        }
    return (sum-s2);
    }
};

int main()
{
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS: \n";
    cin>>n;

    vector<int>nums(n);
    cout<<"ENTER "<< n  <<" ELEMENTS OF THE ARRAY:\n";
    for(int i=0;i<n;i++)
     {
      cin>>nums[i];
     }

      Solution obj;

      int missing = obj.missingNumber(nums);
      cout << "Missing number is: " << missing << endl;
      return 0;
     }
