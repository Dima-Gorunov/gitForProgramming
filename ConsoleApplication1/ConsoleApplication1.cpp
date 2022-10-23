//file is changed

#include <iostream>
#include <cassert> 
#include <math.h> 

float resistace(float R1, float R2, float R3)
{
    return sqrt((R1 * R2 * R3) / (R1 * R2 + R2 * R3 + R3 * R1));  //поиск сопротив-я
}

int main()
{

    std::cout << resistace(2, 4, 1);
        return 0;
}