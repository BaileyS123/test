#include <iostream>

extern void modifyArray(double* array, int size, double value);

int main(){
    double array[4] = {1,5,1,4};
    modifyArray(array, 4, 3);
    for (int i = 0; i < 4; i++){
        std::cout << array[i] << std::endl;
    }
}