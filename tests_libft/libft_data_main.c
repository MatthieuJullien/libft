#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

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

int     main(void)
{
    t_llist   *l1;

	puts("Creation liste l1 = 1");
    ft_llist_create(&l1);
    ft_llist_add_last(l1, "2", 2);
	puts("l1(0) = 0");
    ft_llist_set_at(l1, "0", 2, 0);
    infos_list(l1);
    aff_list(l1);
	puts("Destruction de l1");
    ft_llist_destroy(&l1);

	char	tab[3][2] = {"1", "2", "3"};
	puts("\nCreation de l1 a partir de tab = 1 2 3");
	l1 = ft_array_to_llist((void*)tab, 3, 2);
    aff_list(l1);
	puts("\nAjout en tete de 0");
	ft_llist_add_first(l1, "0", 2);
    aff_list(l1);
	puts("\nSuppresion de la tete");
	ft_llist_rm_first(l1);
    aff_list(l1);
	puts("\nAjout en fin de 4");
	ft_llist_add_last(l1, "4", 2);
	aff_list(l1);
	puts("\nSuppression de fin");
	ft_llist_rm_last(l1);
	aff_list(l1);
	puts("\nEst-ce aue l1 contiens 3 ?");
	printf("%d\n", ft_llist_contains(l1, "3", &cmp));
	puts("\nEst-ce aue l1 contiens 4 ?");
	printf("%d\n", ft_llist_contains(l1, "4", &cmp));
	puts("\nIndex de 3");
	printf("%d\n", ft_llist_indexof(l1, "3", &cmp));
	puts("\nIndex de 4");
	printf("%d\n", ft_llist_indexof(l1, "4", &cmp));
	puts("\nAjout en fin de 4 puis 2 puis 5");
	ft_llist_add_last(l1, "4", 2);
	ft_llist_add_last(l1, "2", 2);
	ft_llist_add_last(l1, "5", 2);
	aff_list(l1);
	puts("\nDernier index de 2");
	printf("%d\n", ft_llist_last_indexof(l1, "2", &cmp));
	puts("\nAjout de x en index 3");
	ft_llist_add_at(l1, "x", 2, 3);
	aff_list(l1);
	puts("\nElement en index 3");
	printf("%s\n", (char *)(ft_llist_get_at(l1, 3)->val));
	puts("\nElement en 3 set a y");
	ft_llist_set_at(l1, "y", 2, 3);
	aff_list(l1);
	puts("\nAffichage avec foreach:");
	ft_llist_foreach(l1, &f);
	puts("");
	puts("\nSuppression de l'element en 3");
	ft_llist_rm_at(l1, 3);
	aff_list(l1);
	puts("\nSuppression du dernier 2");
	ft_llist_rm_at(l1, ft_llist_last_indexof(l1, "2", &cmp));
	puts("\nCopie de l1 dans l2");
	t_llist	*l2 = ft_llist_copy(l1);
	aff_list(l1);
	aff_list(l2);
	puts("\nInversion de l2");
	ft_llist_inverse(l2);
	aff_list(l2);
	puts("\nAjout de l2 a l1");
	ft_llist_merge(l1, l2);
	aff_list(l1);
	aff_list(l2);
	puts("\nTri de l1");
	ft_llist_sort(l1, &strcmp);
	aff_list(l1);
	puts("\nInsertion de 3 dans la liste triee l1");
	ft_llist_sorted_insert(l1, "3", 2, &strcmp);
	aff_list(l1);
	puts("\nAjout de l2 a l1 de facon triee");
	ft_llist_sorted_merge(l1, l2, &strcmp);
	aff_list(l1);
	puts("\nCreation d'une liste sans doublon a partir de l1");
	t_llist *set;
	set = ft_llist_to_set(l1, &cmp);
	aff_list(set);

	puts("\nAjout de xx en fin de chaine");
	ft_llist_add_last(set, "xx", 3);
	puts("\nMise des elements de la liste dans un tableau et affichage");
	char	**back_to_tab;
	back_to_tab = (char **)ft_llist_to_array(set);
	unsigned int i;
	for (i = 0; i < set->size; i++)
	{
		printf("%s ", back_to_tab[i]);
	}

	puts("\nDestruction de la liste");
	aff_list(set);
	infos_list(set);
	ft_llist_destroy(&set);
	puts("\nDestruction de l1");
	aff_list(l1);
	infos_list(l1);
	ft_llist_destroy(&l1);
	puts("\nDestruction de l2");
	aff_list(l2);
	infos_list(l2);
	ft_llist_destroy(&l2);

    puts("\nSUCCESS ?");
    return (0);
}
