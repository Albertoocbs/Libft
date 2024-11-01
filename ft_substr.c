/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutumur <aoutumur@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:29:24 by aoutumur          #+#    #+#             */
/*   Updated: 2024/10/16 18:25:38 by aoutumur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	if (len > s_len - start)
		len = s_len - start;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
/*
	Crée une novelle sous-chaine de caracteres a partir d'une chaine donnée (s)
	en débutant à la position (start) et de taille max (len)

	{
	size_t	i;
	char	*res; // Variable pour stocker la nouvelle chaine a retourne
	size_t	s_len;

	if (!s) // si la chaine est vide la fonction quitte inmediatement
		return (NULL);
	s_len = ft_strlen(s); // Calcule la longueur de s avec ft_strlen

	// Si start est hors de la chaîne s, on fixe len à 0 pour une chaîne vide
	if (start >= s_len)
			len = 0;

	// Pour une chaine de s_len = 13 start = 7 et len = 10
	// s_len c'est la longueur total de s
	// s_len - start c'est le nombre de caractères restants à partir de start
	// Si len dépasse ce nombre, s_len - start(13-7 == 6) 10 > 6
	// len prend la valeur de s_len - start = 6,
	// pour qu'il ne dépasse pas la longueur restante dans s à partir de start
	if (len > s_len - start)
		len = s_len - start;

	// On alloue  memoire neccessaire pour stocker la nouvelle chaine res
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL); // Si l'allocation echoue on retourne NULL
	i = 0;

	// ft_strlcpy copie chaque caractere de s dans res en partant de start et
	// en ajoutant un caractère nul final
	// len + 1 est le nombre de caractères à copier + 1 pour la valeur nulle 
	ft_strlcpy(res, s + start, len + 1);
	return (res); // Return pointeur vers la nouvelle chaine créee et alloué
}
*/