#include <iostream>
using namespace std;


class Employee{
private:
    string name;
public:
    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Employee::name = name;
    }

public:
    int getIdNumber() const {
        return idNumber;
    }

    void setIdNumber(int idNumber) {
        Employee::idNumber = idNumber;
    }


private:
    int idNumber;
    string department;
public:
    const string &getDepartment() const {
        return department;
    }

    void setDepartment(const string &department) {
        Employee::department = department;
    }

private:
    string position;
public:
    const string &getPosition() const {
        return position;
    }

    void setPosition(const string &position) {
        Employee::position = position;
    }

public:
    Employee(string n, int id, string dep, string pos){
        name = n;
        idNumber = id;
        department = dep;
        position = pos;
    }
    Employee(string n, int id){
        name = n;
        idNumber = id;
        department = "";
        position = "";
    }
    Employee(){
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }
    void printResult(){
        std::cout<<"name:"<<name <<"  id:"<<idNumber<<"  "
                                                      "position:"<<position<< "  department:"<<department<<endl;
    }




};
int main() {
    Employee employee1("Susan Meyers",47899,"Accounting","Vice president");
    Employee employee2("Mark Jones",39119,"IT","Programmer");
    Employee employee3("Joy Rogers",81774,"Manufacturing","Engineer");
    employee1.printResult();
    employee2.printResult();
    employee3.printResult();

    return 0;
}