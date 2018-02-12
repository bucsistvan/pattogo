#include <iostream>
#include<math.h>
#include<stdio.h>
#include <unistd.h>
#include<stdlib.h>
using namespace std;
//szélesség és hosszúság felének megadása, mivel a program például a keret szélességét -w-től w-ig állítja be
int w=30;
int h=5;
//azt a sort ìrja ki ahol az objektum van
void jobbal(int x)
{
    printf("|");
    for(int i=0;i<w+x;i++){
        printf(" ");
    }
    printf("0");
    for(int i=w+x+1;i<2*w+1;i++){
        printf(" ");
    }
    printf("|\n");
}
//üres sorokat ír ki
void sor()
{
    printf("|");
    for(int i=0;i<=2*w;i++){
        printf(" ");
    }
    printf("|\n");
}
int main()
{
	printf("valami\n");
	int k=1;
	int l=1;
	int y=0;
	int x=0;
	for(;;){
        //a "k" előjele akkor változik, ha az "x" eléri a "w" értékét vagy annak (-1)szeresét
        //a "l" előjele akkor változik, ha az "y" eléri a "h" értékét vagy annak (-1)szeresét
        k*=pow(-1,int(x/w));
        x+=k;
        l*=pow(-1,int(y/h));
        y+=l;
        printf(" ");
        for(int j=0;j<=2*w;j++){
            printf("_");
        }
        printf("\n");
        for(int j=0;j<h+y;j++){
            sor();
        }
        jobbal(x);
        for(int j=h+y;j<2*h;j++){
            sor();
        }
        printf("|");
        for(int j=0;j<=2*w;j++){
            printf("_");
        }
        printf("|\n");
        usleep(100000);
        system("CLS");
	}
    return 0;
}
