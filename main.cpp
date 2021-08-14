#include "realizatsya.hpp"

int choice;
void Menu()
{
    cout<<"1. Ввести данные"<<endl
    <<"2. Вывести данные"<<endl
    <<"3. Изменить данные"<<endl
    <<"4. Добавить данные"<<endl
    <<"5. Удалить данные"<<endl
    ///<<"?. Разбить группу"<<endl
    <<"6. Отсортировать по алфавиту"<<endl
    <<"7. Запись в файл"<<endl
    <<"0. Выход из программы"<<endl
    <<"-----------------------------------"<<endl
    <<"Выберите действие: ";
    cin>>choice;
}

int main()
{
    int action;
    
    int size_=0;
    StudentData* d= new StudentData[size_];
    
    while(choice != 0)
    {
        switch (choice)
        {
            case 1:
                system("clear");
                cout<<"Ввести данные вручную или считать из файла?: ";
                cin>>action;
                system("clear");

                if(action==1)
                {
                    DataEntry(d, size_);
                }
                else
                {
                    DataReading(d, size_, "input.txt");
                }

                system("clear");
                Menu();
                break;
                
            case 2:
                system("clear");
                
                if(size_ != 0)
                    Print(d, size_);
                else
                    cout<<"There is no data "<<endl;
//                system("pause");
                system("clear");
                Menu();
                break;
                
            case 3:
                system("clear");
                
                if(size_ != 0)
                    DataChange(d, size_);
                else
                    cout<<"There is no data "<<endl;
//                system("pause");
                system("clear");
                Menu();
                break;
                
            case 4:
                system("clear");
                
                if(size_ != 0)
                    DataAdding(d, size_);
                else
                    cout<<"There is no data "<<endl;
//                system("pause");
                system("clear");
                Menu();
                break;
                
            case 5:
                system("clear");
                
                if(size_ != 0)
                    DeleteData(d, size_);
                else
                    cout<<"There is no data "<<endl;
//                system("pause");
                system("clear");
                Menu();
                break;
                
            case 6:
                system("clear");
                
                if(size_ != 0)
                    Sorting(d, size_);
                else
                    cout<<"There is no data "<<endl;
//                system("pause");
                system("clear");
                Menu();
                break;
                
            case 7:
                system("clear");
                
                if(size_ != 0)
                    DataRecording(d, size_, "output.txt");
                else
                    cout<<"There is no data "<<endl;
//                system("pause");
                system("clear");
                Menu();
                break;
                
            default:
                cout<<"Error!!!"<<endl;
                system("clear");
                Menu();
                break;
        }
    }
    system("clear");
    cout<<"Done!"<<endl;
//    system("pause");
}

