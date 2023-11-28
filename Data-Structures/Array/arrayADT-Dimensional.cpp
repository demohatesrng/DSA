#include <iostream>
using namespace std;
class TwoDArray {
private:
    int** data;
    int numRows;
    int numCols;

public:
    TwoDArray(int rows, int cols) {
        numRows = rows;
        numCols = cols;
        data = new int*[numRows];
        for (int i = 0; i < numRows; i++) {
            data[i] = new int[numCols];
        }
    }
    // Insertion
    void insert(int row, int col, int value) {
        if (row >= 0 && row < numRows && col >= 0 && col < numCols) {
            data[row][col] = value;
        }
    }
    // Deletion
    void remove(int row, int col) {
        if (row >= 0 && row < numRows && col >= 0 && col < numCols) {
            data[row][col] = 0;
        }
    }
    // Search
    bool search(int value) {
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < numCols; j++) {
                if (data[i][j] == value) {
                    return true;
                }
            }
        }
        return false;
    }
    // Traverse
    void traverse() {
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < numCols; j++) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    ~TwoDArray() {
        for (int i = 0; i < numRows; i++) {
            delete[] data[i];
        }
        delete[] data;
    }
};
int main() {
    TwoDArray array(3, 3);

    // Insertion
    array.insert(0, 0, 1);
    array.insert(0, 1, 2);
    array.insert(0, 2, 3);
    array.insert(1, 0, 4);
    array.insert(1, 1, 5);
    array.insert(1, 2, 6);
    array.insert(2, 0, 7);
    array.insert(2, 1, 8);
    array.insert(2, 2, 9);

    // Traverse
    std::cout << "Original Array:" << std::endl;
    array.traverse();
    // Search
    std::cout << "Search for value 5: " << (array.search(5) ? "Found" : "Not Found") << std::endl;
    // Deletion
    array.remove(1, 1);
    std::cout << "Array after removing element at (1, 1):" << std::endl;
    array.traverse();

    return 0;
}