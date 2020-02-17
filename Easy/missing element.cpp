#include <iostream>

using namespace std;


int main()
 {
	
    int t,i;
	
    long long int n,j;
	
    cin>>t;
	
    for(i=0;i<t;i++)
	
    {
	   
        cin>>n;
	    
	  
        long long int a[n],s=0;
	    
        for(j=0;j<n-1;j++)
	
           {
	        
               cin>>a[j];
	       
               s=s+a[j];

   	    }
	  
        cout<<(n*(n+1)/2)-s<<"\n";
	
    }
	
return 0;
}