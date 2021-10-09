#include "matrix.h"

MATRIX::MATRIX(void)
{
    n_row = 0;
    n_col = 0;
    data_array.clear();
}

MATRIX::MATRIX(size_t row_size, size_t col_size)
{
    n_row = row_size;
    n_col = col_size;

    data_array.resize(row_size * col_size, 0);
}

MATRIX::MATRIX(std::vector<int> data, size_t row_size, size_t col_size)
{
    size_t array_size = data.size();

    n_row = row_size;
    n_col = col_size;

    data_array.resize(array_size);

    for (size_t i=0; i<array_size; i++) data_array.at(i) = data.at(i);
}

std::string MATRIX::to_string() const
{
    std::string result = "{";

    for (size_t row = 0; row < n_row; row++) {

        for (size_t col = 0; col < n_col; col ++) {

            if (col == 0) result += "{";

            result += std::to_string(data_array.at(row * n_col + col));

            if (col != (n_col - 1)) result += ", ";
        }

        result += "}";

        if (row != (n_row-1)) result += ", ";
        else result += "}";
    }

    return result;
}

size_t MATRIX::get_size() const {return n_row * n_col;}

std::vector <size_t> MATRIX::get_dimension() const
{
    std::vector <size_t> dimension(2, 0);

    dimension.at(0) = n_row;
    dimension.at(1) = n_col;

    return dimension;
}

