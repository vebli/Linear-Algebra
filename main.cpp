#include "include/Linear_Algebra.hpp"

int main(){
    lina::Matrix<float, 3, 3> M = { 
        {0, 1, 2},
        {3, 4 ,5},
        {6, 7, 8}
    };
    M.print();
    return 0;
} 
    
