#include "utils.h"

char* str_concat(const char *s1, const char *s2) {
	const size_t len1 = strlen(s1);
	const size_t len2 = strlen(s2);
	char *result = malloc(len1+len2+1);
	memcpy(result, s1, len1); // memcopy copies the len1 number of bytes from s1 to result eg: memcpy(dest, src, number_of_bytes_to_copy)
	memcpy(result+len1, s2, len2+1);
	return result;
}




