#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;
class User
{
public: string fname, lname;
    int id;
ofstream ofs;
ifstream ifs;
User(string fname, string lname, int id);
User();
~User();
void Add();// კლასის გარე ფუნქციად ან friend ფუნქციად
void View_adm();
void View_tea();
void View_stu();
};
class Assignment
{
public: string homework, subject;
    bool done_or_not;
Assignment(string homework, string subject, bool done_or_not);
Assignment();
~Assignment();
void Print_info();
/*{
    cout<<subject<<" "<<homework<<" "<<done_or_not;
}*/
};
class Grades // ამოსაშლელია 
{
public: string subject;
    vector<int> marks;
Grades(string subject, vector<int> marks);
Grades();
~Grades();
void Print_info();
/*{
    cout<<subject<<" ";
    for (int i=0; i<marks.size(); i++)
    {
        cout<<marks[i]<<" ";
    }
}*/
};
class Student:public User
{
public: User u;
    Grade g;
    Assignment a;
Student(User u, Grade g, Assignment a);
Student();
~Student();
};
class Teacher:public user
{
public: User u;
    vector<int> classes_they_teach;
    string subject;
Teacher(User u, vector<int> classes_they_teach, string subject);
Teacher();
~Teacher();
};