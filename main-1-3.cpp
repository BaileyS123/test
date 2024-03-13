#include <iostream>

extern double* duplicateArray(double* array, int size);

int main(){
    double array[4] = {1,5,1,4};
    double* array2 = duplicateArray(array, 4);
    for (int i = 0; i < 4; i++){
        std::cout << array2[i] << std::endl;
    }
}