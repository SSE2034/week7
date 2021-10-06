#include "time.h"
#include <iostream>
#include <cassert>

//Constructor
Time::Time(unsigned h, unsigned m, unsigned s, bool is_negative)
{
    hour = h;
    minute = m;
    second = s;

    assert( (m >= 0) && (m < 60) && "Mintue must be between 0 ~ 59!");
    assert( (s >= 0) && (s < 60) && "Second must be between 0 ~ 59!" );

    sign = is_negative;
}

//Convert HH:MM:SS -> total seconds
long long Time::get_total_second() {
    long long time = hour * 60 * 60 + minute * 60 + second;

    if (sign) return -time;
    else return time;
}

//Convert total seconds -> Time Class
Time second_to_time(long long sec)
{
    long long abs;
    unsigned h, m, s;

    if (sec < 0) abs = -1 * sec;
    else abs = sec;

    s = abs % 60;
    abs = abs / 60;

    m = abs % 60;
    h = abs / 60;

    Time result = Time(h, m, s, (sec < 0));

    return result;
}

void Time::print()
{
    using namespace std;

    if (sign) cout << "- ";

    cout << hour << ":" << minute << ":" << second << endl;
}

Time Time::operator + (Time rhs) {
    //TODO : Time lhs + Time rhs
}

Time Time::operator - (Time rhs) {
    //TODO : Time lhs - Time rhs
}

void Time::operator += (Time rhs) {
    //TODO : *this += rhs;
}

void Time::operator -= (Time rhs) {
    //TODO : *this - rhs;
}

bool Time::operator == (Time rhs) {
    //TODO : if (lhs == rhs) return true; else return false;
}

bool Time::operator > (Time rhs) {
    //TODO : if (lns > rhs) return true; else return false;
}

bool Time::operator < (Time rhs) {
    //TODO : if (lhs < rhs) return true; else return false;
}

bool Time::operator >= (Time rhs) {
    //TODO : if (lhs >= rhs) return true; else return false;
}

bool Time::operator <= (Time rhs) {
    //TODO : if (lsh <= rhs) return true; else return false;
}

Time Time::operator + (long long rhs) {
    //TODO : return Time lhs + rhs[second]
}

Time operator -(Time lhs, long long rhs)
{
    //TODO : return lhs - rhs[s]
}

Time operator -(long long lhs, Time rhs)
{
    //TODO : return rhs[s] - lhs
}
