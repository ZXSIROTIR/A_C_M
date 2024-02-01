#include <iostream>
#include <fstream>
#include <sstream>
#include <limits>

using namespace std;

void printMatrix(int** matrix, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size + 1; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void gauss(int** matrix, int size){
}


int main() {
    ifstream inputFile("SLAU.txt");
    if (!inputFile.is_open()) {
        cerr << "eror opening file" << endl;
        return 1;
    }

    int size;
    inputFile >> size;

    int** matrix = new int*[size];
    for (int i = 0; i < size; ++i) {
        matrix[i] = new int[size + 1];
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size + 1; ++j) {
            if (j == size) {
                char delimiter;
                inputFile >> delimiter;
            }
            inputFile >> matrix[i][j];
        }
    }
    inputFile.close();

    cout << "matrix:" << endl;
    printMatrix(matrix, size);

    return 0;
}

