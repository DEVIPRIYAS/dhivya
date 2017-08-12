#include <iostream>
#include <string>
using namespace std;
char chr;
int main()
{

int m;
cout<<"Enter a number from 1-12.";
if (m==1)
    cout<<"January";
else if (m==2)
    cout<< "February";
else if (m==3)
    cout<<"March";
else if (m==4)
    cout<<"April";
else if (m==5)
    cout<<"May";
else if (m==6)
    cout<<"June";
else if (m==7)
    cout<<"July";
else if (m==8)
    cout<<"August";
else if (m==9)
    cout<<"September";
else if (m==10)
    cout<<"October";
else if (m==11)
    cout<<"November";
else if (m==12)
    cout<<"December";
else if (m>12)
    cout<<"Sorry I need a number from 1-12."<<endl;          
else if(m<=12) 
    cout<< "The month is "<<m;
cin>>chr;
return 0;
}
