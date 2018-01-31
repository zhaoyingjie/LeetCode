#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::sort;
using std::vector;

class Solution
{
  public:
    bool containsDuplicate(vector<int> &nums)
    {
        if (nums.begin() == nums.end())
        {
            return false;
        }
        sort(nums.begin(), nums.end());
        auto begin = nums.begin();
        auto end = nums.end();
        while (begin != end - 1)
        {
            if (*begin == *(begin + 1))
            {
                return true;
            }
            ++begin;
        }
        return false;
    }
};

int main()
{
    vector<int> v2 = {-24500};
    while (v2.back() < 24500)
    {
        v2.push_back(*(v2.end() - 1) + 1);
    }
    Solution test;
    vector<int> v1 = {1, 2, 3, 4, 2};
    if (test.containsDuplicate(v2))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}