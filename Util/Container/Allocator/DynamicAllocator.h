/*
 * Copyright 2015 Brendan Bruner
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * bbruner@ualberta.ca
 * Oct 4, 2015
 */
#ifndef INCLUDE_DYNAMICALLOCATOR_H_
#define INCLUDE_DYNAMICALLOCATOR_H_

#include <Allocator/Allocator.h>
#include <Class.h>

/**
 * @struct DynamicAllocator
 * @extends TAllocator
 * @brief
 * 		Provides wrappers for stdlib's malloc( ) and free( ).
 * @details
 * 		Provides wrappers for stdlib's malloc( ) and free( ).
 * @attention
 * 		This class is a singleton.
 */
Class( DynamicAllocator ) Extends( Object ) Uses( Allocator )
EndClass;

/**
 * @member of DynamicAllocator
 * @brief
 * 		Constructor.
 * @details
 * 		Constructor. Returns singleton instance.
 */
DynamicAllocator* createDynamicAllocator( );

#endif /* INCLUDE_DYNAMICALLOCATOR_H_ */
