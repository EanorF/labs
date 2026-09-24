#include <iostream>
#include <cmath>

using namespace std;

int main () {
    double x, y, a;
    cout << "Введите x \n";
    cin >> x;
    cout << "Введите y \n";
    cin >> y;
    a = (1+y)*((x + (y/(pow(x,2) + 4)))/(exp(-x-2) + (1/(pow(x,2) + 4))));
    cout << "a = " << a << endl;
    return 0;
}
// Артём Сергеевич
// Вариант 5