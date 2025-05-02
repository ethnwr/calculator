#include <iostream>
#include "calculate.h"


using namespace std;

int Calculate::count = 0;




int main() {
    setlocale(LC_ALL, "ru");
    cout << "Площадь треугольника: " << Calculate::triangle_area(10, 5) << endl;
    cout << "Площадь прямоугольника: " << Calculate::rectangle_area(4, 6) << endl;
    cout << "Площадь квадрата: " << Calculate::square_area(3) << endl;
    cout << "Площадь ромба: " << Calculate::rhombus_area(5, 7) << endl;

    cout << "Количество подсчетов площади: " << Calculate::get_count() << endl;
}
