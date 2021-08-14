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

public:
    StudentData();
    StudentData(studentinfo _fullname, date _dateOfBirth, universitet _univer);
    ~StudentData();
    
    void Print();
    void DataEntry(studentinfo _fullname, date _dateOfBirth, universitet _univer);
    studentinfo GetFullname() {return fullname;}
    date GetDate() {return dateOfBirth;}
    universitet GetUniverInfo() {return univer;}
 
    
    StudentData& operator = (StudentData sd);
};

//class SessionResults
//{
//private:
//    sessiya session;
//public:
//    SessionResults();
//    SessionResults(sessiya _session);
//    ~SessionResults();
//
//    void Print_s();
//    void ResultsEntry(sessiya _session);
//    sessiya GetSession(){return session;}
//};
