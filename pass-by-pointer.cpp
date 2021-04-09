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


// Print employee details using pass by value which creates extra copy of stEmployee
void printEmployeePassByValue(stEmployee emp){
    cout<<"Name: "<<emp.empName<<endl;
    cout<<"Date Of Birth: "<<emp.empDOB.dd<<"/"<<emp.empDOB.mm<<"/"<<emp.empDOB.yyyy<<endl;
    cout<<"Address: "<<emp.empAddress.houseDetails<<","<<endl;
    cout<<"         "<<emp.empAddress.city<<","<<endl;
    cout<<"         "<<emp.empAddress.pincode<<endl;
}


// Print employee details using pass by reference which avoid to extra copy of stEmployee
void printEmployeePassByReference(stEmployee *ptrEmp){
    cout<<"Name: "<<ptrEmp->empName<<endl;
    cout<<"Date Of Birth: "<<ptrEmp->empDOB.dd<<"/"<<ptrEmp->empDOB.mm<<"/"<<ptrEmp->empDOB.yyyy<<endl;
    cout<<"Address: "<<ptrEmp->empAddress.houseDetails<<","<<endl;
    cout<<"         "<<ptrEmp->empAddress.city<<","<<endl;
    cout<<"         "<<ptrEmp->empAddress.pincode<<endl;
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
    printEmployeePassByValue(jhon);
    
    // Create employee object and assign details   
    stEmployee *ptrMatt = new stEmployee();
    ptrMatt->empId = 1002;
    ptrMatt->empName = "Matt";
    ptrMatt->empDOB.dd = 25;
    ptrMatt->empDOB.mm = 06;
    ptrMatt->empDOB.yyyy = 1980;
    ptrMatt->empAddress.houseDetails = "3B-201, Kalpavruksha";
    ptrMatt->empAddress.street = "Bannerghatta Road";
    ptrMatt->empAddress.city = "Bangalore";
    ptrMatt->empAddress.pincode = "560076";
    
    //call method to print employee details
    printEmployeePassByReference(ptrMatt);
    
    // We can also pass object address to pointer parameter
    printEmployeePassByReference(&jhon);

    return 0;
}
