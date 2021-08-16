#include<iostream>
using namespace std;

int sum_of_primes(int x)
{
    int i,isPrime=1;
    for(i=2;i<=x/2;++i)
    {
        if(x%i==0)
        {
            isPrime=0;
            break;
        }
    }
    return isPrime;

}


int main()
{
   int n;
   cout<<"Enter n : ";
   cin>>n;
   int flag=0;

   for(int i=2;i<=n/2;i++)
   {

       if(sum_of_primes(i)==1)
       {
           if(sum_of_primes(n-i)==1)
           {
               cout<<n<< " can be expressed as sum of "<<i<< " and " <<n-i<<endl;
               flag=1;
           }
       }

   }
   if(flag==0)
   {
       cout<<n<<" can't be expressed as sum of two prime nos"<<endl;

   }

    return 0;
}
