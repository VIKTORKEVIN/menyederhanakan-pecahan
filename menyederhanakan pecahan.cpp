#include<stdio.h>

using namespace std;
void pecahan ();
main()
{
    pecahan ();
}
void pecahan ()
{
    int a,b,l,t;
    printf("menyederhanakan bilangan pecahan\n\n");
    printf("masukkan pembilang : ");
    scanf("%d",&a);
    printf("masukkan penyebut : ");
    scanf("%d",&b);
    t=a/b;
    l=a%b;
    if(a%b==0)
        printf("bilangan (%d/%d)\n disederhanakan menjadi %d",a,b,t);
    else if (a%b !=0)
        printf("bilangan (%d/d%)\n disederhanakan menjadi (%d/%d)",a,b,l,b);
}
