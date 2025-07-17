#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for (int i = 1; i < n; i++) {
            if (nums[i - 1] > nums[i]) {
                count++;
            }
        }

        if (nums[0] < nums[n - 1]) {
            count++;
        }

        return count <= 1;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    bool result = obj.check(nums);  

    if (result)
        cout << "The array is a rotated sorted array." << endl;
    else
        cout << "The array is NOT a rotated sorted array." << endl;

    return 0;
}
