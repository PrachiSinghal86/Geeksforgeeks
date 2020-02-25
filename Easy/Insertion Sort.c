void insert(int arr[], int i)

{
    
int k,m;
    
k=arr[i];
    
m=i-1;
    
while(k<arr[m]&&m>=0)
{

        arr[m+1]=arr[m];

        m--;

}

    arr[m+1]=k;

}
