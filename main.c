# include <stdio.h>
void main ()
{ int tmp;
printf("Input temperature:");
scanf("%d",&tmp);
if(tmp<0)
printf("Freezing weather.\n");
else if(tmp<10)
printf("Very cold weather.\n");
else if(tmp<20)
printf("Cold weather.\n");
else if(tmp<30)
printf("Normal in tempearature.\n");
else if(tmp<40)
printf("It's hot.\n");
else
printf("It's very hot.\n");
}