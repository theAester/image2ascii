#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <array>
#include <cassert>
#include <iostream>
#include <numeric>
#include <tuple>
 
template <typename T, std::size_t ROWS, std::size_t COLS>
class Matrix {
    std::array<T, ROWS * COLS> a;
public:
    Matrix() = default;
    Matrix(array3d const&) = default;

    constexpr T& operator[](std::size_t i, std::size_t j) { // C++23 required
        assert(i < ROWS and j < COLS);
        return a[i * COLS + j];
    }

    constexpr auto& underlying_array() { return a; }

    constexpr std::tuple<std::size_t, std::size_t, std::size_t> dim() const {
        return {ROWS, COLS};
    }
};
#endif
