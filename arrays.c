#include <stdio.h>
int main() { 
int m1, m2, m3, m4, m5;
int total=0;
int passed=1;
int mark;
int i;

for (i=0; i<5; i++) {
switch(i) {

case0; 
printf("Enter marks1: ");
scanf("%d", m1);
mark=m1;
break;

case 1;
printf("Enter marks2: ");
scanf("%d", &m2);
mark=m2;
break;

case2; 
printf("Enter marks2: ");
scanf("%d", m2);
mark=m2;
break;

case 3;
printf("Enter marks3: ");
scanf("%d", &m3);
mark=m3;
break;

case4; 
printf("Enter marks4: ");
scanf("%d", m4);
mark=m4;
break;

case 5;
printf("Enter marks5: ");
scanf("%d", &m5);
mark=m5;
break;

}


if (mark<0|| mark>100) {
printf ("invalid input \n");
i--;
continue
}

total+=mark;

if (mark<40) {
passed 0;
}
}

double average=total/5;

printf("%f" average):

if (passed) {
printf("Passed\n");
}

else {
printf("failed\n");
}

return 0;
} 

