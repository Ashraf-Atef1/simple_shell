#include "shell.h"
/*like getenv() func*/
char *handle_PATH(char *envp[])
{
	int i = 0;
	char *PATH_key = "PATH=";
	char *PATH_value = NULL;
	char envp_key[BUFSIZ];
	size_t l_path = strlen(PATH_key);

	while (envp[i])
	{
		memcpy(envp_key, envp[i], l_path); /*for compar key with key*/
		envp_key[l_path] = '\0';		   /*to store only key*/

		if (_strcmp(envp_key, PATH_key) == 0)
		{
			PATH_value = envp[i] + l_path; /*pointer arthmatic for get value*/
			return (PATH_value);
		}
		i++;
	}
	return (NULL);
}
char *check_exec_file(char *cmd, char *path, char *envp[])
{
	char *first_arg1 = NULL;
	char *arg2;
	char *cmd_cpy = strdup(cmd);

	first_arg1 = strtok(cmd_cpy, " ");

	if (strchr(first_arg1, '/') && access(first_arg1, X_OK) == 0)
	{
		printf(">>1 %s\n", first_arg1);
		free(cmd_cpy);
		return (first_arg1);
	}
	else if (_strcmp(first_arg1, "exit") == 0)
	{
		arg2 = strtok(NULL, " ");
		if (arg2 == NULL)
		{
			exit(0);
		}
		exit_handle(arg2);
	}
	else if (_strcmp(first_arg1, "env") == 0)
	{
		handle_env(envp);
	}
	else
	{
		char *arg1 = handle_exec_file(first_arg1, path);
		free(cmd_cpy);
		return (arg1);
	}
}
char *handle_exec_file(char *first_arg1, char *path)
{
	char *Path_cpy = strdup(path);
	char *current_Path = strtok(Path_cpy, ":");

	while (current_Path && *path)
	{
		size_t len = strlen(first_arg1) + strlen(current_Path) + 2;
		char *first_arg2 = malloc(sizeof(char) * len);
		int i = 0, x = 0;

		if (!first_arg2)
		{
			free(first_arg2);
			exit(2);
		}

		while (current_Path[i])
		{
			first_arg2[i] = current_Path[i];
			i++;
		}
		first_arg2[i++] = '/';

		while (first_arg1[x])
		{
			first_arg2[i] = first_arg1[x];
			i++, x++;
		}
		first_arg2[i] = '\0';

		if (access(first_arg2, X_OK) == 0)
		{
			printf(">>2 %s\n", first_arg2);

			/*free that comes from strdup*/
			free(Path_cpy);
			return (first_arg2);
		}
		/*free if it not fiund to allocate again*/
		free(first_arg2);
		current_Path = strtok(NULL, ":");
	}

	free(Path_cpy);
	return (NULL);
}
char **handle_argument(char *path, char *cmd)
{
	int i = 0;
	char *args[BUFSIZ];
	char **result;

	char *chank = strtok(cmd, " ");

	while (chank && cmd)
	{
		
		args[i] = chank;
		i++;
		chank = strtok(NULL, " ");
	}
	args[i] = NULL;
	result = dup_2D(args);

	return (result);
}

