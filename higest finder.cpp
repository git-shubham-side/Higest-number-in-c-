#include <iostream>
using namespace std;
int main() {
    int num,higest,i;
    
    cout<<"Enter 5 numbers:";
    cin>>num;
    
    higest=num;
    
    for(i=1;i<5;i++)
    {
     cin>>num;
     
     if(num > higest)
     {
       higest=num;
     }
     
    }
    cout<<"Higest is :"<<higest;

    return 0;
}