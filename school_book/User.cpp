#include"school_book.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;
User(string fname, string lname, int id)
{
    this->fname = fname;
    this->lname = lname;
    this->id = id;
}
User() {}
~User() {}