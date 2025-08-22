/*Name : Dhakshayini Usha R
PRN : 24070123039
ENTC A2
*/
#include <iostream>
using namespace std; 

class cuboid{
    private : 
    int height = 10 ;
    int width = 4 ;
    int length = 6 ;
    
    public :
    int volume(){
        int v; 
        v = height*width*length;
        return v;
    }
};

int main() {
    // Defining the object c1
    cuboid c1;
    // Calling the public volume() [class method], thus the private attributes [height,width,length] can be accessed
    int volume = c1.volume();
    cout<<"Volume: "<<volume<<endl;
    return 0;
}

/*
Sample Output : 
Volume: 240
*/






