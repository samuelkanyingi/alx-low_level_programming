#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - split string to word
 * @str: The string to be splitted
 * Return: pointer to string array
 */
char **strtow(char *str)
{
	int nwords;
	char **word;
	char *t;
	int t_index = 0;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	nwords = c_words(str);

	if (nwords == 0)
	{
		return (NULL);
	}
	word = (char **)malloc((nwords + 1) * sizeof(char *));

	if (word == NULL)
	{
		return (NULL);
	}
	t = strtok(str, " ");

	while (t != NULL)
	{
		word[t_index] = strdup(t);
		if (word[t_index] == NULL)
		{
			_free(word);
			return (NULL);
		}
		t_index++;
		t = strtok(NULL, " ");
	}
	word[t_index] = NULL;
	return (word);
}

/**
 * c_words - count number of string
 * @str: the string itself
 * Return: number of words
 */
int c_words(char *str)
{
	int c = 0;
	int _word = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
		{
			_word = 0;
		}
		else if (_word == 0)
		{
			_word = 1;
			c++;
		}
		str++;
	}
	return (c);
}
/**
 * _free - free mmory in array
 * @words: words to be freed
 */
void _free(char **words)
{
	int i = 0;

	for (i = 0; words[i] != NULL; i++)
	{
		free(words[i]);
	}
	free(words);
}

