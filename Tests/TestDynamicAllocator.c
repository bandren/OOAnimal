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
 * Nov, 2015
 */

#include "TestSuites.h"
#include <Util/Memory/DynamicAllocator.h>

TEST_SETUP( )
{
}
TEST_TEARDOWN( )
{
}

TEST( malloc_and_free )
{
	COTAllocator* allocator;
	void* mem;

	allocator = COTAllocatorCast( COTDynamicAllocator_GetInstance( ) );

	mem = COTAllocator_Malloc( allocator, 0 );
	ASSERT( "malloc 0 should have returned NULL", mem == NULL );

	mem = COTAllocator_Malloc( allocator, 16 );
	ASSERT( "malloc did not return valid pointer", mem != NULL );

	COTAllocator_Free( allocator, mem );
}


TEST_SUITE( COTDynamicAllocator )
{
	ADD_TEST( malloc_and_free );
}
