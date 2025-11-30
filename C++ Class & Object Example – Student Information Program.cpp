#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll ;
    Student(string name,int roll)
    {
        this->name=name;
        this->roll=roll;
    }
    void hello()
    {
        cout<< "Hello from " << name <<" "<< roll <<endl;

    }
    
};

int main()
{
    Student siyam("Siyam mia",23);
    siyam.hello();
    Student walid("Walid Hasan",24);
    walid.hello();
   
    return 0;
}
