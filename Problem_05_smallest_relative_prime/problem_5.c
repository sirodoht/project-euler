#include <stdio.h>
#include <stdlib.h>
#define LIMIT 20

int main(void) {
    int result = 0;

    int counter = 2;
    while(!result) {
        int possible_result_bool = 1;
        int inner_counter = LIMIT;
        while (possible_result_bool && inner_counter > 0) {
            if (counter % inner_counter != 0) {
                possible_result_bool = 0;
                break;
            }
            inner_counter--;
        }

        if (possible_result_bool) {
            result = counter;
        }

        counter++;
    }

    printf("Result = %d\n", result);

    return 0;
}
