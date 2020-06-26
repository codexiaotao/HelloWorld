#include <cmath>
#include <ctime>
#include <iostream>
#include <limits>
using namespace std;

#define EPSILON 1e-10    //迭代精度         
#define MAX_ITERATIONS INT16_MAX  //最大迭代次数


static double eq(double i) {
    return (pow(i, 3) - (4 * i) - 9);  // 原方程
}


static double eq_der(double i) {
    return ((3 * pow(i, 2)) - 4);  // 方程的一介导数
}


int main(int argv, char **argc) {
    srand(time(nullptr));  // 初始化

    double z, c = rand() % 100, m, n;
    int i;

    cout << "\nInitial approximation: " << c;

    // 开始迭代
    for (i = 0; i < MAX_ITERATIONS; i++) {
        m = eq(c);
        n = eq_der(c);

        z = c - (m / n);
        c = z;

        if (std::abs(m) < EPSILON)  
            break;
    }

    cout << "\n\nRoot: " << z << "\t\tSteps: " << i << endl;
    return 0;
}
