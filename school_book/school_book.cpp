#include"school_book.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;
/*User(string fname, string lname, int id)
{
    this->fname = fname;
    this->lname = lname;
    this->id = id;
}
User() {}
~User() {}*/
Assignment(string homework, string subject, bool done_or_not)
{
    this->homework = homework;
    this->subject = subject;
    this->done_or_not = done_or_not;
}
Assignment() {}
~Assignment() {}
Grades(string subject, vector<int> marks)
{
    this->subject = subject;
    this->marks = marks;
}
Grades() {}
~Grades() {}
Student(User u, Grade g, Assignment a)
{
    this->u = u;
    this->g = g;
    this->a = a;
}
Student() {}
~Student() {}
Teacher(User u, vector<int> classes_they_teach, string subject)
{
    this->u = u;
    this->classes_they_teach = classes_they_teach;
    this->subject = subject;
}
Teacher() {}
~Teacher() {}