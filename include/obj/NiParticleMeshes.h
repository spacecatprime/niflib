/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIPARTICLEMESHES_H_
#define _NIPARTICLEMESHES_H_

#include "NiParticles.h"
namespace Niflib {

#include "../gen/obj_defines.h"

class NiParticleMeshes;
typedef Ref<NiParticleMeshes> NiParticleMeshesRef;

/*!
 * NiParticleMeshes - Mesh particle node?
 */

class NIFLIB_API NiParticleMeshes : public NI_PARTICLE_MESHES_PARENT {
public:
	NiParticleMeshes();
	~NiParticleMeshes();
	//Run-Time Type Information
	static const Type & TypeConst() { return TYPE; }
private:
	static const Type TYPE;
public:
	virtual void Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version );
	virtual list<NiObjectRef> GetRefs() const;
	virtual const Type & GetType() const;

protected:
	NI_PARTICLE_MESHES_MEMBERS
	STANDARD_INTERNAL_METHODS
};

}
#endif