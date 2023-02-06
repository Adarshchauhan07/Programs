#include <iostream>
using namespace std;

int main() {
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==1){
				cout<<n-j+1<<" ";
			}
			else if(j==1){
				cout<<n-i+1<<" ";
			}
			else if(i+j==n+1){
				cout<<1<<" ";
			}
			else{
				cout<<"  ";
			}
		}
		for(int j=n+1;j<2*n;j++){
			if(i==1){
				cout<<j-n+1<<" ";
			}
			else if(j==2*n-1){
				cout<<n-i+1<<" ";
			}
			else if(j-i==n-1){
				cout<<1<<" ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;	
	}
	for(int i=n+1;i<2*n;i++){
		for(int j=1;j<=n;j++){
			if(j==1){
				cout<<i-n+1<<" ";
			}
			else if(i==2*n-1){
				cout<<n-j+1<<" ";
			}
			else if(i-j==n-1){
				cout<<1<<" ";
			}
			else{
				cout<<"  ";
			}
		}
		for(int j=n+1;j<2*n;j++){
			if(i+j==3*n-1){
				cout<<1<<" ";
			}
			else if(j==2*n-1){
				cout<<i-n+1<<" ";
			}
			else if(i==2*n-1){
				cout<<j-n+1<<" ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
