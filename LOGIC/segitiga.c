/* OUTPUT
*
**
***
****
*****
******
*/

#include <stdio.h>

int main(void){
	int x,y;
	for(x=1;x<7;x++)
		for(y=1;y<x;y++)
			printf("*");
		printf("*\n");
	return 0;
}
