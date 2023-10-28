// PATTERN PROBLEMS
// ***
// ***
// ***
#include <iostream>
using namespace std;
 int main(){
    int size;
    cout << "Enter the size of the squ ";
    cin >> size;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++) {
            cout << "* ";
        }
    }
}


// 123
// 123
// 123
#include <iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter the size of the squ ";
    cin >> size;
    for (int i = 0; i < size; i++){
        for (int j = 1; j <=size; j++) {
            cout << j;
        }
        cout<<endl;
    }
}


// 321
// 321
// 312
#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter the size of the square mat ";
    cin >> size;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int value = size - j;
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}


// 123
// 456
// 789
#include <iostream>
using namespace std;
int main() {
    int rows=3;
    int cols = 3;
    int value =1;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << value << " ";
            value++;
        }
        cout << endl;
    }
    return 0;
}


// *
// **
// ***
#include <iostream>
using namespace std;
int main() {
    int rows = 5; // Number of rows
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}


        //   *
        //  ***
        // *****
#include <iostream>
using namespace std;
int main() {
    int rows = 5; // Number of rows
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
