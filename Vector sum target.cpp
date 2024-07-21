
#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(const vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {}; // Should never be reached if there is exactly one solution
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);

    cout << "Output: [" << result[0] << "," << result[1] << "]" << endl;
    return 0;
}
