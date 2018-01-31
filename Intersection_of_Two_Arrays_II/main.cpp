#include <vector>
#include <iostream>
#include <algorithm>
using std::cout;
using std::endl;
using std::sort;
using std::vector;

class Solution
{
  public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> result;
        if (nums1.begin() == nums1.end() || nums2.begin() == nums2.end())
        {
            return result;
        }
        auto begin1 = nums1.begin();
        while (begin1 != nums1.end())
        {
            auto begin2 = nums2.begin();
            while (begin2 != nums2.end())
            {
                if (*begin2 == *begin1 && begin1 != nums1.end())
                {
                    result.push_back(*begin2);
                    begin1 = nums1.erase(begin1);
                    begin2 = nums2.erase(begin2);
                    continue;
                }
                ++begin2;
            }
            if (begin1 != nums1.end())
            {
                ++begin1;
            }
        }
        return result;
    }
};

int main()
{
    Solution test;
    vector<int> v1 = {2, 1};
    vector<int> v2 = {1, 2};
    for (auto &r : test.intersect(v1, v2))
    {
        cout << r << endl;
    }
    return 0;
}