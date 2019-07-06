#ifndef REQUEST_H
#define REQUEST_H



#include "QString"
#include "QFile"


class content
{
private:
    QString req_type;


public:
    QString C_generate(int start_month,int start_day,int end_month,int end_day);
    QString S_generate(int month,int day,int S_code);
    QString H_generate(int month,int day,int start_hour,int end_hour);

};


class request:public content
{
private:

    QString Req_ID;
    QString App_ID;
    QString Organ_name;
    QString Office_name;
    QString Unit_name;
    QString type;
    QString time_in_use;
    QString level;
    QString req_content;//ramz
    QString ET_ID;
    QString log;
public:

    request();

    void Set_Req_ID(QString ID);
    void Set_App_ID(QString app_id);
    void Set_Organ_name(QString name);
    void Set_Office_name(QString name);
    void Set_Unit_name(QString  name);
    void Set_type(QString type);
    void Set_time_in_use(QString time);
    void Set_content();
    void Set_ET_ID(QString ID);
    void Add_log(QString ET_ID , QString level);

    QString Get_Req_ID();
    QString Get_App_ID();
    QString Get_Organ_name();
    QString Get_Office_name();
    QString Get_Unit_name();
    QString Get_type();
    QString Get_time_in_use();

    QString Get_ET_ID();

};

#endif // REQUEST_H