#include <iostream>
using namespace std;
 //***************structure******************
 struct student
 {
     int rollno;
     char favchar;
     float salary;
 };
 int main()
 {
     struct student ram;
     struct student sham;
     ram.rollno =10;
     sham.rollno=20;
     ram.favchar ='r';
     sham.favchar ='s';
     ram.salary =1000;
     sham.salary =2000;
     cout <<ram.salary;

 }
