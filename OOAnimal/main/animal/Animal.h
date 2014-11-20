/*
 * Animal.h
 *
 *  Created on: 2014-11-19
 *      Author: brendan
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

/******************************************************************************
 * Class Animal
 *****************************************************************************/
/**
 * Animal
 * Describes how an animal talks, how many legs it has, and where it lives.
 */
typedef struct Animal Animal;

/******************************************************************************
 * vtable prototype
 *****************************************************************************/
struct vtable_Animal
{
	char * (* getName)(Animal *);
	void (* talk)(Animal *);
	void (* setLegs)(Animal *, int);
	int (* getLegs)(Animal *);
	void (* location)(Animal *);
};

/******************************************************************************
 * Class data structure
 *****************************************************************************/
/**
 * @param numLegs How many legs the animal has.
 * @param vtable virtual function pointer table.
 * @param name A pointer the Animal's name (ie, a string). This means when the
 * Animal's name is set, the string used to set it is not copied. So.. be
 * careful the string being referenced does not dissapear off the stack or
 * something.
 */
struct Animal
{
	char *name;
	int numLegs;
	struct vtable_Animal vtable;
};

/******************************************************************************
 * Constructor and destructor prototypes
 *****************************************************************************/
/**
 * Constructor.
 * Initializes an object.
 * @param this Object to initialize.
 * @param name The animals name.
 */
void new_Animal(Animal *this, char const *name);

/**
 * Destructor.
 * @param this The object to destroy.
 */
void destroy_Animal(Animal *this);

#endif /* ANIMAL_H_ */
