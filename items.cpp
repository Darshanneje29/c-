#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
	string items[3];
	int price[3];
	for(int i=0;i<3;i++){
		cin>>items[i];
		cin>>price[i];
	}
	cout<<"items"<<" "<<"prices"<<endl;
	int sum=0;
	for(int i=0;i<3;i++){
		cout<<items[i]<<"\t"<<setw(4)<<price[i]<<endl;
		sum+=price[i];
	}
	cout<<"_____________"<<endl;
	cout<<"total :"<<setw(4)<<sum;
	
	return 0;
}
