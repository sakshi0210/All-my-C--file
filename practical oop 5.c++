#include <iostream>
#include "practical5.h"
int main()
{	cout<<"SAKSHI VISPUTE 9074 ENTC 2 \n";
	complex c1,c2,c3;
 	c1.getdata(2,3);
 	cout<<"1st number is = ";
 	c1.display();
 	c2.getdata(4,5);
 	cout<<"2nd number is = ";
 	c2.display();
 	c3=c1+c2;
 	cout<<"Sum of both numbers is = ";
 	c3.display();
 	c3=c1-c2;
 	cout<<"(1st number)-(2nd number) = ";
 	c3.display();
 	return(0);
 	
}
