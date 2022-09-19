#include<bits/stdc++.h>
using namespace std;

int main(){
	int amount;
	cin>>amount;
	int x,y,z,k,A1,A2,A3,A4;
	x=amount/100;
	cout<<"100 Notes="<<x<<endl;
	A1=amount-x*100;
	y=A1/50;
	cout<<"50 Notes="<<y<<endl;
	A2=A1-y*50;
	z=A2/20;
	cout<<"20 Notes="<<z<<endl;
	A3=A2-z*20;
	k=A3/10;
	cout<<"10 Notes="<<k<<endl;
	A4=A3-k*10;
	
	
	


return 0;
}

