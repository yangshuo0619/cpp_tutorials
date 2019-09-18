#include<iostream>

using namespace std;

int main()
{
  char c;
  int isLowercaseVowel,isUppercaseVowel;
  
  cout<<isLowercaseVowel<<" "<<isUppercaseVowel<<endl;
 
  cout<<"input a char: "<<endl;
  cin>>c;

  isLowercaseVowel=(c=='a' || c=='e'||c=='i'||c=='o'||c=='u');
  isUppercaseVowel=(c=='A' || c=='E' || c=='I' || c== 'O' || c== 'U'); 

  if(isLowercaseVowel || isUppercaseVowel)
    cout<<c<<" yuanyin"<<endl;
  else
    cout<<c<<" fuyin"<<endl;

  return 0;

}
