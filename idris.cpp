#include <iostream>
using namespace std;
class student
{
 private:
    int roll_no;
    string name;   
public:
    //constructor
    student(int r, string n) {
        roll_no = r;
        name = n;
        cout << "Student object created " << name << endl;
    }
    //member function
    void display() {
        cout << "Roll No: " << roll_no << ", Name: " << name << endl;
        cout <<"Name: " << name << endl;
    }
    //Destructor
    ~student() {
        cout << "Student object destroyed " << name << endl;
    }
};
int main() {
    student s1(101, "arun");
    s1.display();
    return 0;
}