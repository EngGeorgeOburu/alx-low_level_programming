# Hash tables
0x1A. C - Hash tables

## Project Overview

This project focuses on implementing and understanding hash tables in C. The goal is to gain a deep understanding of hash functions, hash tables, and their applications.Hashing is a technique of converting range of key values toa range of indexes of an array. 

## Resource
### Data structures
Below is the data structures used for this project
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

# Contributing 
Contributions are welcomed, if you have any insights , improvements, or additional examples related to exceptional handling, feel free to submit a pull request.

# Author
George Oburu
