#include <iostream>
#include "employee.h"
#include "Programmer.h"
#include "SoftwareArchitect.h"

int main() {

    cout << "\nEmployee : " << "\n";

    employee employee1("Jimmy Fallon", 12345,"949-555-1234",40,'M',"Comedian",100000, 31,8,2014);
    employee1.print();

    employee employee2;
    //employee2.print();

    employee2.set_name("Stephan Colbert");
    employee2.set_id(12346);
    employee2.set_phone("310-555-5555");
    employee2.set_age(51);
    employee2.set_gender('M');
    employee2.set_title("Comedian");
    employee2.set_salary(70123);
    employee2.set_date(8,5,2015);
    employee2.print();


    cout << "\nProgrammer : " << "\n";
    Programmer programmer1("Jimmy Fallon", 12345,"949-555-1234",40,'M',"Comedian",100000, 31,8,2014, 5432122, "Joe Boss", 4 , true, false);
    programmer1.print();

    Programmer programmer2;
    //programmer2.print();

    programmer2.set_name("Stephan Colbert");
    programmer2.set_id(12346);
    programmer2.set_phone("310-555-5555");
    programmer2.set_age(51);
    programmer2.set_gender('M');
    programmer2.set_title("Comedian");
    programmer2.set_salary(70123);
    programmer2.set_date(8,5,2015);
    programmer2.set_department(6543222);
    programmer2.set_supervisor("Mary Leader");
    programmer2.set_raise(7);
    programmer2.set_cpp(true);
    programmer2.set_java(true);
    programmer2.print();


    cout << "\nSoftware Architect : " << "\n";
    SoftwareArchitect architect1("Jimmy Fallon", 12345,"949-555-1234",40,'M',"Comedian",100000, 31,8,2014, 5432122, "Joe Boss", 4 ,7);
    architect1.print();

    SoftwareArchitect architect2;
    //architect2.print();

    architect2.set_name("Stephan Colbert");
    architect2.set_id(12346);
    architect2.set_phone("310-555-5555");
    architect2.set_age(51);
    architect2.set_gender('M');
    architect2.set_title("Comedian");
    architect2.set_salary(70123);
    architect2.set_date(8,5,2015);
    architect2.set_department(6543222);
    architect2.set_supervisor("Mary Leader");
    architect2.set_raise(7);
    architect2.set_experience(12);
    architect2.print();
    return 0;
}