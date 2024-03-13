#include <iostream>

extern double arrayMin(double* array, int size);

int main(){
    double array[4] = {4,5,1,4};
    std::cout << "min is: " << arrayMin(array, 4) << std::endl;
}