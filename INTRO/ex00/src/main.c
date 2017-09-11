/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:49:33 by lmucassi          #+#    #+#             */
/*   Updated: 2017/09/11 15:05:18 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "struct.h"

int		main(void)
{
	t_store	store;

	store.goods = "Watermelon";
	store.price = 6;
	printf("\nToday, the price of %s is $%d\x1b[0m\n", store.goods, store.price);
	printf("\x1b[32m\033[1mSUCCESS! Proceed to ex01!\x1b[0m\n");
	return (0);
}
