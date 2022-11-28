# 0x13. C - More singly linked lists README.md

[Data structures](https://alx-intranet.hbtn.io/concepts/120 "Data structure")

![linked-list-single-in-c](https://user-images.githubusercontent.com/113618032/204251136-f3313e0e-0d38-4e35-a79b-944731e97932.png)

![singly-linkedlist](https://user-images.githubusercontent.com/113618032/204249242-452862de-e138-47ef-9771-f0a0066b0251.png)

#### More Info
####### Please use this data structure for this project:

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
