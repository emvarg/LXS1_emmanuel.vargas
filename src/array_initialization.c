#include <stdio.h>

#define MAX_VAL 20
enum values {
val1 = 10,
val2 = 15,
val3 = 16,
val4 = 17,
val5 = 18,
val6 = 19
};

int main(void){

int array[MAX_VAL] = {
[val1] = 1,
[val2] = 2,
[val3] = 3,
[val4] = 4,
[val5] = 5,
[val6] = 6
};

for (int i = 0; MAX_VAL > i; i++){
	printf("Run %d, Array val= %d \n", i, array[i]);
}

printf("Values: %d, %d, %d, %d, %d, %d \n", val1, val2, val3, val4, val5, val6);
	printf("Val call for Array val= %d \n", array[val5]);

return 0;
}
