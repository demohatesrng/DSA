#include <iostream>
using namespace std;
int main(){
    int arr[10] = {2,5,6,12,15,66,20,2004,12,10};
    cout<<"address of memeory block "<<arr<<endl;
    cout<<"address of memeory block "<<&arr<<endl;
    cout<<"address of memeory block "<<&arr[0]<<endl;
    cout<<"value of memeory block "<<*arr<<endl;
    cout<<"value of memeory block "<<*arr+1<<endl;
    cout<<"value of memeory block "<<(*arr+1)<<endl;
    cout<<"value of memeory block "<<(*arr)+1<<endl;
    cout<<"value of memeory block "<<arr[2]<<endl;
    cout<<"address of memeory block "<<&arr[2]<<endl;

    int i = 3;
    cout<< i[arr]<<endl; //(*i + arr)
    // prints the 3rd element of arr[i]

    int temp[10];
    cout<<"size of temp"<<endl;
    cout<<sizeof(temp)<<endl;

    int *ptr = &temp[0];
    cout<<"size of ptr"<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<"value of ptr when deferenced"<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<"address of ptr"<<endl;
    cout<<sizeof(&ptr)<<endl;

    int array[10];
    int *ptrr = &array[0];
    cout<<"address of the new ptrr"<<endl;
    cout<<ptrr<<endl;
    cout<<"ptrr incremented"<<endl;
    ptrr = ptrr +1;
    cout<<" "<<ptrr<<endl;
    
return 0;
}