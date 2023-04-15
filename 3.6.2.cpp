#include <stdio.h>

main() {
	int a = 0;
	while(a !=7) {
		scanf("%i", &a);
		if(a < 7) {
			printf("Lesser than Number\n");
		} else if(a > 7) {
			printf("Bigger than Number\n");
		};
		if(a % 2 ==0) {
			printf("Delitca na 2\n");
		} else {
			printf("ne delitsa na 2\n");
		};
		if(a % 3 ==0) {
			printf("Delitca na 3\n");
		} else {
			printf("ne delitca na 3\n");
		};
		if(a > 10) {
			printf("bigger than 10\n");
		} else if(a< 10){
			printf("lesser than 10\n\n\n");
		}
		
	};
	printf("Its 7 !");
}
