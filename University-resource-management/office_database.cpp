#include "office_database.h"



void Office_database::Insert(organ row)
{
    QFile file(URL);
    file.open(QIODevice::Append);
    QTextStream out(&file);
    out<<Number_of_row()+100<<";";
    out<<row.Get_name()<<";";
    for(int i=0;i<row.Get_COO();i++)
    {
        out<<row.Get_office(i).Get_name()<<"{";
        for(int j=0;j<row.Get_office(i).Get_COU();j++)
        {
            Unit U= row.Get_office(i).Get_unit(j);
            out<<U.Get_name()<<"[("<<U.Get_reqtype()<<")$"<<U.Get_cost()<<"$],";
        }
        out<<"},";
    }
    out<<";"<<"\r\n";
}
QString Office_database::Select_obj(QString line ,int column)
{
    QString result="";
    int pos_semi_1=0,pos_semi_2=0;//position of semicolons(;).firs one and second.
    for (int i=0;line[i]!="\x0"&&column>=0;i++){
        if(line[i]==';'){//save position of semis.
            pos_semi_1=pos_semi_2;
            pos_semi_2=i;
            column--;
        }
    }

    //for first column.
    if (pos_semi_1==0)
        pos_semi_1--;
    for (int i=pos_semi_1+1;i<pos_semi_2;i++){
        result.append(line[i]);
    }
    return result;
}

