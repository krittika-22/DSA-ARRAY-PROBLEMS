#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 1)
            {
                cnt++;
                maxi = max(cnt, maxi);
            }
             else
            {
                cnt = 0;
            }
        }
        return maxi;
    }
};

int main() {
    int n;
    cout << "Enter number of elements in the binary array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the binary array elements :\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int result = obj.findMaxConsecutiveOnes(nums);
    cout << "Maximum consecutive 1s: " << result << endl;

    return 0;
}
