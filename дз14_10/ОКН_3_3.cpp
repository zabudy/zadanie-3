#include <iostream>
using namespace std;
void som(int a, int b)
{
    if (a == 1)
        return;
    for (;; b++)
        if (a % b == 0)
        {
            cout << b << "  ";
            som(a / b, b);
            return;
        }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите число N= ";
    int a;
    cin >> a;
    som(a, 2);
    return 0;
}
