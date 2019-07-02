#ifndef ORGANISATION_H
#define ORGANISATION_H

#include "QString"
class Unit{
private:
    QString name;
    QString reqtype;
    QString cost;
public:
    void Set_name(QString name);
    void Set_reqtype(QString req);
    void Set_cost(QString cost);
    QString Get_name();
    QString Get_reqtype ();
    QString Get_cost ();
};
class office
{
private:
    QString name;
    Unit units[10];
public:
    void Set_name(QString);
    QString Get_name();
};

class organ
{
private:
    QString ID;
    QString name;
    office offices[10];
public:
    void Set_ID(QString);
    void Set_name(QString);
    QString Get_ID();
    QString Get_name();
};

#endif // ORGANISATION_H
void office::Set_name(QString name)
{
    this->name = name;
}
QString office::Get_name()
{
    return name;
}
