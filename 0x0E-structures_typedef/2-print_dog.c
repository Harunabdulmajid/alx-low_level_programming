#includ "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: dog to print
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)

		return;
	if (d->name == 0)
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == 0)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->ow
