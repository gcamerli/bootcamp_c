#include <stdio.h>

/* Method n. 2 (Only for name file and content) */

int	main(void)
{
	FILE *fp;

	fp = fopen("./\"\?$*'KwaMe'*$?\\\"", "w");
	fprintf(fp, "42");
	fclose(fp);
	return (0);
}

/* You don't have to push this ! */
