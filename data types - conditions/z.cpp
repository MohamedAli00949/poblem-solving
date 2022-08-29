#include<bits/stdc++.h>

using namespace std;

int main()
{ 

	double a,b,c,d;
	cin>>a>>b>>c>>d;
	double res1 = b*log(a);
	double res2 = d*log(c);
	if(res1 > res2){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
}