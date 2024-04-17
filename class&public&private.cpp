#include<iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
    void setDate(int a1, int b1, int c1); //Declaration
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};

void Employee :: setDate(int a1, int b1, int c1){
    a= a1;
    b= b1;
    c= c1;
}

int main(){
    Employee ravi;
    // ravi.a =134; -->This will throw error as a is private
    ravi.d = 34;
    ravi.e = 89;
    ravi.setDate(1,2,4);
    ravi.getData();
    return 0;
}