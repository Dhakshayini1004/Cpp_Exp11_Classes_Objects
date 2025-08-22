/*Name : Dhakshayini Usha R
PRN : 24070123039
ENTC A2
*/
#include <iostream>
using namespace std; 

class cuboid{
    public : //Access Specifier, if made private we get error - attribute is declared private here
    int height = 10 ;
    int width = 4 ;
    int length = 6 ;

};

int main() {
    // Defining the object c1
    cuboid c1;
    //Defining volume
    int vol = c1.height*c1.width*c1.length;
    //Accessing the attributes of class
    cout<<"Height of cuboid :"<<c1.height<<endl;
    cout<<"Width of cuboid :"<<c1.width<<endl;
    cout<<"Length of cube :"<<c1.length<<endl;
    cout<<"Volume :"<<vol<<endl;
    
    return 0;
}

/*
Sample Output:
Height of cuboid :10
Width of cuboid :4
Length of cube :6
Volume :240
*/








