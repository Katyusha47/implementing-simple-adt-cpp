#include <iostream>
#include "clock.h"

using namespace std;

bool isValid(hour HH, minute MM, second SS) {
    return (HH >= 0 && HH <= 23 && MM >= 0 && MM <= 59 && SS >= 0 && SS <= 59);
}

clock makeClock(hour HH, minute MM, second SS) {
    clock c;
    c.HH = HH;
    c.MM = MM;
    c.SS = SS;
    return c;
}

hour getHour(clock c) {
    return c.HH;
}

minute getMinute(clock c) {
    return c.MM;
}

second getSecond(clock c) {
    return c.SS;
}

void setHour(clock *c, hour newHH) {
    c->HH = newHH;
}

void setMinute(clock *c, minute newMM) {
    c->MM = newMM;
}

void setSecond(clock *c, second newSS) {
    c->SS = newSS;
}

bool isEqual(clock c1, clock c2) {
    return (c1.HH == c2.HH && c1.MM == c2.MM && c1.SS == c2.SS);
}

clock addClock(clock c1, clock c2) {
    int s = c1.SS + c2.SS;
    int m = c1.MM + c2.MM + s / 60;
    int h = c1.HH + c2.HH + m / 60;
    clock c = makeClock(h % 24, m % 60, s % 60);
    return c;
}

void printClock(clock c) {
    cout << c.HH << ":" << c.MM << ":" << c.SS << endl;
}
