#include <vector>
#include <iostream>

using std ::cout;
using std::endl;
using std::vector;

class Solution
{
  public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size() - 1;
        if (digits[n] == 9)
        {
            digits[n] = 0;
            while (digits[n - 1] == 9)
            {
                digits[n - 1] = 0;
                --n;
            }
            if (n == 0)
            {
                digits.insert(digits.begin(), 1);
            }
            else
            {
                ++digits[n - 1];
            }
        }
        else
        {
            ++digits[n];
        }
        return digits;
    }
};

int main()
{
    Solution test;
    vector<int> v1 = {1, 2, 3, 4};
    for (auto &r : test.plusOne(v1))
    {
        cout << r << endl;
    }
    return 0;
}