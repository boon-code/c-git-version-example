/** @file */

#include <stdio.h>
#include <stdlib.h>

#include "c_git_version.h"

/** @brief The main entry point
 */
int main(void)
{
	printf("Version: %s\nBranch: %s\nHash: %s\n",
		c_git_version(), c_git_branch(), c_git_hash());

	printf("Submodules:\n%s\n", c_git_submodules());

	return EXIT_SUCCESS;
}
