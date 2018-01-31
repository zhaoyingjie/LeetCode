#include <iostream>
#include <vector>

using std::vector;
using std::begin;
using std::end;
using std::cout;
using std::cin;
using std::endl;


class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> result;
        for (auto p1 = nums.begin(); p1 != (nums.end() - 1); ++p1) {
            for (auto p2 = (nums.begin() + 1); p2 != nums.end(); ++p2) {
                if (((*p1 + *p2) == target) && (p1 != p2)) {
                    cout << "Indices of p1 is: " << p1 - nums.begin() << endl;
                    cout << "Indices of p2 is: " << p2 - nums.begin() << endl;
                    result = {static_cast<int>(p1 - nums.begin()), static_cast<int>(p2 - nums.begin())};
                    cout << "Indices is: " << "[" << result[0] << "," << result[1] << "]" << endl;
                }
            }
        }
        return result;
    }
};

int main() {
    Solution obj1;
    vector<int> v1 = {1, 3, 5, 7};
    obj1.twoSum(v1, 10);
    return 0;
}