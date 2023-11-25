#include <malloc.h>

typedef struct string {
	char *str;				
	int length;
} string;

typedef struct string_buffer {
	char *buff;
	int capacity;
	int length;
} strbuffer;

void append_literal_to_string(string *str, char *suff) {
	char *p = suff;
	while (*p++);
	int str_length = str->length;
	int suff_length = p - suff - 1;
	char *new_str = malloc((suff_length + str_length));

	int i;
	p = new_str;
	for (i = 0; i < str_length; i++) {
		*(p++) = str->str[i];
	}

	for (i = 0; i < suff_length; i++) {
		*(p++) = suff[i];
	}
	str->str = new_str;
	str->length = str_length + suff_length;
}

string concatenate_strings(string *str1, string *str2) {
	string res;
	res.length = str1->length + str2->length;
	res.str = malloc((res.length));
	char *p = res.str;
	int i;

	for (i = 0; i < str1->length; i++) {
		*(p++) = str1->str[i];
	}

	for (i = 0; i < str2->length; i++) {
		*(p++) = str2->str[i];
	}
	return res;
}



