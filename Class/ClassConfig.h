/* Class header
 * Copyright (C) 2014 Brendan Bruner
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * bbruner@ualberta.ca
 *
 *  Created on: 2015-07-29
 *      Author: Brendan Bruner
 */

#ifndef CLASSCONFIG_H_
#define CLASSCONFIG_H_

/* Name of the base object class. */
#define BASE_OBJECT		Object

/* Name of the base object constructor. */
#define BASE_CONSTRUCTOR	newObject

/* This will be the variable name of an object. */
#define OBJ_REFERENCE		self

/* This variable will never be used directly. It should be named to avoid any */
/* name conflicts. */
#define SUPER_OBJ_REFERENCE	selfReference

/* Do not change what is defined, instead, change the define's name. */
/* This is the macro that is used in function prototypes. */
#define self( class )		class *OBJ_REFERENCE	

/* Do not change what is defined, instead, change the define's name. */
/* This is the macro that is used in function prototyping methods */
/* which override a method. */
#define super( class )		class *SUPER_OBJ_REFERENCE

/* Used to validate a pointer to an object. */
#define CLASS_ASSERT( O )	do{ (void) 0; } while( 0 )
/* This implementation will hault the code and print the file and line where the exception occured. */
/*
#define CLASS_ASSERT( O )	do{										\
				   if( (O) == 0 ) { 								\
				   	printf("NULL pointer exception:\nfile %s\nline %d\n", 			\
						(char *) __FILE__, __LINE__ ); 					\
					for( ;; );								\
				} while( 0 )
*/

/* Used to suppress compiler warnings about unused function arguments. */
/* Use this macro when you do not use the function reference. */
#define ObjectUnused( )		(void) OBJ_REFERENCE

/* Base class of all classes. Add variables and function pointers here. */
/* For example, adding a 'serialize( )' function here will reliable give */
/* every class a 'serialize( )' method. */
/** 
 * @struct BASE_OBJECT
 * @brief
 *	Base class for everything.
 * @details
 *	Base class for everything.
 * @var BASE_OBJECT::destroy
 *	@code
 *	void destroy( self(BASE_OBJECT) );
 *	@endcode
 *	Destroys the object. This method can be used to clean up memory allocation.
 *	
 *	<b>Parameters</b>
 *	<ul>
 *	<li><b>OBJ_REFERENCE</b>: Pointer to itself.</li>
 *	</ul>
 *
 *	<b>Returns</b>
 *	<br>Nothing.
 */
typedef struct BASE_OBJECT BASE_OBJECT;
struct BASE_OBJECT
{
	void (*destroy)( self(BASE_OBJECT) );
};

/**
 * @brief
 *	Constructor for the BASE_OBJECT.
 * @details
 *	Constructor for the BASE_OBJECT.
 * @param OBJ_REFERENCE
 *	BASE_OBJECT class to create.
 */
void BASE_CONSTRUCTOR( self(BASE_OBJECT) );

#endif /* CLASSCONFIG_H_ */