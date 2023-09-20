#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <limits.h>

/**
 * struct information - information about status code
 * @status: the status code for exec
 * @exit_num: exit num
 */
typedef struct information
{
	int status;
	int exit_num;
} inform;

#define INIT {0, 0}

/**
 * struct cmd_type - structure for command name and execute function
 * @command: command name
 * @fun: function associated
 */
typedef struct cmd_type
{
	char *command;
	int (*fun)();
} c_t;
extern char **environ;

char *_strdup(char *string);
int _strcmp(char *string1, char *string2);
int _strlen(char *string);
void _strcpy(char *destination, char *source);
void _strcat(char *destination, const char *src);
char *_strchr(char *s, char c);
char *_strtok(char *str, const char *delimiters);
int check_command(char **arguments, char **argv, inform *state);
char *find_exe(char *executable, char *fullpath);
void signal_han(int sig);
void execute(char *command, char **arguments, char **argv, inform *state);
int interactive(void);
int enviroment_print(char **arguments);
int terminal_exit(char **arguments, inform *state, char **argv);
int _atoi(char *string);



#endif /* MAIN_H */
