#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void update(int *a,int *b) {
    int upd_a = *a + *b;
    int upd_b = abs(*a - *b);
    *a = upd_a;
    *b = upd_b;  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
