#include <stdio.h>
#include <stdlib.h>

const int STR_TYPE_MAX = 27;
const int BUFF_MAX = 256;
const char* tbl_sml = "abcdefghijklmnopqrstuvwxyz\0";
const char* tbl_big = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\0" ;

int changeSmallToBig(const char sml){
	for (int i = 0; i < STR_TYPE_MAX; ++i){
		if (tbl_sml[i] == sml){
			return tbl_big[i];
		}
	}
	return -1;
}

void main(){


	char buff_input[ BUFF_MAX ] = { 0 };
	char buff_output[ BUFF_MAX ] = { 0 };

	fgets(buff_input, sizeof(buff_input), stdin);


	for (int i = 0; i < BUFF_MAX; ++i){
		if ('\n' == buff_input[i]) break;
		buff_output[i] = changeSmallToBig( buff_input[i] );
		if (-1 != buff_output[i]) continue;
		buff_output[i] = buff_input[i];
	}

	printf("%s\n", buff_input);
	printf("%s\n", buff_output);
	getchar();
}


