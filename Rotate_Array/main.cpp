#include <vector>
#include <iostream>
using std::cout;
using std::endl;
using std::vector;

class Solution
{
  public:
    void rotate(vector<int> &nums, int k)
    {
        if (nums.begin() == nums.end())
        {
            return;
        }
        auto begin = nums.begin();
        for (int i = 0; i < k; ++i)
        {
            begin = nums.insert(begin, *(nums.end() - 1));
            nums.erase(nums.end() - 1);
        }
    }
};

int main()
{
    Solution test;
    vector<int> n1 = {1};
    test.rotate(n1, 6);
    for (auto &r : n1)
    {
        cout << r << endl;
    }
    return 0;
}