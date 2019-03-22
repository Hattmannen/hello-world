#include <stdio.h>

int main(int argc, char **argv) {
	printf( "Hello arguments!\n\n" );

	if( argc >0 )
	{
		int i;
		for (i=0; i<argc; i++)
			printf( "argv[%d]: %s\n", i, argv[i] );
	}

	return 0;
}
