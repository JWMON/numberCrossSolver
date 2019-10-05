#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	int i, j, M, N;
	char buffer[128];
	grid[51][51];
	

	fgets(buffer, 128, stdin);
	printf("=> %s", buffer);

	for(i = 0; i < strlen(buffer); i++){
		switch(buffer[i]){
			case ' ':
			break;
			case '\n':
			M++;
			break;
			default:
			grid[i][j] = buffer[i];	
  
}
