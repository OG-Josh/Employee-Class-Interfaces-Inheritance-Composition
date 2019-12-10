#ifndef SOFTWAREARCHITECT_H
#define SOFTWAREARCHITECT_H

#include "employee.h"

class SoftwareArchitect : public employee
{
public:
    SoftwareArchitect();
    SoftwareArchitect(string name, int id, string phone, int age, char gender,string title, int salary, int date,int month, int year, int dept, string super, int raise, int experience);
    int get_department();
    void set_department(int dept);
    string get_supervisor();
    void set_supervisor(string supervisor);
    int get_raise();
    void set_raise(int raise);
    int get_experience();
    void set_experience(int experience);
    void print();
private:
    int department;
    string supervisor;
    int raise;
    int experience;
};
#endif //SOFTWAREARCHITECT_H
