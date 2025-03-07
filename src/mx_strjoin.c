#include "libmx.h"

char *mx_strjoin(char const *s1, char const *s2) {
	char *str_1 = NULL;
	char *str_2 = NULL;
	char *concatenated_str;

	if ((s1 == NULL) && (s2 == NULL)) {
		return NULL;
	}
	if ((s1 == NULL) && (s2 != NULL)) {
		return mx_strdup(s2);
	}
	if ((s1 != NULL) && (s2 == NULL)) {
		return mx_strdup(s1);
	}
	str_1 = mx_strdup(s1);
	str_2 = mx_strdup(s2);
	concatenated_str = mx_strcat(str_1, str_2);
	if (concatenated_str == NULL) {
		return NULL;
	}
	return concatenated_str;
}
