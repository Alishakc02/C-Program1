#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    double marks;
    public:
    void setName(string n)
    {
        name=n;
    }
    void setAge(int a)
    {
        age=a;
    }
   void setMarks(double m)
    {
        marks=m;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    double getMarks()
    {
        return marks;
    }

};
int main()
{
    student s1;
    s1.setName("ALISHA");
    s1.setAge(28);
    s1.setMarks(400);
    cout<<"Name :"<<s1.getName()<<endl;
    cout<<"age :"<<s1.getAge()<<endl;
    cout<<"marks :"<<s1.getMarks()<<endl;
   






    return 0;
}