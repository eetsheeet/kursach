#include "realizatsya.hpp"


void DataEntry(StudentData* (&d), int& n)
{
    studentinfo fullname;
    date dateOfBirth;
    universitet univer;
    
    cout<<"Введите размер массива: ";
    cin>>n;
    
    d = new StudentData[n];
    
    for (int i=0;i<n;i++)
    {
        cout<<"Введите ФИО: ";
        cin>>fullname.surname>>fullname.name>>fullname.patronymic;
        
        cout<<"Введите дату рождения: ";
        cin>>dateOfBirth.day>>dateOfBirth.month>>dateOfBirth.year;
        
        cout<<"Введите год поступления: ";
        cin>>univer.entryYear;
        
        cout<<"Введите факультет: ";
        cin>>univer.faculty;
        
        cout<<"Введите кафедру: ";
        cin>>univer.department;
        
        cout<<"Введите номер группы: ";
        cin>>univer.groupNumber;
        
        cout<<"Введите номер зачетной книжки: ";
        cin>>univer.recordBookNumber;
        
        cout<<"Введите пол: ";
        cin>>univer.sex;
        
        d[i].DataEntry(fullname, dateOfBirth, univer);
    }
}

void DataReading(StudentData* (&d), int& n, string filename)
{
    ifstream reading(filename);
    
    if (reading){
        studentinfo fullname;
        date dateOfBirth;
        universitet univer;
        
        reading>>n;
        
        d=new StudentData[n];
        
        for (int i=0;i<n;i++)
        {
            reading>>fullname.surname>>fullname.name>>fullname.patronymic;
            
            reading>>dateOfBirth.day>>dateOfBirth.month>>dateOfBirth.year;
            
            reading>>univer.entryYear;
            
            reading>>univer.faculty;
            
            reading>>univer.department;
            
            reading>>univer.groupNumber;
            
            reading>>univer.recordBookNumber;
            
            reading>>univer.sex;
            
            d[i].DataEntry(fullname, dateOfBirth, univer);

        }
        cout<<"Done!";
    }
    else
        cout<<"Error!!!";
    
    reading.close();
}

void DataChange(StudentData* d, int n)
{
    studentinfo fullname;
    date dateOfBirth;
    universitet univer;
    int h;
    
    cout<<"Введите номер студента: ";
    cin>>h;
    h--;
    
    if(h>=0 && h<n)
    {
        cout<<"Введите ФИО: ";
        cin>>fullname.surname>>fullname.name>>fullname.patronymic;
        
        cout<<"Введите дату рождения: ";
        cin>>dateOfBirth.day>>dateOfBirth.month>>dateOfBirth.year;
        
        cout<<"Введите год поступления: ";
        cin>>univer.entryYear;
        
        cout<<"Введите факультет: ";
        cin>>univer.faculty;
        
        cout<<"Введите кафедру: ";
        cin>>univer.department;
        
        cout<<"Введите номер группы: ";
        cin>>univer.groupNumber;
        
        cout<<"Введите номер зачетной книжки: ";
        cin>>univer.recordBookNumber;
        
        d[h].DataEntry(fullname, dateOfBirth, univer);
    }
    else
        cout<<"Error!!!";
}

void Print(StudentData* d, int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<"Студент "<<i+1<<endl;
        
        d[i].Print();
    }
}

void DataCopy(StudentData* sdn, StudentData* sd, int n)
{
    for (int i=0;i<n;i++)
    sdn[i]=sd[i];
}

void DataAdding(StudentData* (&d), int& n)
{
    studentinfo fullname;
    date dateOfBirth;
    universitet univer;
    StudentData* buf=new StudentData[n];
    int size=n, nsize=n++;
    
    DataCopy(d, buf, nsize);
    
    cout<<"Введите ФИО: ";
    cin>>fullname.surname>>fullname.name>>fullname.patronymic;
    
    cout<<"Введите дату рождения: ";
    cin>>dateOfBirth.day>>dateOfBirth.month>>dateOfBirth.year;
    
    cout<<"Введите год поступления: ";
    cin>>univer.entryYear;
    
    cout<<"Введите факультет: ";
    cin>>univer.faculty;
    
    cout<<"Введите кафедру: ";
    cin>>univer.department;
    
    cout<<"Введите номер группы: ";
    cin>>univer.groupNumber;
    
    cout<<"Введите номер зачетной книжки: ";
    cin>>univer.recordBookNumber;
    
    cout<<"Введите пол: ";
    cin>>univer.sex;
    
    d[size].DataEntry(fullname, dateOfBirth, univer);
    
    cout<<"Done!";
    
    delete[] buf;
}

void DeleteData(StudentData* (&d), int& n)
{
    int l;
    StudentData* buf=new StudentData[l];
    
    cout<<"Введите номер студента: ";
    cin>>l;
    l--;
    
    if (l>=0 && l<n)
    {
        DataCopy(buf, d, n);
        int g=0;
        n--;
        
        d=new StudentData[n];
    }
}
