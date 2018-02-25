/*
** EPITECH PROJECT, 2018
** String
** File description:
** String
*/

#ifndef STRING_H_
# define STRING_H_

#include <stddef.h>

typedef struct String {

	char *str;
	void (*assign_s)(struct String *this, const struct String *str);
	void (*assign_c)(struct String *this, const char *s);
	void (*append_s)(struct String *this, const struct String *ap);
	void (*append_c)(struct String *this, const char *ap);
	char (*at)(struct String *this, size_t pos);
	void (*clear)(struct String *this);
	int (*size)(struct String *this);
	int (*compare_s)(struct String *this, const struct String *str);
	int (*compare_c)(struct String *this, const char *str);
	size_t (*copy)(struct String *this, char *s, size_t n, size_t pos);
	const char* (*c_str)(struct String *this);
}String;

void StringInit(String *this, const char *s);
void StringDestroy(String *this);
void assign_s(String *this, const String *str);
void assign_c(String *this, const char *s);
void append_s(String *this, const String *ap);
void append_c(String *this, const char *ap);
char at(String *this, size_t pos);
void clear(String *this);
int size(String *this);
int compare_s(String *this, const String *str);
int compare_c(String *this, const char *str);
size_t copy(String *this, char *s, size_t n, size_t pos);
const char *c_str(String *this);

#endif /* STRING_H_  */
