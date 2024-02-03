#include <stdio.h>

int main(){
	char ABC[1000];
	for(int ii=0 ; ii<=255 ; ii++){
		ABC[ii]=ii;
		printf("%d : %c\n",ii,ABC[ii]);
	}
	return 0;
}

