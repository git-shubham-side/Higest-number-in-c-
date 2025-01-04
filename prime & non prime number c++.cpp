#include <iostream>
using namespace std;
int main() {
    int num,i,p;
    
    //Taking Input from user
    cout<<"enter a number:\t";
    cin>>num;
    
    //Initilizing p=1, if any condition didn't gets true it will print Prime Number:
    p=1;
    
    for(i=2;i<num;i++)//starting The Loop from the starting point & run until the number is given. means if the num 7 is given then the loop will find the divider number until 7 or the loop will run until the 7 times to find its factor.
    {
        if(num%2==0)  
        {
            p=0;//if the number findes any factor between the 1 to itself the value of p will be 0.
        }
    }
    
    if(p==1)//if the number do not finder any factor between the 1 to itself 
    {
        cout<<"Prime Number"<<endl; 
    }
    else{
        cout<<"Non prime Number";
    }
    return 0;
}
