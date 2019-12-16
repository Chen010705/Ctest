#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
    	printf("what?\n");
    	exit(1);
    }

    unsigned int first = atoi(argv[1]);
    if (first != 0xcafe) {
    	printf("you are wrong, sorry.\n");
    	exit(2);
    }//51966

    unsigned int second = atoi(argv[2]);
    if (second % 5 == 3 || second % 17 != 8) {
    	printf("ha, you won't get it!\n");
    	exit(3);
    }//25

    if (strcmp("h4cky0u", argv[3])) {
    	printf("so close, dude!\n");
    	exit(4);
    }//h4cky0u

    printf("Brr wrrr grr\n");

    unsigned int hash = 51966 * 31337 + (25 % 17) * 11 + strlen(argv[3]) - 1615810207;

    printf("Get your key: ");
    printf("%x\n", hash);
    return 0;
}

