/**
    Zadani:
        Doplnte funkci countdown, aby program vytisknul na prvnich pet radku: 
        543210
        543210
        543210

        Zdrojovy kod prekladejte s parametry -pedantic -Wextra -Wall -std=c99 (viz prvni cviceni).
**/

#include <stdio.h>

/**
*   Prints numbers from maxNumber to zero.
*   Prints x lines specified by repeat parameter.
*
*   @param maxNumber highest number to be printed
*   @param repeat number of lines printed
**/
void countdown(int maxNumber, int repeat);

int main() {
    countdown(5, 3);
    return 0;
}