#include <iostream>
#include "stack.h"
int main() {
    Stack s;
    s.push(42);
    std::cout << s.pop() << std::endl;
    return 0;
}