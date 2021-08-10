#pragma once
#include <iostream>
#include <string>
#include <fstream>


using namespace std;

struct studentinfo
{
    string surname;
    string name;
    string patronymic;
};

struct date
{
    int day;
    int month;
    int year;
};

struct universitet
{
    int entryYear;
    string faculty;
    string department;
    string groupNumber;
    string recordBookNumber;
    bool sex;
};

//struct sessiya
//{
//    string subject;
//    int mark;
//};

class StudentData
{
private:
    studentinfo fullname;
    date dateOfBirth;
    universitet univer;
   // sessiya session;
public:
    StudentData();
    StudentData(studentinfo _fullname, date _dateOfBirth, universitet _univer/*, sessiya _session*/);
    ~StudentData();
    
    void Print();
    void DataEntry(studentinfo _fullname, date _dateOfBirth, universitet _univer/*, sessiya _session*/);
    studentinfo GetFullname() {return fullname;}
    date GetDate() {return dateOfBirth;}
    struct universitet GetUniverInfo() {return univer;}
    //struct sessiya GetSessionResults() {return session;}
    
    StudentData& operator = (StudentData sd);
};

//class SessionResults


