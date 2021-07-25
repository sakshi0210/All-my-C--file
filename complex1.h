#include <iostream>
using namespace std;
class complex
{ int i,r;
  public:
  	void getdata( int x, int y){
  		i=x;
  		r=y;
	  }
    void display()
	{
		cout<<i<<" "<<r<<endl;
	 }
 };

