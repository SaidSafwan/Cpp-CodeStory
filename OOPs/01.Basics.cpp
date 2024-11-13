#include<iostream>
using namespace std;
#include "00.studentClass.cpp"

int main()

{
    // creating object statically
    student s1;

    student s2, s3, s4;

    s1.age = 10;
    s1.rollNum = 56;

    cout<<s1.age<<" "<<s1.rollNum<<endl;

    // creating object dynamically

    student * s5 = new student;

    // (*s5).age = 20;
    // OR
    s5 -> age = 20;
    s5 -> rollNum = 59;

    cout<< s5->age << " " << s5->rollNum<<endl; 
    
}