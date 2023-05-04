#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *tmp, *del;

	count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	tmp = *head;

	while (tmp)
	{
		if (count == (index - 1))
		{
			del = tmp->next;
			if (del == NULL)
				return (-1);
			tmp->next = del->next;
			free(del);
			return (1);
		}
		tmp = tmp->next;
		count++;
	}

	return (-1);
}
