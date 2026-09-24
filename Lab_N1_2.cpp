#include <iostream>
#include <cmath>
#include <complex>
#include <iomanip>

using namespace std;

int main () {
    complex<double> z1(-4,-5);
    complex<double> z2(8.2,0);
    complex<double> z3(4.1,3.8);
    complex<double> z4(-7.12,0);
    complex<double> res = z1 + (z2*(z3+z4))/(z3+z4+z2);
    cout << "Результат: " << res << endl;
    double res_real = real(res);
    cout << "Вещественная часть: " << res_real << endl;
    double res_imag = imag(res);
    cout << "Мнимая часть: " << res_imag << endl;
    double res_abs = abs(res);
    cout << "Модуль комплексного числа: " << res_abs << endl;
    double res_arg_rad = arg(res); // радианы
    cout << "Аргумент комлексного числа (в радианах): " << res_arg_rad << endl;
    double res_arg_grad = arg(res) * 180 / M_PI; // градусы
    cout << "Аргумент комлексного числа (в градусах): " << res_arg_grad << "°" << endl;
    return 0;
}
// Артём Сергеевич
// Вариант 5