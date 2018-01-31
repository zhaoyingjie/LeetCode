#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 != 0) {
            return false;
        }
        vector<char> p;
        for (char c:s) {
            switch (c) {
                case '(':
                case '{':
                case '[':
                    p.push_back(c);
                    break;
                case ')':
                    if (p.empty() || p.back() != '(') {
                        return false;
                    } else {
//                        p.erase(p.end() - 2, p.end() - 1);
                        p.pop_back();
                        break;
                    }
                case '}':
                    if (p.empty() || p.back() != '{') {
                        return false;
                    } else {
//                        p.erase(p.end() - 2, p.end() - 1);
                        p.pop_back();
                        break;
                    }
                case ']':
                    if (p.empty() || p.back() != '[') {
                        return false;
                    } else {
//                        p.erase(p.end() - 2, p.end() - 1);
                        p.pop_back();
                        break;
                    }
                default:;
            }
        }
        return p.empty();
    }
};

int main() {
    Solution test;
    cout << test.isValid("()") << endl;
    return 0;
}