#pragma once
#include "data.hpp"

void DataEntry(StudentData* (&d), int& n);
void DataReading(StudentData* (&d), int& n, string filename);
void Print(StudentData* d, int n);
void DataCopy(StudentData* sdn, StudentData* sd, int n);
void DataAdding(StudentData* (&d), int& n);
void DeleteData(StudentData* (&d), int& n);
void DataChange(StudentData* d, int n);
//void Broke(StudentData*);
void Sorting(StudentData* d, int n);
void DataRecording(StudentData* d, int n, string filename);
void chooseAction(int);
