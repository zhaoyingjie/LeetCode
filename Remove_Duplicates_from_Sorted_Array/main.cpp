#include <vector>
#include <iostream>
using std::cout;
using std::endl;
using std::vector;

int removeDuplicates(vector<int> &nums)
{
    auto begin = nums.begin();
    /*
    auto end = num.end();
    以上为错误用法，删除vector中元素后，尾后迭代器会失效，导致17行的判断失效。
    */
    if (begin != nums.end())
    {
        auto after_begin = begin + 1;
        while (after_begin != nums.end())
        {
            if (*begin == *after_begin)
            {
                after_begin = nums.erase(after_begin);
                if (after_begin == nums.end())
                {
                    return nums.size();
                }
            }
            if (*begin != *after_begin)
            {
                ++begin;
                ++after_begin;
            }
            else
            {
                continue;
            }
        }
        return nums.size();
    }
    else
    {
        return 0;
    }
}

int main()
{
    vector<int> a = {1, 1, 1, 1, 1, 1};
    cout << "容器创建完成" << endl;
    cout << "清除重复元素后的容器大小为:" << removeDuplicates(a) << endl;
    for (auto &r : a)
    {
        cout << r << endl;
    }
    return 0;
}