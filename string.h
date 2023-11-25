
typedef struct string{
	char *str;
	int length;
} string;

typedef struct string_buffer{
	char *buff;
	int capacity;
	int length;
} strbuffer;


void append_literal_to_string(string *str, char *suff);
string concatenate_strings(string *str1, string *str2);
		
