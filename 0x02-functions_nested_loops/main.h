#ifndef __MAIN_H__

#define __MAIN_H__

int _putchar(char c);                                                       

void print_alphabet(void);                                                  

void print_alphabet_x10(void);                                              

int _islower(int c);                                                        

int _isalpha(int c);                                                        

int print_sign(int n);                                                      

int _abs(int);                                                              

int print_last_digit(int);                                                  

void jack_bauer(void);                                                      

void print_times_table(int n);                                                     

int add(int, int);                                                          

void print_to_98(int n);

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>

#include <stdlib.h>

#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);



#endif
