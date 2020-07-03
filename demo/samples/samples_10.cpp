#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  float a,b,c,x1,x2,dis,real,imag;
  cout<<"input a,b,c";
  cin>>a>>b>>c;

  dis=b*b-4*a*c;

 if (dis>0)
 { 
   x1=(-b+ sqrt(dis))/(2*a);
   x2=(-b- sqrt(dis))/(2*a);
   cout<<"x1= "<<x1<<endl;
   cout<<"x2= "<<x2<<endl;

}

else if(dis=0)
{
  x1=(-b)/(2*a);
  cout<<"x1=x2= "<<x1<<endl;
}

else
{
  real=-b/(2*a);
  imag=sqrt(-dis)/(2*a);
  cout<<"x1= "<<real<<"+"<<imag<<"i"<<endl;
  cout<<"x2= "<<real<<"-"<<imag<<"i"<<endl;
}

return 0;
}

