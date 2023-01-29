#include <iostream>
using namespace std;

int main() {
  int numOne;
  int numTwo;
  cout <<"Please enter number one.";
  cin >> numOne;
  cout << "Please enter number two";
  cin >> numTwo;
  if(numOne>numTwo){
    cout << "Number one "<<numOne<<" is larger";
  }else{
    cout << "Number two "<<numTwo<<" is larger";
  }
  return 0;
}