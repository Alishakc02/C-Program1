// A C++ program to display rectangle using asterik
#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    void setdimension()
        {
            length=4;
       
            breadth=3;
        }
       


    
    
    void displayrectangle()
    {
      int  i,j;
       for(i=0;i<breadth;i++)
       {
        for(j=0;j<length;j++)
        {
            cout << " * ";
        }
        cout << endl;

       }
    }
    void increasedimension(){
        length++;
        breadth++;

 }
};

int main()
{
    Rectangle r1;
    
    r1.setdimension();

    r1.displayrectangle();
    cout<<"__________________________________"<<endl;

    r1.increasedimension();
    r1.displayrectangle();
    cout<<"_____________________________"<<endl;
    r1.increasedimension();
    r1.displayrectangle();
    return 0;



    }

