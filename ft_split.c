/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalshoub <aalshoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 12:52:24 by aalshoub          #+#    #+#             */
/*   Updated: 2025/12/07 16:12:07 by aalshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <stdlib.h>*/

//The function tells you how many words are in the sentence.
static size_t	count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}
// The function extracts a single word from the original text and places 
// it in a new location so that it is 
// ready for independent use.

static char	*alloc_word(const char *s, char c)
{
	size_t		len;
	size_t		i;
	char		*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}
//Free up all previously reserved words in case of an error
// during memory allocation,
// to avoid memory leaks. 

static void	free_all(char **arr, int index)
{
	while (index >= 0)
	{
		free(arr[index]);
		arr[index] = NULL;
		index--;
	}
	free(arr);
}
//Takes a text (s) and a separator character (c) and returns an array of words.

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	w;

	w = 0;
	i = 0;
	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			arr[w] = alloc_word(&s[i], c);
			if (!arr[w])
				return (free_all(arr, w - 1), NULL);
			w++;
		}
		i++;
	}
	arr[w] = NULL;
	return (arr);
}
/*int main(void)
{
	char **result;
	int i = 0;
	result = ft_split("Ahmed     Alshoubalki", ' ');
		while (result[i])
		{
			printf ("%s\n", result[i]);
			free (result[i]);
			i++;
		}
	free(result);
	return (0);
}*/
