#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;
	dog_t my_dog2;
	dog_t *my_dog3;
	
	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	
	init_dog(&my_dog, "Poopy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	
	my_dog2.name = "Poppy";
	my_dog2.age = 3.5;
	my_dog2.owner = "Bob";
	print_dog(&my_dog2);

	my_dog2.name = "Poppy";
        my_dog2.age = 3.5;
        my_dog2.owner = "Bob";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog2.name, my_dog2.age);

	my_dog3 = new_dog("Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog3->name, my_dog3->age);
	free_dog(my_dog3);

	return (0);
}

