#include<iostream>
using namespace std;

class employee{
    private:
    int eid;
    string name;

    public:
    employee(int e , string n){
        eid =e;
        name=n;
    }
    int getemployeeid(){return eid ;};
    string getname(){return name ;};
};

class Fulltime : public employee{
    private :
    int salary ;
    public:
    Fulltime(int e , string n, int s):employee(e,n){
        salary=s;
    };
    int getsalary(){return salary;
    };
};

class Partime:public employee{
    private:
    int wages;
    public:
    Partime(int e , string n , int w):employee(e,n){
        wages=w;
    };
    int getwages(){return wages;};
};

int main (){
    Fulltime E1(123,"Yash",7978);
    Partime E2(35,"On",5615);
    
    cout<<"The name : "<<E1.getname()<<"Salary is :"<<E1.getsalary()<<endl;
}