#include<iostream>

using namespace std;

int main()
{

    int i,j,k;
    int ***p;

    p = new int **[2];
    for (i=0;i<2;i++)
    {
        p[i]=new int *[3];
        for(j=0;j<3;j++)
           p[i][j]=new int [4];
    }

for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        for(k=0;k<4;k++)
        {
            p[i][j][k]=i*j*k;
            cout<<p[i][j][k]<<" ";
        }
    cout<<endl;
    }
cout<<endl;
}

for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        delete [] p[i][j];
    }
}

for(i=0;i<2;i++)
{
    delete [] p[i];
}

delete [] p;

return 0;
}


