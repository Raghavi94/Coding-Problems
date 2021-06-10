#include <iostream>

using namespace std;

int main()
{
    int s,e,count=0;
    cout<<"Enter start value : ";
    cin>>s;
    cout<<"Enter end value : ";
    cin>>e;
    for(int i=s;i<=e;i++)
    {
        if(i%3==0 && i%5==0)
        {
            count=count+1;
        }
    }
    cout<<"There are "<<count<<" nos that are divisible by both 3 and 5";

    return 0;
}
