/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIPSYSMODIFIERACTIVECTLR_H_
#define _NIPSYSMODIFIERACTIVECTLR_H_

#include "xml_extract.h"
#include NI_P_SYS_MODIFIER_ACTIVE_CTLR_INCLUDE

/*
 * NiPSysModifierActiveCtlr
 */

class NiPSysModifierActiveCtlr;
typedef Ref<NiPSysModifierActiveCtlr> NiPSysModifierActiveCtlrRef;

class NiPSysModifierActiveCtlr : public NI_P_SYS_MODIFIER_ACTIVE_CTLR_PARENT {
public:
	NiPSysModifierActiveCtlr();
	~NiPSysModifierActiveCtlr();
	//Run-Time Type Information
	static const Type TYPE;
	virtual const Type & GetType() const { return TYPE; };
	virtual void Read( istream& in, list<uint> & link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version );
private:
	NI_P_SYS_MODIFIER_ACTIVE_CTLR_MEMBERS
};
#endif
