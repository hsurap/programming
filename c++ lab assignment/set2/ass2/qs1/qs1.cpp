#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class student{
    char* Name;
    int RollNo;
    int Degree;
    char Hostel;
    float CurrentCGPA;
    public:
    void addDetails(char* Name)
    {
        this->Name=new char[strlen(Name)+1];
        strcpy(this->Name,Name);
    }
    void updatedetails(int RollNo,int Degree,char Hostel)
    {
        this->RollNo=RollNo;
        this->Degree=Degree;
        this->Hostel=Hostel;
    }
    void updatecgpa(float CurrentCGPA)
    {
        this->CurrentCGPA=CurrentCGPA;
    }
    void displaydetail()
    {
        cout<<Name<<" "<<RollNo<<" "<<Degree<<" "<<Hostel<<" "<<CurrentCGPA<<endl;
    }
};
int main() {
	student s;
	s.addDetails("Parush");
	s.updatedetails(10,2,'M');
	s.updatecgpa(22.23);
	s.displaydetail();
}

