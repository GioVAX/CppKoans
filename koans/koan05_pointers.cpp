/*
    Copyright (c) 2012 Torbjörn Klatt <opensource@torbjoern-klatt.de>

    Permission is hereby granted, free of charge, to any person
    obtaining a copy of this software and associated documentation
    files (the "Software"), to deal in the Software without
    restriction, including without limitation the rights to use,
    copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following
    conditions:

    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
    OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
    HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
    WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
    OTHER DEALINGS IN THE SOFTWARE.
*/

#include "../headers/koan05_pointers.hpp"

void Koan05_pointers::they_are_just_variables()
{
  int an_int = 42;
  int *pointer_to_an_int = &an_int;
  ASSERT_EQUAL( *pointer_to_an_int, 42 );
  ASSERT( pointer_to_an_int != NULL );
}

void Koan05_pointers::they_are_really_just_variables()
{
  int an_int = 42;
  int another_int = 21;
  int *pointer_to_an_int = &an_int;
  ASSERT_EQUAL( *pointer_to_an_int, 42 );
  ASSERT( pointer_to_an_int != NULL );
  pointer_to_an_int = &another_int;
  ASSERT_EQUAL( *pointer_to_an_int, 21 );
  ASSERT( pointer_to_an_int != NULL );
}

void Koan05_pointers::they_have_power()
{
  int an_int = 42;
  int *powerful_pointer = &an_int;
  ASSERT_EQUAL( *powerful_pointer, 42 );
  ASSERT( powerful_pointer!= NULL);
  *powerful_pointer = 21;
  ASSERT_EQUAL( an_int, 21 );
  ASSERT( powerful_pointer!= NULL);
}

void Koan05_pointers::they_are_not_almighty()
{
   int an_int = 42;
   int *wannabe_powerful = &an_int;
  ASSERT_EQUAL( *wannabe_powerful, 42 );
  ASSERT( wannabe_powerful!= NULL );
  // Will this work? Think about it!
  // What do you need to change to make it work?
   *wannabe_powerful = 21;
  ASSERT_EQUAL( an_int, 21 );
  ASSERT( wannabe_powerful != NULL );
}

// EOF
