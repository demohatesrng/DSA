#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> charStack;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            
            charStack.push(c);
        } 
        else {
            if (charStack.empty()) {
                return false; 
            }

            char topChar = charStack.top();
            if ((c == ')' && topChar == '(') ||
                (c == ']' && topChar == '[') ||
                (c == '}' && topChar == '{')) {
                charStack.pop();
            } 
            else {
                return false;
            }
        }
    }
    return charStack.empty();
}
int main() {
    string input;
    cout << "Enter a string with parentheses, brackets, and curly braces: ";
    cin >> input;

    if (isValid(input)) {
        cout << "The input has valid parentheses." << endl;
    } else {
        cout << "The input does not have valid parentheses." << endl;
    }

    return 0;
}
