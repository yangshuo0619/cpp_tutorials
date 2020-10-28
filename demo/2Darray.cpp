#include<iostream>
using namespace std;

int main()
{
   int **p;
   int i,j;

   p=new int *[4];
   for(i=0;i<4;i++){
   p[i]=new int [8];
   }

     //p[1][1]=1;
   for(i=0;i<4;i++){
       for(j=0;j<8;j++){
           p[i][j]=j*i;
       }
   }

//print

   for (i=0;i<4;i++){
       for(j=0;j<8;j++)
       {
          if(j==0) cout<<endl;
          cout<<p[i][j]<<"\t";
       }
   }

 
  

 
   for(i=0;i<4;i++){
       delete [] p[i];
   }

   delete [] p;
   return 0;

}

