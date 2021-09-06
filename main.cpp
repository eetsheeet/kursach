#include "realizatsya.hpp"

void Menu()
{
    cout
    <<"1. Ввести данные"<<endl
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
    
    int choice;
    
    cin>>choice;
    
    chooseAction(choice);
}

void chooseAction(int choice)
{
    int action;
    
    int size_=0;
    StudentData* d= new StudentData[size_];
    
        switch (choice)
        {
            case 1:

                cout<<"Ввести данные вручную или считать из файла?: ";
                cin>>action;

                if(action==1)
                    DataEntry(d, size_);
                else
                    DataReading(d, size_, "/Users/alexey/Desktop/kursach/input.txt");

                Menu();
                break;
                
            case 2:
                
                if(size_ != 0)
                    Print(d, size_);
                else
                    cout<<"There is no data "<<endl;

                Menu();
                break;
                
            case 3:
                
                if(size_ != 0)
                    DataChange(d, size_);
                else
                    cout<<"There is no data "<<endl;
                
                Menu();
                break;
                
            case 4:
                
                if(size_ != 0)
                    DataAdding(d, size_);
                else
                    cout<<"There is no data "<<endl;

                Menu();
                break;
                
            case 5:
                
                if(size_ != 0)
                    DeleteData(d, size_);
                else
                    cout<<"There is no data "<<endl;
    
                Menu();
                break;
                
            case 6:
                
                if(size_ != 0)
                    Sorting(d, size_);
                else
                    cout<<"There is no data "<<endl;

                Menu();
                break;
                
            case 7:
                
                if(size_ != 0)
                    DataRecording(d, size_, "output.txt");
                else
                    cout<<"There is no data "<<endl;

                Menu();
                break;
                
            default:
                if (choice > 7){
                    cout<<"Error!!!"<<endl;
                    Menu();}
                else
                exit(0);
        }
}

int main()
{
    Menu();
    cout<<"Done!"<<endl;
}
