#ifndef PERSON_H
#define PERSON_H


#include <QString>
#include <QObject>

class Person:public QObject
{
    Q_OBJECT
private:
    QString name;
    QString surname;
    QString sex;
    int dayB;
    QString monthB;
    int yearB;
   // QString yearBStr;
    QString place;
    QString photoURL;
  //  QString otherInf;

public:
    Person();
    ~Person(){}

    QString getName() const;
    void setName(const QString &value);

    QString getSurname() const;
    void setSurname(const QString &value);

    QString getSex() const;
    void setSex(const QString &value);

    int getDayB() const;
    void setDayB(int value);

    QString getMonthB() const;
    void setMonthB(const QString &value);

    int getYearB() const;
    void setYearB(int value);

    QString getPlace() const;
    void setPlace(const QString &value);

    QString getPhotoURL() const;
    void setPhotoURL(const QString &value);
/*
    QString getYearBStr() const;
    void setYearBStr(const QString &value);
*//*
    QString getOtherInf() const;
    void setOtherInf(const QString &value);
*/
private slots:
};


#endif // PERSON_H
