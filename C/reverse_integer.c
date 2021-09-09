/*

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.

*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int reverse(int x);

int main(int argc, char *argv[]) {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Reversed digits value: %d\n", reverse(num));

    return 0;
}

int reverse(int x) {
    int tmp = x, nums = 0, sol = 0;
    bool pos = true;

    while(tmp != 0) {
        tmp /= 10;
        nums++;
    }

    if(x < 0) pos = false;

    for(int i = 0; i < nums; i++) {
        sol += ((int)(x/pow(10,i))%10) * pow(10,nums-i-1);
    }

    if(pos) return sol;
    else return sol * -1;

}