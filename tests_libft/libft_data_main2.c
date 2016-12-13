/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_data_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majullie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 07:59:49 by majullie          #+#    #+#             */
/*   Updated: 2016/11/26 07:50:09 by majullie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Tester memoire !!!
 * Tester efficacite !!!
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include <unistd.h>
#include "../libft.h"

#define D(test) printf("Starting %s...\n", #test);
#define OK(test) { printf("|%s: \033[32mSUCCESS\033[0m\n", #test); return ; }
#define KO(test) { printf("|%s: \033[31mFAIL: file %s, line %i\033[0m\n", \
	#test, __FILE__, __LINE__); return ; }

void    aff_list(t_llist *list)
{
    t_llnode    *cur = list->first;

    printf("-> ");
    while (cur)
    {
        printf("%s", (char *)(cur->val));
        cur = cur->next;
    }
    printf("\n");
}

void    f(void *val)
{
    printf("%s ", (char *)(val));
}

t_llnode    *f2(t_llnode *node)
{
    t_llnode    *new;
    if (strcmp(node->val, "2") == 0)
        new = ft_llist_create_node(".", 2);
    else
        new = ft_llist_create_node(node->val, node->val_size);
    return (new);
}

void    infos_list(t_llist *list)
{
    if (list->first == NULL)
        puts("first: NULL");
    else
        printf("first: %s\n", (char *)(list->first->val));
    if (list->last == NULL)
        puts("last: NULL");
    else
        printf("last: %s\n", (char *)(list->last->val));
    printf("size: %d\n", (int)list->size);
}

int     cmp(char *s1, char *s2)
{
    if (strcmp(s1, s2) == 0)
        return (1);
    return (0);
}

/* ========================================================================== */
/*
void	test_ft_(void)
{
	D(ft_)

	OK(ft_)
}
*/
/* ========================================================================== */

void	test_ft_llist_create_node(void)
{
	D(ft_llist_create_node)
	t_llnode	*new;
	char		*s = "1";
	if (ft_llist_create_node(NULL, 0) != NULL)
		KO(ft_llist_create_node)
	if (ft_llist_create_node(NULL, 2) != NULL)
		KO(ft_llist_create_node)
	if (ft_llist_create_node("1", 0) != NULL)
		KO(ft_llist_create_node)
	new = ft_llist_create_node(s, 2);
	if (new == NULL)
		KO(ft_llist_create_node)
	if (new->val_size != 2)
		KO(ft_llist_create_node)
	if (new->val == s)
		KO(ft_llist_create_node)
	if (strcmp(new->val, s) != 0)
		KO(ft_llist_create_node)
	if (new->next != NULL)
		KO(ft_llist_create_node)
	OK(ft_llist_create_node)
}

void	test_ft_llist_destroy_node(void)
{
	D(ft_llist_destroy_node)
	t_llnode *new = ft_llist_create_node("1", 2);
	t_llnode *empty = NULL;
	ft_llist_destroy_node(NULL);
	ft_llist_destroy_node(&empty);
	ft_llist_destroy_node(&new);
	if (new != NULL)
		KO(ft_llist_destroy_node)
	OK(ft_llist_destroy_node)
}

void	test_ft_llist_create(void)
{
	D(ft_llist_create)
	t_llist	*l1;
	ft_llist_create(NULL);
	ft_llist_create(&l1);
	if (l1 == NULL)
		KO(ft_llist_create)
	if (l1->size != 0)
		KO(ft_llist_create)
	if (l1->first != NULL)
		KO(ft_llist_create)
	if (l1->last != NULL)
		KO(ft_llist_create)
	OK(ft_llist_create)
}

void	test_ft_llist_destroy(void)
{
	D(ft_llist_destroy)
	ft_llist_destroy(NULL);
	t_llist	*l1;
	ft_llist_create(&l1);
	ft_llist_destroy(&l1);
	if (l1 != NULL)
		KO(ft_llist_destroy)
	OK(ft_llist_destroy)
}

void	test_ft_array_to_llist(void)
{
	D(ft_array_to_llist)
	char	*tab = NULL;
	if (ft_array_to_llist(NULL, 1, 1) != NULL)
		KO(ft_array_to_llist)
	if (ft_array_to_llist((void*)tab, 1, 0) != NULL)
		KO(ft_array_to_llist)
	t_llist	*l1;
	char	tab2[3][2] = {"1", "2", "3"};
	l1 = ft_array_to_llist((void*)tab2, 3, 2);
	if (l1 == NULL)
		KO(ft_array_to_llist)
	if (l1->size != 3)
		KO(ft_array_to_llist)
	if (strcmp(l1->first->val, "1") != 0)
		KO(ft_array_to_llist)
	if (strcmp(l1->last->val, "3") != 0)
		KO(ft_array_to_llist)
	OK(ft_array_to_llist)
}

/*
void	test_ft_(void)
{
	D(ft_)

	OK(ft_)
}void	test_ft_(void)
{
	D(ft_)

	OK(ft_)
}void	test_ft_(void)
{
	D(ft_)

	OK(ft_)
}void	test_ft_(void)
{
	D(ft_)

	OK(ft_)
}void	test_ft_(void)
{
	D(ft_)

	OK(ft_)
}void	test_ft_(void)
{
	D(ft_)

	OK(ft_)
}void	test_ft_(void)
{
	D(ft_)

	OK(ft_)
}void	test_ft_(void)
{
	D(ft_)

	OK(ft_)
}void	test_ft_(void)
{
	D(ft_)

	OK(ft_)
}void	test_ft_(void)
{
	D(ft_)

	OK(ft_)
}
*/
int	 main(void)
{
	printf("Attention, la validite de Certains tests supposent la validite des\
 precedents!\n\n");

	test_ft_llist_create_node();
	test_ft_llist_destroy_node();
	test_ft_llist_create();
	test_ft_llist_destroy();
	test_ft_array_to_llist();

	return (0);
}
