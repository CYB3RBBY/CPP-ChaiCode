#include <bits/stdc++.h>
using namespace std;

int main(){

class Employee {
    public:
    string name;
    int salary;

    void printDetails(){
cout << " The name of our first employee is " << this->name << " and her salary is " << this->salary << endl;
    }
};

Employee Ash;
Ash.name = "Ashwarya";
Ash.salary = 1000000;
Ash.printDetails();
// cout << " The name of our first employee is " << Ash.name << " and her salary is " << Ash.salary << endl;

    return 0;
}