#include "SoftwareArchitect.h"

SoftwareArchitect::SoftwareArchitect() {
}

SoftwareArchitect::SoftwareArchitect(string name, int id, string phone, int age, char gender, string title, int salary, int date,
                       int month, int year, int dept, string super, int raise, int experience) : employee(name,id,phone,age,gender,title,salary,date,month,year) {
    this->department = dept;
    this->supervisor = super;
    this->raise = raise;
    this->experience = experience;
}

int SoftwareArchitect::get_department() {
    return department;
}

void SoftwareArchitect::set_department(int dept) {
    this->department = dept;
}

int SoftwareArchitect::get_raise() {
    return raise;
}

void SoftwareArchitect::set_raise(int raise) {
    this->raise = raise;
}

int SoftwareArchitect::get_experience() {
    return experience;
}

void SoftwareArchitect::set_experience(int experience) {
    this->experience = experience;
}


string SoftwareArchitect::get_supervisor() {
    return supervisor;
}

void SoftwareArchitect::set_supervisor(string super) {
    this->supervisor = super;
}

void SoftwareArchitect::print(){
    employee::print();
    cout << get_name() << "  " << department << "  " << supervisor << "  " << raise << "  " << experience << "\n";
}