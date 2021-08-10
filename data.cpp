#include "data.hpp"

StudentData::StudentData()
{
    fullname.surname="";
    fullname.name="";
    fullname.patronymic="";
    
    dateOfBirth.day=0;
    dateOfBirth.month=0;
    dateOfBirth.year=0;
    
    univer.entryYear=0;
    univer.faculty="";
    univer.department="";
    univer.groupNumber="";
    univer.recordBookNumber="";
    univer.sex=1;
    
//    session.subject="";
//    session.mark=0;
}

StudentData::StudentData(studentinfo _fullname, date _dateOfBirth, universitet _univer/*, sessiya _session*/)
{
    fullname.surname=_fullname.surname;
    fullname.name=_fullname.name;
    fullname.patronymic=_fullname.patronymic;
    
    dateOfBirth.day=_dateOfBirth.day;
    dateOfBirth.month=_dateOfBirth.month;
    dateOfBirth.year=_dateOfBirth.year;
    
    univer.entryYear=_univer.entryYear;
    univer.faculty=_univer.faculty;
    univer.department=_univer.department;
    univer.groupNumber=_univer.groupNumber;
    univer.recordBookNumber=_univer.recordBookNumber;
    univer.sex=_univer.sex;
    
//    session.subject=_session.subject;
//    session.mark=_session.mark;
}

StudentData::~StudentData()
{
}

void StudentData:: Print()
{
    cout<<"ФИО: "<<fullname.surname<<fullname.name<<fullname.patronymic<<endl;
    cout<<"Дата рождения: "<<dateOfBirth.day<<"-"<<dateOfBirth.month<<"-"<<dateOfBirth.year<<endl;
    cout<<"Год поступления: "<<univer.entryYear<<endl;
    cout<<"Факультет: "<<univer.faculty<<endl;
    cout<<"Кафедра: "<<univer.department<<endl;
    cout<<"Группа: "<<univer.groupNumber<<endl;
    cout<<"Номер зачетной книжки"<<univer.recordBookNumber<<endl;
    cout<<"Пол: "<<univer.sex<<endl;
    //cout<<"Предмет: "<<session.subject<<endl;
    //cout<<"Оценка: "<<session.mark<<endl;
}

void StudentData:: DataEntry(studentinfo _fullname, date _dateOfBirth, universitet _univer/*, sessiya _session*/)
{
    fullname.surname=_fullname.surname;
    fullname.name=_fullname.name;
    fullname.patronymic=_fullname.patronymic;
    
    dateOfBirth.day=_dateOfBirth.day;
    dateOfBirth.month=_dateOfBirth.month;
    dateOfBirth.year=_dateOfBirth.year;
    
    univer.entryYear=_univer.entryYear;
    univer.faculty=_univer.faculty;
    univer.department=_univer.department;
    univer.groupNumber=_univer.groupNumber;
    univer.recordBookNumber=_univer.recordBookNumber;
    univer.sex=_univer.sex;
    
//    session.subject=_session.subject;
//    session.mark=_session.mark;
}

StudentData& StudentData::operator=(StudentData sd)
{
    this->fullname.surname=sd.fullname.surname;
    this->fullname.name=sd.fullname.name;
    this->fullname.patronymic=sd.fullname.patronymic;
    
    this->dateOfBirth.day=sd.dateOfBirth.day;
    this-> dateOfBirth.month=sd.dateOfBirth.month;
    this->dateOfBirth.year=sd.dateOfBirth.year;
    
    this->univer.entryYear=sd.univer.entryYear;
    this-> univer.faculty=sd.univer.faculty;
    this->univer.department=sd.univer.department;
    this->univer.groupNumber=sd.univer.groupNumber;
    this->univer.recordBookNumber=sd.univer.recordBookNumber;
    this-> univer.sex=sd.univer.sex;
    
//    this->session.subject=sd.session.subject;
//    this->session.mark=sd.session.mark;

    return *this;
}
