#include <iostream>
#include <algorithm> 
using namespace std;
int main() {
	int arr[]={2,4,1,3};
	sort(begin(arr).end(arr));
	cout<<"sorted array";
	for(int num:arr){
		cout<num<<" "<<endl;
	}
	return 0;
}