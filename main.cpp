#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

int main() {
  int test_1, test_2, test_3; 
  double average;
  string filename; 
  ifstream fin;

  cout << "Enter Filename: ";
  getline(cin, filename);

  fin.open(filename); 
  fin >> test_1;
  fin >> test_2;
  fin >> test_3;
  average= (test_1+test_2+test_3)/3.0;
  fin.close();
  cout << "The Average test score is: " <<average<< ". " <<endl;
return 0;
}  