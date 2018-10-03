#include <stdio.h>

int main()
{

int a=0;
int b=0;

for(a=2;a<=100;a++) {
    
    for(b=2; b<=a; b++) {
        if(a % b == 0 && a != b) break;
        
        if(b == a) {
            printf("Primzahl: %d\n", a);
        }
    
    }
    
}

return 0;
}
