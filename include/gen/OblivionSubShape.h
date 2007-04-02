/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/nifxml_niflib.py Python script.

#ifndef _OBLIVIONSUBSHAPE_H_
#define _OBLIVIONSUBSHAPE_H_

#include "../NIF_IO.h"

namespace Niflib {


/*!
 * Havok Information for packed TriStrip shapes.
 */
struct OblivionSubShape {
	/*! Default Constructor */
	NIFLIB_API OblivionSubShape();
	/*! Default Destructor */
	NIFLIB_API ~OblivionSubShape();
	/*! Copy Constructor */
	NIFLIB_API OblivionSubShape( const OblivionSubShape & src );
	//This operator give SWIG problems
	#ifndef SWIG
	/*! Copy Operator */
	NIFLIB_API OblivionSubShape & operator=( const OblivionSubShape & src );
	#endif
	/*!
	 * Sets mesh color in Oblivion Construction Set.
	 */
	OblivionLayer layer;
	/*!
	 * The first bit sets the LINK property and controls whether this body is
	 * physically linked to others. The next bit turns collision off. Then,
	 * the next bit sets the SCALED property in Oblivion. The next five bits
	 * make up the number of this part in a linked body list.
	 */
	byte colFilter;
	/*!
	 * Unknown.
	 */
	unsigned short unknownShort;
	/*!
	 * Seems to be the number of vertices that form this sub shape.
	 */
	unsigned int vertexCount___;
	/*!
	 * The material of the subshape.
	 */
	HavokMaterial material;
};

}
#endif
