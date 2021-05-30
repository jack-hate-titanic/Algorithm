#include <iostream>
using namespace std;


int InitFib(int number){
  if(number<=1){
    return number;
  }
  return InitFib(number-2)+InitFib(number-1);
};

int main(){
  int result=InitFib(5);
  cout<<result<<endl;
  return 0;
};