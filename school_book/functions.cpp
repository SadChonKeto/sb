#include"school_book.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;
void View_adm();
{
    ofs<<fname<<" "<<lname<<" "<<id<<endl;
}
void View_tea()
{
    ofs<<fname<<" "<<lname<<" "<<id<<" "<<classes_they_teach<<" "<<subject<<endl;
}
void View_stu()
{
    ofs<<fname<<" "<<lname<<" "<<id<<" "<<classes_they_teach<<" "<<*g<<" "<<*a<<" "<<subject<<endl;//???????????
}
void Add();