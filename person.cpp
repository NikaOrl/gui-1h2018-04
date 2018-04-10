#include "person.h"

QString Person::getName() const
{
    return name;
}

void Person::setName(const QString &value)
{
    name = value;
}

QString Person::getSurname() const
{
    return surname;
}

void Person::setSurname(const QString &value)
{
    surname = value;
}

QString Person::getSex() const
{
    return sex;
}

void Person::setSex(const QString &value)
{
    sex = value;
}

int Person::getDayB() const
{
    return dayB;
}

void Person::setDayB(int value)
{
    dayB = value;
}

QString Person::getMonthB() const
{
    return monthB;
}

void Person::setMonthB(const QString &value)
{
    monthB = value;
}

int Person::getYearB() const
{
    return yearB;
}

void Person::setYearB(int value)
{
    yearB = value;
}

QString Person::getPlace() const
{
    return place;
}

void Person::setPlace(const QString &value)
{
    place = value;
}

QString Person::getPhotoURL() const
{
    return photoURL;
}

void Person::setPhotoURL(const QString &value)
{
    photoURL = value;
}
/*
QString Person::getYearBStr() const
{
    return yearBStr;
}

void Person::setYearBStr(const QString &value)
{
    yearBStr = value;
}*/

/*
QString Person::getOtherInf() const
{
    return otherInf;
}

void Person::setOtherInf(const QString &value)
{
    otherInf = value;
}*/

Person::Person(){
    name = "";
    surname = "";
    sex = "";
    dayB = 0;
    monthB = "";
    yearB = 0;
    place = "";
    photoURL = "";
    //otherInf = "";
}
