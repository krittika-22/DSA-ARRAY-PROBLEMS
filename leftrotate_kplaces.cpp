#include<bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  

        reverse(nums.begin(), nums.end());

        
        reverse(nums.begin(), nums.begin() + k);

       
        reverse(nums.begin() + k, nums.end());
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int k;
    cout << "Enter k: ";
    cin >> k;

    Solution obj;
    obj.rotate(nums, k);

    cout << "Array after rotation: \n";
    for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
    cout << endl;
    }

    return 0;
}
