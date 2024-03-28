#include <iostream>
using namespace std;

class Auto {
public:
    string marka;
    string model;
    int year;
    string color;
    int probeg;
    Auto(string Marka, string Model, int Year, string Color, int Probeg) {
        this->marka = Marka;
        this->model = Model;
        this->year = Year;
        this->color = Color;
        this->probeg = Probeg;
    }
    void info() {
        cout << "Марка: " << marka << endl;
        cout << "Модель: " << model << endl;
        cout << "Год выпуска: " << year << endl;
        cout << "Цвет: " << color << endl;
        cout << "Пробег: " << probeg << endl;
    }
    void plprobeg() {
        cout << "Пробег увеличен с " << probeg << " на 10 км. \nИтоговый пробег: " << probeg + 10 << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "RUS");
    Auto a("", "", 1010, "", 100);
    a.info();
    a.plprobeg();
}
