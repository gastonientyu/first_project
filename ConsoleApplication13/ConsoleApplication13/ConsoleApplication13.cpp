#include <iostream>
using namespace std;
class circle {
private:
    double radius;
public:
    circle(double rad) {
        radius = rad;
    }
    double getLength() {
        return 2 * 3.14 * radius;
    }
    double getArea() {
        return 3.14 * radius * radius;
    }
};
int main()
{
    setlocale(0, "");
    double radius;
    cout << "Введите радиус: ";
    cin >> radius;
    circle mcircle(radius);
    cout << "\nДлина окружности: " << mcircle.getLength();
    cout << "\nПлощадь окружности: " << mcircle.getArea();
    return 0;
}

