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
 * Aug 12, 2016
 */
/**
 * @file
 */
#ifndef TERM_DEFINES
#define TERM_DEFINES

#define CCTERMINAL_TASK_NAME	((const signed char*) "terminal")
#define CCTERMINAL_TASK_STACK	128
#define CCTERMINAL_TASK_PRIO	(tskIDLE_PRIORITY+1)

#endif /* TERM_DEFINES */
