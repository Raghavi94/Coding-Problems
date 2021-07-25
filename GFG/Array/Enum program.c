#include<stdio.h>
int main()
{
    enum week{Mon,Tues,Wed,Thurs,Fri,Sat,Sun};
    enum week day;
    day=Thurs;
    printf("%d",day);
    return 0;
}
