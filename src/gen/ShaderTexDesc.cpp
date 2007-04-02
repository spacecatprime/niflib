/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/nifxml_niflib.py Python script.

#include "../../include/gen/ShaderTexDesc.h"
#include "../../include/gen/TexDesc.h"
#include "../../include/obj/NiSourceTexture.h"
using namespace Niflib;

//Constructor
ShaderTexDesc::ShaderTexDesc() : isUsed(false), unknownInt((unsigned int)0) {};

//Copy Constructor
ShaderTexDesc::ShaderTexDesc( const ShaderTexDesc & src ) {
	*this = src;
};

//Copy Operator
ShaderTexDesc & ShaderTexDesc::operator=( const ShaderTexDesc & src ) {
	this->isUsed = src.isUsed;
	this->textureData = src.textureData;
	this->unknownInt = src.unknownInt;
	return *this;
};

//Destructor
ShaderTexDesc::~ShaderTexDesc() {};
