#include <stdio.h>

int sumOneToTen(){
	int result = 0;
	for(int i=0;i<10;i++){
		result += i;
	}
	return result;
}

int main(){
	printf("%d\n", sumOneToTen());
	return 0;
}

