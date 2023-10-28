//last in first out
#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("ayano");
    s.push("kiyotaka");
    s.push("pon");

    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top();
    cout<<s.size();
    cout<<s.empty();
return 0;
}