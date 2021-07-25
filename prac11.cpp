
#include<iostream>
using namespace std;
class B
{public:
	virtual void s()
	{cout<<" In Base \n";
	}

};

class D: public B
{public:
void s(){
cout<<"In Derived \n";
}
};


int main(void)
{
cout<<"Sakshi Vispute"<<endl;
cout<<"Roll no:-9074"<<endl;
D d;
B*b= &d;
b->s();
return 0;}
