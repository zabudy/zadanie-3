#include <iostream>
using namespace std;

int dva(int a, int s, int k) {
    s = s + ((a % 10) * pow(2,k));
    k += 1;
    a /= 10;
    if (a > 0) {
        return dva(a, s, k);
    }
    else { cout << s; }
   
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите а=";
    int a;
    cin >> a;
    dva(a, 0, 0);
}
