#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> nums;
        if (x >= 0) {
            if (x >= 10) {
                while (x >= 10) {
//                    cout << "Pushing " << x % 10 << " to nums." << endl;
                    nums.push_back(x % 10);
                    x /= 10;
                }
//                cout << "Pushing " << x << " to nums." << endl;
                nums.push_back(x);
                if (nums.size() % 2 == 0) {
                    auto fmid = nums.begin() + nums.size() / 2;
                    auto bmid = nums.begin() + nums.size() / 2 - 1;
                    while (fmid != nums.end()) {
//                        cout << "fmid is: " << *fmid << "; bmid is: " << *bmid << endl;
                        if (*fmid != *bmid) {
                            cout << "The num is not a palindrome number." << endl;
                            return false;
                        }
                        ++fmid;
                        --bmid;
                    }
                    cout << "The num is a palindrome number." << endl;
                    return true;
                } else {
                    auto hp = nums.begin();
                    auto ep = nums.end() - 1;
                    while (hp != ep) {
//                        cout << "hp is: " << *hp << "; ep is: " << *ep << endl;
                        if (*hp != *ep) {
                            cout << "The num is not a palindrome number." << endl;
                            return false;

                        }
                        ++hp;
                        --ep;
                    }
                    cout << "The num is a palindrome number." << endl;
                    return true;
                }
            } else {
                cout << x << endl;
                cout << "The num is a palindrome number." << endl;
                return true;
            }
        } else {
            cout << x << endl;
            cout << "The num is not a palindrome number." << endl;
            return false;
        }
    }
};

int main() {
    Solution test;
    cout << test.isPalindrome(52335) << endl;
    return 0;
}