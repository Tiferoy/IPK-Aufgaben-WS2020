#include <iostream>
#include <cmath>

double calculate(double a, double b, double c) {
    double x1;
    double x2;
    double u;
    u = std::pow(b,2) - 4*a*c;
    if (u < 0 or a == 0 and b == 0){
        std::cout << "Error" << std::endl;
    }
    else{
        x1 = (-b+sqrt(u))/2;
        x2 = (-b-sqrt(u))/2;
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    }  
}

int main(int argc, char** argv)
{
    double a;
    std::cout << "a = " << std::flush;
    std::cin >> a;
    double b;
    std::cout << "b = " << std::flush;
    std::cin >> b;
    double c;
    std::cout << "c = " << std::flush;
    std::cin >> c;
    std::cout << calculate(a,b,c) << std::endl;
    return 0;
}
