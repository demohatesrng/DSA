#include <iostream>
#include <list>
using namespace std;
int main(){
    list <int > l;
    l.push_back(1);
    l.push_front(3);

    for(int i: l){
        cout<<i<<endl;
    }

    l.erase(l.begin());
    for(int i: l){
        cout<<i<<endl;
    }
return 0;
}