#include <vector>
#include <iostream>
using std::cout;
using std::endl;
using std::vector;

class Solution
{
  public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;
        for (int n = prices.size(), i = 0; i < n; ++i)
        {
            if (prices[i + 1] > prices[i])
            {
                profit = profit + prices[i + 1] - prices[i];
            }
        }
        return profit;
    }
};

int main()
{
    Solution test;
    vector<int> v1 = {1, 4, 2};
    cout << test.maxProfit(v1) << endl;
    return 0;
}