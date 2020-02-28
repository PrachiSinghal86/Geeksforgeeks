using namespace std;

int main()
 {

	int t,i;

	cin>>t;
	for(i=0;i<t;i++)

	{

	    int N;

	    cin>>N;

	    int a[N],k,j,cnt=0,l=0;

	    for(j=0;j<N;j++)
{

	        cin>>a[j];

	       
	    }

	    for(j=0;j<N-1;j++)
{

	         int c=cnt;

	        for(k=j+1;k<N;k++)
{

	         if((a[j]+a[k])%4==0)

           ++cnt;

	        }	    }

	    cout<<cnt<<"\n";

	}
	return 0;
}