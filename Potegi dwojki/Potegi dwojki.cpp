#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int liczba = 1;
    while (liczba < a)
    {
        cout << liczba << endl;
        liczba = liczba * 2;
    }
};