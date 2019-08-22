#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ifstream myfile;
  std::string  arquivo[10];
  myfile.open ("lista2.txt");

  for(int i=0; i<10; i++)
  getline(myfile, arquivo[i]);

  myfile.close();

  ofstream myfile2;
  myfile2.open ("lista2.0.txt");

  for(int i=0; i<10; i++)
  myfile2 << arquivo[i] << "\n";
  myfile2.close();

  return 0;
}
