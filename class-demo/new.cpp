#include<iostream>

using namespace std;

int main()
{
  double* pvalue = NULL;
  pvalue = new double;
  
  double* qvalue = NULL;
  qvalue = new double;


  *pvalue =29494.99;
  cout<<"address of pvalue: "<<pvalue<<endl;
  cout<<"value of pvalue: "<<*pvalue<<endl;

  cout<<"address of qvalue: "<<qvalue<<endl;
  cout<<"size of double: "<<sizeof(double)<<endl;
  
  delete pvalue;
  delete qvalue;

  return 0;

}

