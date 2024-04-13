#include <stdio.h>

void update(int *a,int *b) {
    int aHat = *a + *b;
    int bHat;
    if (a > b)
        bHat = *a - *b; 
    else
    {
        bHat = (*b - *a);
        if(bHat < 0)
            bHat = -bHat;
    }
    *a = aHat; 
    *b = bHat;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
