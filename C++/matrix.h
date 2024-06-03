#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int>> data;
public:
    Matrix() {}

    Matrix(int rows, int cols) : data(rows, std::vector<int>(cols, 0)) {}

    friend std::istream& operator>>(std::istream& in, Matrix& matrix);
    friend std::ostream& operator<<(std::ostream& out, const Matrix& matrix);
    Matrix operator*(const Matrix& other);
};

#endif