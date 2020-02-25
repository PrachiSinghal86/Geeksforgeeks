void countSort(char arr[])

{

   int a[27],i,x;

   for(i=0;i<26;i++)

   a[i]=0;

   for(i=0;arr[i]!='\0';i++)

    {

    x=int(arr[i])-97;

    a[x]++;

    }

    int l,m=0;

    l=i;

    for(i=0;i<26;i++)
{
        
while(a[i]>0 &&m<=l)
{

            arr[m]=char(i+97);

            a[i]--;

            m++;

        if(m>l)

        break;

        }

    }
}