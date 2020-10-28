#include<iostream>
#include<ctime>

using namespace std;

int main()
{

  time_t now=time(0); //时间戳

  char* dt=ctime(&now);
  
  cout<<"local time: "<<now<<endl;
  cout<<"local time: "<<dt<<endl;

  tm *gmtm=gmtime(&now);
  dt=asctime(gmtm);

  cout<<"gmtm year: "<<gmtm->tm_year<<endl;
  cout<<"gmtm month: "<<(*gmtm).tm_mon<<endl;

  cout<<"utc time: "<<dt<<endl;

}


  
