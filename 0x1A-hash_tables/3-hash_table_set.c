#include "hash_tables.h"
/*****/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node, *current_node;
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);
    /* Check for collision and update value if key already exists */
    current_node = ht->array[index];
    while (current_node != NULL)
    {
        if (strcmp (current_node->key, key) == 0)
            free(current_node->value);
            current_node->value = strdup(value);
            if (current_node-> = strdup(value)
                    return (0);
            return (1);
            }
            current_node = current_node->next;
            }
            new_node = malloc(sizeof(hash_node_t));
            if (new_node == NULL)
                return (0);
            if (new_node->key == NULL)
                {
                free(new_node);
                    return (0);
                }
            new_node->value = strdup(value);
            if (new_node->value == NULL)
             {
                free(new_node->key);
                free(new_node);
                return (0);
             }
                new_node->next = ht->array[index];
                ht->array[index] = new_node;
                return (1);
                }
}
