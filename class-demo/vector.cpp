#include<iostream>
#include<vector>

using namespace std;

int main()
{
      vector<int> vec;
      
      cout << "vector vec size=  " << vec.size() << endl;

      int i;
      for(i = 0;i < 5; i++){
        vec.push_back(i);
      }

      cout<<"extended vector size= "<< vec.size() << endl;

      //for circulation
      for(i = 0;i < 5;i++){
        cout<<"value of vec [ "<< i << " ]= "<< vec[i] << endl;
      }

      //iterator
      vector<int>::iterator v = vec.begin(); 
      while(v != vec.end()){
         cout << "value of v= "<< *v << endl;
         v++;
      } 

      return 0;

}
