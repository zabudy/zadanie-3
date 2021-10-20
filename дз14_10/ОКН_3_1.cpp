#include <iostream>
using namespace std;

void rec(int n) {
    if (n == 0) { return; }
    rec(n / 10);
    cout << n % 10 << " ";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите число N= ";
    int N;
    cin >> N;
    rec(N);
    return 0;
}
