#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
class Employees{
    int EmployeeId;
    char *EmployeeName;
    int EmployeeAge;
    int EmployeeSalary;
    public:
    void inputinfo(int EmployeeId,char* EmployeeName,int EmployeeSalary,int EmployeeAge)
    {
        this->EmployeeId=EmployeeId;
        this->EmployeeSalary=EmployeeSalary;
        this->EmployeeAge=EmployeeAge;
        this->EmployeeName = new char[strlen(EmployeeName)+1];
        strcpy(this->EmployeeName,EmployeeName);
    }
    void displayinfo()
    {
        cout<<EmployeeName<<" "<<EmployeeAge<<" "<<EmployeeSalary<<" "<<EmployeeId<<endl;
    }
};
int main()
{
    int n;
    cin>>n;
    Employees *e =new Employees[n];
    int EmployeeId,EmployeeSalary,EmployeeAge;
    for(int i=0;i<n;i++)
    {
        cin>>EmployeeId>>EmployeeSalary>>EmployeeAge;
        char name[100];
        cin>>name;
        e[i].inputinfo(EmployeeId,name,EmployeeSalary,EmployeeAge);
        e[i].displayinfo();
    }
}

