#include<bits/stdc++.h>
using namespace std;
#include "03.studentClass3.cpp"

int main(){
    student s1;
    s1.setAge(10);
    s1.rollNum = 101;
    s1.display();
    cout<<"Address of  object s1 : "<<&s1<<endl;

    student s2(12);
    s2.rollNum = 102;
    s2.display();
    cout<<"Address of  object s2 : "<<&s2<<endl;

    student * s3 = new student(13, 103);
    s3->display();
    cout<<"Address of  object s3 : "<<s3<<endl;

    return 0;
}