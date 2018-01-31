#include <vector>
#include <algorithm>
#include <iostream>

using std::cout;
using std::endl;
using std::sort;
using std::vector;

class Solution
{
  public:
    int singleNumber(vector<int> &nums)
    {
        if (nums.begin() == nums.end())
        {
            return 0;
        }
        sort(nums.begin(), nums.end());
        while (true)
        {
            if (nums.size() == 1)
            {
                return *nums.begin();
            }
            if (*(nums.begin() + 1) == *nums.begin())
            {
                nums.erase(nums.begin());
                nums.erase(nums.begin());
            }
            else
            {
                return *nums.begin();
            }
        }
    }
};

int main()
{
    Solution test;
    vector<int> v1 = {1, 1, 2, 2, 3};
    cout << test.singleNumber(v1) << endl;
    return 0;
}