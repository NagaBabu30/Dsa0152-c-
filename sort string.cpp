#include <iostream>
#include <algorithm> 
#include <string>
using namespace std;
int main() {
   string str="hello";
   sort(str.begin(),str.end());
   cout<<"sorting string"<<str<<endl;
   return 0;
   }