//
// Created by Julio Sandino on 11/6/16.
//

#include "CCourse.h"
#include <iostream>
#include <string>
using namespace std;

//Constructors
//Default constructor
CCourse::CCourse() {
    CRN = "Z000";
    Title = "None";
    units = 0;
    NumberOfStudents = 0;
}

//parameter constructor
CCourse::CCourse(string CRN, string Title, int Units, int NumberOfStudents) {
    this->CRN = CRN;
    this->Title = Title;
    this->units = Units;
    this->NumberOfStudents = NumberOfStudents;
}

//copy constructor
CCourse::CCourse(const CCourse &course) {
    CRN = course.CRN;
    Title = course.Title;
    units = course.units;
    NumberOfStudents = course.NumberOfStudents;
}

//DESTRUCTOR THE DESTROYER OF WORLDS AND EATER OF PIZZAS
CCourse::~CCourse() {}

//accesor functions
int CCourse::getNumberOfStudents() {
    return NumberOfStudents;
}

//mutator functions
void CCourse::setNumberOfStudents(int num) {
    NumberOfStudents = num;
}

//operator overload functions

ostream&operator << (ostream& outs, CCourse& course) {
    outs << course.CRN << "\t\t" << course.Title << "\t\t" << course.units << "\t\t" << course.getNumberOfStudents() << "\n";

    return outs;
}

istream&operator >> (istream& ins, CCourse& course){
    int temp;
    ins >> course.CRN >> course.Title >> course.units >> temp;
    course.setNumberOfStudents(temp);

    return ins;
}
