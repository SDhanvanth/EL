#include<iostream>
using namespace std;
class patient{
public:
    int patid,dob;
    string patname, medhis;
    patient(){
        cout<<"Enter patient id: ";
        cin>>patid;
        cout<<"Enter patient name: ";
        cin>>patname;
        cout<<"Enter dob: ";
        cin>>dob;
        cout<<"Enter medical history: ";
        cin>>medhis;
    }
    virtual void patient_info(){
        cout<<"DETAILS:"<<endl;
        cout<<"Patient id: "<<patid<<endl;
        cout<<"Patient name: "<<patname<<endl;
        cout<<"DOB: "<<dob<<endl;
        cout<<"Medical history: "<<medhis<<endl;
    }
};

class outpatient:public patient{
    int appdate;
    string docname, perscmed;
public:
    outpatient(){
        cout<<"Enter appointment date: ";
        cin>>appdate;
        cout<<"Enter Doctor Name: ";
        cin>>docname;
        cout<<"Enter Prescribed medicine: ";
        cin>>perscmed;
    }
    void patient_info(){
        cout<<"Appointment date: ";
        cout<<appdate<<endl;
        cout<<"Doctor name: ";
        cout<<docname<<endl;
        cout<<"Prescribed medicine: ";
        cout<<perscmed<<endl;
    }
};
class inpatient:public patient{
    int add_date, ward_num;
    string sur_proc;
public:
    inpatient(){

        cout<<"Enter admission date: ";
        cin>>add_date;
        cout<<"Enter ward number: ";
        cin>>ward_num;
        cout<<"Enter surgical procedure: ";
        cin>>sur_proc;
    }
    void patient_info(){
        cout<<"Admission date: ";
        cout<<add_date<<endl;
        cout<<"Ward number: ";
        cout<<ward_num<<endl;
        cout<<"Surgical procedure: ";
        cout<<sur_proc<<endl;
    }
};
int main(){
    patient *p;
    inpatient ip;
    p=&ip;
    p->patient_info();
    outpatient op;
    p=&op;
    p->patient_info();
    return 0;
}
