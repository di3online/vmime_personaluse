//
// VMime library (http://www.vmime.org)
// Copyright (C) 2002-2005 Vincent Richard <vincent@vincent-richard.net>
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation; either version 2 of
// the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//

#ifndef VMIME_UTILITY_RANDOM_HPP_INCLUDED
#define VMIME_UTILITY_RANDOM_HPP_INCLUDED


#include "vmime/types.hpp"


namespace vmime {
namespace utility {


/** Pseudo-random number generator.
  */

class random
{
public:

	/** Return a new random number.
	  *
	  * @return random number
	  */
	static const unsigned int getNext();

	/** Return the current time as a number (may be used to
	  * build "random" strings).
	  *
	  * @return time as a number
	  */
	static const unsigned int getTime();

	/** Return the current process number (may be user to
	  * build "random" strings).
	  *
	  * @return process number
	  */
	static const unsigned int getProcess();

	/** Return a random character string with the specified length.
	  *
	  * @param length length of the string to generate
	  * @param randomChars list of characters to use
	  * @return random string
	  */
	static const string getString(const int length, const string& randomChars
		= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");

protected:

	static unsigned int m_next;
};


} // utility
} // vmime


#endif // VMIME_UTILITY_RANDOM_HPP_INCLUDED
