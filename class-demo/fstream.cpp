#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char data[100];
  
    //create file and write data to file
    ofstream outfile;
    outfile.open("a.md");

    cout << "writing to the file" << endl;
    cout << "enter your name:  " << endl;

    cin.getline(data,100);
    outfile << data << endl;
    
    cout << "enter your age: ";
    cin >> data;
    cin.ignore();

    outfile << data << endl;
    outfile.close();

 
    ifstream infile;
    infile.open("a.md");

    cout << "reading from the file" << endl;
    infile >> data;
    cout << data << endl;


    infile >> data;
    cout << data << endl;
 
    infile.close();
    return 0;
}

    
