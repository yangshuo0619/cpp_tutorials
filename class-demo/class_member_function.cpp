#include<iostream>

using namespace std;

class Box
{
	public:
	double length;
	double breadth;
	double height;
	
	double getVolume(void);
	void setLength(double len);
	void setBreadth(double bre);
	void setHeight(double hei);;
};

double Box::getVolume(void)
{
	return length*breadth*height;
};

void Box::setLength(double len)
{
	length=len;
};

void Box::setBreadth(double bre)
{
	breadth=bre;
};

void Box::setHeight(double hei)
{
	height=hei;
};


int main()
{
	Box a;
	Box b;
	double v=0.0;
	
 	a.setLength(6.0);
	a.setBreadth(7.0);
	a.setHeight(5.0);

	b.setLength(12.0);
	b.setBreadth(13.0);
	b.setHeight(10.0);

	v=a.getVolume();
	cout<<"a volume="<<v<<endl;
	 
	v=b.getVolume();
	cout<<"b volume="<<v<<endl;

	return 0;
}
	
