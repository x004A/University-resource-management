#ifndef OFFICE_DATABASE_H
#define OFFICE_DATABASE_H

#include "QString"
#include "organisation.h"
#include "QFile"
#include "QString"
#include "QDebug"
#include "ctime"
#include "wwf.h"



class Office_database:public WWF {


public:

    //Office_database();
    //void Set_URL (QString);
    void Insert(organ row);//give a line and add to the end of file.
    void Delete(QString ID);//disactives an id
    void Update(organ UTD);//change data in filevoid
    void show_Office_database();// just show data base.
    void show_column(QString col);//show a certain coumn.

    QString Select_obj(QString line ,int column);//return a column from a certain row
    QString Select_obj(int row ,int column);//return a column from a certain row
<<<<<<< HEAD
    QString Select_office();
    QString Select_Unit(QString office , int position);
=======
    QString Select_office(QString organ,int column);
    QString Select_Unit();
>>>>>>> 04960cc180eb601d26f5641437e08fc629ccaf19

    bool Search_ID(QString component);//find and return id of things that you search.
    QString Search_UserName(QString component);//find and return id of things that you search.
    QString Search_Name(QString component);//find and return id of things that you search.
    QString Search_Family(QString component);//find and return id of things that you search.
    QString Search_Office_ID(QString component);//find and return id of things that you search.


    int get_counter();//counter for id
    int get_total();//number of lines
    organ extarct_data(QString line);
};

#endif // OFFICE_DATABASE_H
