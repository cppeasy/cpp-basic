/*
  This file demonstrate how to pass structure as an argument to function.
  While passing the large structure compile will create extra copy of the passed parameter using copy constructor.
  
  Using reference such copying object can be avoided. Please see pass-by-reference.cpp example
*/

#include <iostream>
#include <string>

using namespace std;

//represent Date
struct stDate{
    int dd;
    int mm;
    int yyyy;
};

//represent Department
struct stDepartment{
    int deptId;
    string deptName;
};

//represent Address
struct stAddress{
    string houseDetails;
    string street;
    string city;
    string pincode;
};

//represent Contact
struct stContact{
    string mobile;
    string emailId;
};

//represent Employee
struct stEmployee{
    int empId;
    string empName;
    stDate empDOB;
    stAddress empAddress;
    stContact empContact;
    stDepartment empDepartment;
    string empDesignation;
};


// Print employee details
void printEmployee(stEmployee emp){
    cout<<"Name: "<<emp.empName<<endl;
    cout<<"Date Of Birth: "<<emp.empDOB.dd<<"/"<<emp.empDOB.mm<<"/"<<emp.empDOB.yyyy<<endl;
    cout<<"Address: "<<emp.empAddress.houseDetails<<","<<endl;
    cout<<"         "<<emp.empAddress.city<<","<<endl;
    cout<<"         "<<emp.empAddress.pincode<<endl;
}

int main()
{
 
    // Create employee object and assign details   
    stEmployee jhon;
    jhon.empId = 1001;
    jhon.empName = "jhon";
    jhon.empDOB.dd = 20;
    jhon.empDOB.mm = 04;
    jhon.empDOB.yyyy = 1984;
    jhon.empAddress.houseDetails = "1st Main, Avenue Road";
    jhon.empAddress.street = "Bannerghatta Road";
    jhon.empAddress.city = "Bangalore";
    jhon.empAddress.pincode = "560076";
   
    //call method to print employee details
    printEmployee(jhon);

    return 0;
}
