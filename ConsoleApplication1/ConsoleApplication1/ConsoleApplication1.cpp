/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    double a, b, c;
    cout << "Введите коэффициенты a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        // Уравнение вырождается в линейное: b*x + c = 0
        if (b == 0) {
            if (c == 0)
                cout << "Бесконечно много решений" << endl;
            else
                cout << "Решений нет" << endl;
        } else {
            cout << "Линейное уравнение, x = " << -c / b << endl;
        }
    } else {
        double D = b * b - 4 * a * c;
        cout << "Дискриминант D = " << D << endl;

        if (D > 0) {
            double x1 = (-b + sqrt(D)) / (2 * a);
            double x2 = (-b - sqrt(D)) / (2 * a);
            cout << "Два корня: x1 = " << x1 << ", x2 = " << x2 << endl;
        }
        else if (D == 0) {
            double x = -b / (2 * a);
            cout << "Один корень: x = " << x << endl;
        }
        else {
            cout << "Действительных корней нет" << endl;
        }
    }

    return 0;
}

*/
/*
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    cout << "Первое целое число: ";
    int a;
    cin >> a;
    cout << "Второе целое число: ";
    int b;
    cin >> b;
    cout << "Третье целое число: ";
    int c;
    cin >> c;
    if (a + b <= c or a + c <= b or b + c <= a)
        cout << "Не треугольник" << endl;
    else if (a == b && b == c)
        cout << "Равносторонний" << endl;
    else if (a == b or a == c or b == c)
        cout << "Равнобедренный" << endl;
    else
        cout << "Разносторонний" << endl;
    return 0;
}
*/
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int mesaq, number;
    cout << "Напишите число месяца от 1 до 12: \n";
    cin >> mesaq;
    cout << "Напишите день месяца: \n";
    cin >> number;

    if (mesaq == 12) {
        cout << "Зима. ";
        if (number < 31) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 1) {
        cout << "Зима. ";
        if (number < 31) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 2) {
        cout << "Зима. ";
        if (number < 28) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 3) {
        cout << "Весна. ";
        if (number < 31) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 4) {
        cout << "Весна. ";
        if (number < 30) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 5) {
        cout << "Весна. ";
        if (number < 31) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 6) {
        cout << "Лето. ";
        if (number < 30) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 7) {
        cout << "Лето. ";
        if (number < 31) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 8) {
        cout << "Лето. ";
        if (number < 31) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 9) {
        cout << "Осень. ";
        if (number < 30) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 10) {
        cout << "Осень. ";
        if (number < 31) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else if (mesaq == 11) {
        cout << "Осень. ";
        if (number < 30) {
            cout << "Это не последний день месяца";
        }
        else {
            cout << "Это последний день месяца";
        }
    }
    else {
        cout << "Некорректный номер месяца!";
    }

    return 0;
}