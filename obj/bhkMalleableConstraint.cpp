/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "bhkMalleableConstraint.h"

//Definition of TYPE constant
const Type bhkMalleableConstraint::TYPE("bhkMalleableConstraint", &BHK_MALLEABLE_CONSTRAINT_PARENT::TYPE );

bhkMalleableConstraint::bhkMalleableConstraint() BHK_MALLEABLE_CONSTRAINT_CONSTRUCT {}

bhkMalleableConstraint::~bhkMalleableConstraint() {}

void bhkMalleableConstraint::Read( istream& in, list<uint> & link_stack, unsigned int version ) {
	BHK_MALLEABLE_CONSTRAINT_READ
}

void bhkMalleableConstraint::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const {
	BHK_MALLEABLE_CONSTRAINT_WRITE
}

string bhkMalleableConstraint::asString( bool verbose ) const {
	BHK_MALLEABLE_CONSTRAINT_STRING
}

void bhkMalleableConstraint::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version ) {
	BHK_MALLEABLE_CONSTRAINT_FIXLINKS
}

