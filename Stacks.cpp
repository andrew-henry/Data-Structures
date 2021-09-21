#include <iostream>

#include<stack>

using namespace std;

void printStackElements(stack<int> stack) {
    while (!stack.empty()) {
        cout << stack.top() << endl;
        stack.pop();
    }
}

int main( ) {
    
    stack<int>numberStack;
    
    numberStack.push(1);
    numberStack.push(2);
    numberStack.push(3);
    numberStack.push(4);

    numberStack.pop();
    
    printStackElements(numberStack);
    
    if (numberStack.empty())
        cout << " Stack data structure is empty "<< endl;
        
    else
        cout << " Stack data structure is not empty " << endl;
    cout << " Stack size is " << numberStack.size() << endl;
        
    return 0;
}