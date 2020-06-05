#include<iostream>
using namespace std;
void Toh(int n,char source,char helper,char distin){
	if(n==0){
		return;
	}
	Toh(n-1,source,distin,helper);
	cout<<"Taking disk "<<n<<" from "<<source<<" To "<<distin<<endl;
	Toh(n-1,helper,source,distin);
}
int main(){
	int n;
	cout<<"enter the no. of disk ";
	cin>>n;
	Toh(n,'A','B','C');
	return 0;
}
