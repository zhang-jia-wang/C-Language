#include <stdio.h> 

 int M = 3; 

int main() 
{ 
    int n, s = 0; 
    scanf("%d", &n); 
    for (int i = 2; i <= n; ++i) 
        s = (s+M)%i; 
    printf("%d\n", s+1); 
    return 0; 
}
