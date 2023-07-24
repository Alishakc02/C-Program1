#include<iostream>
using namespace std;
class student{
    private:
    string name;
    double total_marks;
    public:
    void getName(string name)
    {
        name=n;
    }
    void setMarks(double total_marks)
    {
        total_marks=m;
    }
    student(){
       name="Ram";
       total_marks=300;
    }
    student(string name, double total_marks)
    {
       name=n;
       total_marks=m;
    }
     student(string name, double total_marks)
    {
         name=n;
       total_marks=m;
       
    }
     student(string name, double total_marks)
    {
        name=n;
       total_marks=m;
    }
     student(string name, double total_marks)
    {
        name=n;
       total_marks=m;
    }
    string getName()
    {
        return name;
    }
    double gettotal_marks()
    {
        return total_marks;
    }
    double getpercentage()
    {
        return total_marks/5;
    }
    };
int main()
{
 student s;
 cout<<"Following are the marks of studenrs"<<endl;
 cout<<"NAME : "<<s.getName()<<endl;
 cout<<"Total_marks: "<<s.gettotal_marks()<<endl;
 cout<<"Percentage of the student is: "<<s.getpercentage()<<endl;
 student r("tilok",356);
 {
    cout<<"NAME : "<<s.getName()<<endl;
 cout<<"Total_marks: "<<s.gettotal_marks()<<endl;
 cout<<"Percentage of the student is: "<<s.getpercentage()<<endl;

 }
 student t("Shyam",326);
 {
     cout<<"NAME : "<<s.getName()<<endl;
 cout<<"Total_marks: "<<s.gettotal_marks()<<endl;
 cout<<"Percentage of the student is: "<<s.getpercentage()<<endl;
 }
   student u("Gopal",200);
 {
     cout<<"NAME : "<<s.getName()<<endl;
 cout<<"Total_marks: "<<s.gettotal_marks()<<endl;
 cout<<"Percentage of the student is: "<<s.getpercentage()<<endl;
 }
  






    return 0;
}