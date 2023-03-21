#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

typedef int hour;
typedef int minute;
typedef int second;

typedef struct {
    hour HH;
    minute MM;
    second SS;
} clock;

bool isValid(hour HH, minute MM, second SS);

clock makeClock(hour HH, minute MM, second SS);

hour getHour(clock c);

minute getMinute(clock c);

second getSecond(clock c);

void setHour(clock *c, hour newHH);

void setMinute(clock *c, minute newMM);

void setSecond(clock *c, second newSS);

bool isEqual(clock c1, clock c2);

clock addClock(clock c1, clock c2);

void printClock(clock c);

#endif // CLOCK_H_INCLUDED
