#include <iostream>
#include <limits>

using std::cout;
using std::endl;
using std::numeric_limits;


class Solution {
public:
    int reverse(int x) {
        int rint = 0;
        if (x == 0) {
            rint = 0;
        } else {
            while (x >= 1 || x <= -1) {
                if (x < 10 && x > -10) {
                    if (rint > 214748364 || rint < -214748364) {
                        cout << "rint out of size!" << endl;
                        rint = 0;
                    } else {
                        rint = rint * 10 + x;
                    }
                } else {
                    rint = rint * 10 + (x % 10);
                }
                x /= 10;
                cout << "x is: " << x << endl;
            }
        }
        cout << "rint is: " << rint << endl;
        return rint;
    }
};

int main() {
    cout << "32-bit max is: " << numeric_limits<signed int>::max() << endl;
    cout << "32-bit max is: " << numeric_limits<signed int>::min() << endl;
    Solution test;
    test.reverse(2147483647);

    return 0;
}
