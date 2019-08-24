#include <stdio.h>
#include <stdlib.h>

int main () {

double riyal;
char auth;
double dollar = 3.75;
double result;
double test;
// questions //
while (auth != 'y' && auth != 'n'){
printf("type a number of money [riyal]: ");
scanf("%lf",&riyal);

printf("Alright, You sure ? [y/n]: ");
scanf("%s",&auth);
}
// auth //
if (auth == 'y'){
result = riyal * dollar;
printf("Thanks for Testing my program. <3\n \n \n $%fSR = $%fUS",riyal,result);
}
else if (auth == 'n'){
printf("OK! THANKS FOR TESTING d:");
}

}


