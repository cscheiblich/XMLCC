/** 
 * @file xmlccSysFailure.cpp
 * @author Christian Scheiblich
 *
 * XMLCC is distributed under the MIT License (MIT); this file is part of.
 *
 * Copyright (c) 2008-2017 Christian Scheiblich (cscheiblich@gmail.com)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "./xmlccSysFailure.h"

/******************************************************************************/

namespace XMLCC {

namespace SYS {

/******************************************************************************/

Failure::Failure( void ) :
    Exception( ) {
} // Failure

Failure::Failure( Str message ) :
    Exception( message ) {
} // Failure

Failure::Failure( Str message, int lineNo ) :
    Exception( message, lineNo ) {
} // Failure

Failure::Failure( Str message, char* fileName ) :
    Exception( message, fileName ) {
} // Failure

Failure::Failure( Str message, char* fileName, int lineNo ) :
    Exception( message, fileName, lineNo ) {
} // Failure

Failure::~Failure( void ) {
} //  ~Failure

/******************************************************************************/

void /// mark exception
Failure::mark( void ) {
  Str tmp = "XMLCC::Failure::";
  tmp.append( _message );
  _message = tmp;
} // Failure::mark

/******************************************************************************/

} // namespace SYS

} // namespace XMLCC

/******************************************************************************/
