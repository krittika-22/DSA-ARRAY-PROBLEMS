#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0;
        int j = 0;
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans;

        while (i < n && j < m) {
            if (nums1[i] < nums2[j]) {
                i++;
            } else if (nums1[i] > nums2[j]) {
                j++;
            } else {
                if (ans.empty() || ans.back() != nums1[i]) {
                    ans.push_back(nums1[i]);
                }
                i++;
                j++;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter size of first array: ";
    cin >> n;
    vector<int> nums1(n);
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums1[i];
    }
    int m;
    cout << "Enter size of second array: ";
    cin >> m;
    vector<int> nums2(m);
    cout << "Enter elements of second array: ";
    for (int i = 0; i < m; ++i) {
        cin >> nums2[i];
    }

    vector<int> result = sol.intersection(nums1, nums2);

    cout << "Intersection of the arrays is: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
