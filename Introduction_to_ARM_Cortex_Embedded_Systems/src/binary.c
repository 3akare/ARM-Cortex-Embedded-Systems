#include "main.h"

/**
 * Converts an integer to its binary representation based on the size of the integer.
 * The size of the binary string is determined by the size of the variable (in bytes).
 * 
 * @param n The integer to be converted to binary.
 * @param size The size (in bits) of the binary string.
 * @return A pointer to a string representing the binary representation of the integer.
 *         The string will be null-terminated.
 */

char* p_binary_sn(int n, int size){
    int exp = size - 1;
    char* res = (char*)malloc(exp + 2); 

    if (res == NULL) return NULL;  

    res[exp + 1] = '\0';
    while(exp >= 0){
        if (n >= pow(2, exp)) {
            res[(size - 1) - exp] = '1';
            n -= (int)pow(2, exp);
        } else res[(size - 1) - exp] = '0';
        exp--;
    }
    return res;
}

