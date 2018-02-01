#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;

class Solution
{
  public:
    void moveZeroes(vector<int> &nums)
    {
        auto begin = nums.begin();
        if (begin == nums.end())
        {
            return;
        }
        for (int n = nums.size(), i = 0; i < n; ++i)
        {
            if (*begin == 0)
            {
                begin = nums.erase(begin);
                nums.push_back(0);
                continue;
            }
            ++begin;
        }
        for (auto &r : nums)
        {
            cout << r << endl;
        }
    }
};

int main()
{
    Solution test;
    vector<int> v1 = {0};
    test.moveZeroes(v1);
    return 0;
}