#include <vector>
class Stack {
    std::vector<int> v;
public:
    void push(int x) { v.push_back(x); }
    int pop() {
        int x = v.back();
        v.pop_back();
        return x;
    }
};