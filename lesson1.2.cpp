#include <iostream>
using namespace std;
int main(){
	float g=10.81;
	float v;
	float t;
for (t=0;t<=15;t+=0.5){
	v=g*t;
	cout<<v<<'\t'<<t<<endl;
}
return 0;
}