#include <iostream>
using namespace std;
int main() 
{
	int n;
	cout<<"enter the number:";
	int sum=0,num;
	for (inti=0;i<n;i++){
		cin>>num;
		sum+=num;
	}
	cout<<"sum of "<<n<<"natural numbers is:"<<sum<<endl;
	return 0;
}
