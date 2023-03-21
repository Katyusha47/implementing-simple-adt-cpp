#include <iostream>
#include "clock.h"

using namespace std;

int main() {
    clock c1 = makeClock(3, 10, 2);
    clock c2 = makeClock(4, 29, 9);
    clock c3 = makeClock(24, 99, 30);

    // Menampilkan c1 dan c2
    printClock(c1);
    printClock(c2);

    // Menampilkan jam dan detik dari c1 dan c2
    cout << getHour(c1) << endl;
    cout << getSecond(c2) << endl;

    // Menambahkan c1 dan c2
    c3 = addClock(c1, c2);

    // Menampilkan c3
    printClock(c3);

    // Mengecek apakah c1 sama dengan c2
    cout << boolalpha << isEqual(c1, c2) << endl;

    return 0;
}
