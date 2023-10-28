// start pop operation at both ends, multiple fixed static arrays
#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque <int > d;
    d.push_back(1);
    d.push_front(2);
    
    for (int i: d){
        cout<<i<<endl;
    }
    d.pop_front();
    d.at(1);
    cout<<d.size();
    d.erase(d.begin() , d.begin()+1);
    
return 0;
}