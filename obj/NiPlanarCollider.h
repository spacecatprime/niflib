/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIPLANARCOLLIDER_H_
#define _NIPLANARCOLLIDER_H_

#include "xml_extract.h"
#include NI_PLANAR_COLLIDER_INCLUDE

/*
 * NiPlanarCollider
 */

class NiPlanarCollider;
typedef Ref<NiPlanarCollider> NiPlanarColliderRef;

class NiPlanarCollider : public NI_PLANAR_COLLIDER_PARENT {
public:
	NiPlanarCollider();
	~NiPlanarCollider();
	//Run-Time Type Information
	static const Type TYPE;
	virtual const Type & GetType() const { return TYPE; };
	virtual void Read( istream& in, list<uint> & link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version );
private:
	NI_PLANAR_COLLIDER_MEMBERS
};
#endif
