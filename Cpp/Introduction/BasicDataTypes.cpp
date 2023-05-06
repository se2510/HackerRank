#include <iostream>
#include <cstdio>
#include <iomanip> // Para el setprecision()
using namespace std;

int main() {
    // Complete the code.
    int n;
    long l;
    char c;
    float f;
    double d;
    
    std::cin >> n;
    std::cin >> l;
    std::cin >> c;
    std::cin >> f;
    std::cin >> d;
    std::cout << n << std::endl;
    std::cout << l << std::endl;
    std::cout << c << std::endl;
    std::cout << std::fixed << std::setprecision(3) << f << std::endl;
    std::cout << std::fixed << std::setprecision(9) << d << std::endl;

    return 0;
}