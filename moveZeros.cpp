#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        
        if (j == -1) return;

       
        for (int i = j + 1; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

int main() {

    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
   

     Solution sol;
     sol.moveZeroes(nums);

    cout << "Array after moving zeroes: ";
    for (int i=0;i<nums.size();i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
