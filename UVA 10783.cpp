//UVA 10783 - Odd Sum

#include <bits/stdc++.h>
using namespace std;

int main(){
	int c,ct=1;
	cin>>c;
	
	while(c--){
		int a,b,s=0;
		cin>>a>>b;
		
		if(a>b){
			int t=a;
			a=b;
			b=t;
		}
		
		for(int i=b;i>=a;i--){
			if(i%2==1){
				s+=i;
			}
		}
		cout<<"Case "<<ct<<": "<<s<<endl;
		ct++;
	}
	
	return 0;
}