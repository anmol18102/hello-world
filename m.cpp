#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	   // for(int i=0;i<x/2;i++){
	   //     if(pow(2,i)==x){
	   //         cout<<1<<endl;
	   //     }
	   // }
	    int p=0;
	    for(int i=x/2;i>=0;i--){
	        if(pow(2,i)<=x){
	            
	            x=x-pow(2,i);
	            p++;
	            if(x==0)
	            break;
	        }
	    }
	    cout<<p-1<<endl;
	    
	}
	
	return 0;
}
