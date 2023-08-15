#include <crisp/str.h>
#include <crisp/alloc.h>

#include <stdio.h>

int main() {
	c_str_t   str_1, str_2;

	c_str_init(&str_1, c_global_alloc());
	c_str_init(&str_2, c_global_alloc());
	
	c_str_push_back_cstr(&str_1, "Hello");
	c_str_push_back_cstr(&str_1, " World");
	c_str_push_back_cstr(&str_2, "Hello World");

	printf("%d", c_str_eq(&str_1, &str_2));
}