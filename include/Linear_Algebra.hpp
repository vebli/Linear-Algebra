#include <initializer_list>
#include <iostream>
#include <array>


namespace lina {

    template<typename T, size_t rows, size_t cols>

    class Matrix {
    public:
        Matrix(std::initializer_list<std::initializer_list<T>> value) { 
            int i = 0;
            for(auto row : value) {
                for(auto element : row){
                    data[i++] = element;
                }
            }
        }

        Matrix(T value = T{}){
            data.fill(value);
        }
        T& operator()(size_t row, size_t col) {
            return data[row * cols + col]; // Calculate index
        }
        void print(){
            for(int i =0; i < rows; i++){
                for(int j = 0; j < cols; j++){
                    std::cout << (*this)(i,j) << " ";  
                }
                std::cout << "\n";
            }
        }
        std::array<T, rows * cols> data;
    };

}
