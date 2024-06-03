#include "matrix.h"
#include <iostream>
std::istream& operator>>(std::istream& in, Matrix& matrix) {
    for (int i = 0; i < matrix.data.size(); ++i) {
        for (int j = 0; j < matrix.data[i].size(); ++j) {
            in >> matrix.data[i][j];
        }
    }
    return in;
}

std::ostream& operator<<(std::ostream& out, const Matrix& matrix) {
    for (int i = 0; i < matrix.data.size(); ++i) {
        for (int j = 0; j < matrix.data[i].size(); ++j) {
            out << matrix.data[i][j] << " ";
        }
        out << std::endl;
    }
    return out;
}

Matrix Matrix::operator*(const Matrix& other) {
    int rows1 = data.size();
    int cols1 = data[0].size();
    int cols2 = other.data[0].size();

    Matrix result(rows1, cols2);

    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            for (int k = 0; k < cols1; ++k) {
                result.data[i][j] += data[i][k] * other.data[k][j];
            }
        }
    }

    return result;
}