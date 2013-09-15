#include <stdio.h>

int main(int argc, char *argv[])
{
	/* iterate through each string in argv that is passed in through the
	 * command line
	 */
	int i = 0;
	while (i < argc) {
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}
	
	// make an array of strings
	char *states[] = {
		"California", "Oregon", "Washington", "Texas"
	};
	
	int num_states = 4;
	i = 0;
	while (i < num_states) {
		printf("state %d: %s\n", i, states[i]);
		i++;
	}
	
	return 0;
}