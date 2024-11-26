/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndizullh <ndizullh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:41:34 by ndizullh          #+#    #+#             */
/*   Updated: 2024/11/26 18:35:37 by ndizullh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counttoken(char const *s, char c)
{
	int	i;
	int	count;
	int	passdel;

	i = 0;
	count = 0;
	passdel = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && !passdel)
			passdel = 1;
		else if (s[i] != c && passdel)
		{
			++count;
			passdel = 0;
		}
		++i;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	int			j;
	int			token;
	char		**tmp;

	if (!s)
		return (NULL);
	i = 0;
	token = counttoken(s, c);
	tmp = malloc(sizeof(char *) * (token + 1));
	if (!tmp)
		return (NULL);
	token = 0;
	while (s[i] && token < counttoken(s, c))
	{
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i + j] != c && s[i + j] != '\0')
			j++;
		tmp[token++] = ft_substr(s + i, 0, j);
		i += j;
	}
	tmp[token] = 0;
	return (tmp);
}
