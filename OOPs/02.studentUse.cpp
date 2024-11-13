#include<bits/stdc++.h>
using namespace std;
#include "02.studentClass2.cpp"

int main(){
    student s1;

    s1.rollNum = 10;

    s1.display();

    student s2;

    s2.setAge(12);
    s2.rollNum = 22;

    s2.display();
    
    return 0;
}