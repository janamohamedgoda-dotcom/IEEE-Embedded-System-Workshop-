#include <stdio.h>

int toggleBit(int num, int pos) {
    return num ^ (1 << pos);
}

int main() {
    int num = 20;      
    int pos = 3;
    
    printf("Original: %d\n", num);         
    
    int result = toggleBit(num, pos);      
    printf("After toggling bit %d: %d\n", pos, result);  
    
    return 0;
}