#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main () {
int v[100],i;
srand(time(NULL) );
for (i=0;i<100;i++) {
v[i]=rand();
}
for (i=0;i<100;i++) {
    printf ("\n %d",v[i]);

}
}
