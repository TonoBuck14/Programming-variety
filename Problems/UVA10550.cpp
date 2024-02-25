#include <iostream>
using namespace std;

int main() {
    int initial, first, second, third;
    int sum = 0;
    scanf("%d %d %d %d", &initial, &first, &second, &third);
    while (initial||first||second||third) {
        sum=(720+(((40-first+initial)%40)*9)+360+(((40-first+second)%40)*9)+(((40-third+second)%40)*9)); //9 = 360/40 where 40 is the total of numbers in lock 
        // the modulo 40 operation lets us calculate the value in range 0..39
        //so if an above operation is greater than 40 this will mantain the integrity of the operation
        // in the case that the initial > first; second>first; second>third
        printf("%d\n",sum);
        scanf("%d %d %d %d", &initial, &first, &second, &third);
        
    }
    
    return 0;
}
