#ifndef HASH_TABLE_H
#define HASH_TABLE_H

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_s;
/**
 * struct hash_table_t - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 */
typedef struct hash_table_t
{
	unsigned long int size;
	hash_node_s **array;
} hash_table_t;
hash_table_t *hash_table_create(unsigned long int size);

#endif
