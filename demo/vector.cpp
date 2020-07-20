#include<iostream>
#include<vector>

using namespace std;

int main()
{
      //init 
      vector<int> vec;
      vec = {11,3,4};
           
      vector<int> vec1;
      vector<int> vec2(vec1);
      vector<int> vec3 = vec2;
      vector<int> vec4 = {1,3,4,5};
      vector<int> vec5{1,2,3,4};
      vector<int> vec6(10);//默认值初始化，将包含10个元素，每个元素进行缺省的值初始化，int型则初始化为0;
     

    //element count: size()  
      cout << "vector vec size=  " << vec.size() << endl;

    //add element 
      int i;
      for(i = 0;i < 5; i++){
        vec.push_back(i);
      }
      cout<<"extended vector size= "<< vec.size() << endl;

      //output element in vec  
      //use for circulation
      for(i = 0;i < 8; i++){
        cout<<"value of vec [ "<< i << " ]= "<< vec[i] << endl;
      }

      //iterator
      vector<int>::iterator v = vec.begin(); 
      while(v != vec.end()){
         cout << "value of v= "<< *v << endl;
         v++;
      } 

      //use for auto 
      for(auto i : vec)
      cout << i << endl;
    
      return 0;

}

//make: g++ vector.cpp -std=c++11  -o vector.out 