// ----------------------------------------------------------------------------
// 
// IImageServices.h
// Copyright (c) 2014 Corona Labs Inc. All rights reserved.
// 
// Reviewers:
// 		Joshua Quick
//
// ----------------------------------------------------------------------------

#pragma once


#ifndef CORONALABS_CORONA_API_EXPORT
#	error This header file cannot be included by an external library.
#endif

#include "IImageDecoder.h"
#include "ITextRenderer.h"


namespace CoronaLabs { namespace Corona { namespace WinRT { namespace Interop { namespace Graphics {

/// <summary>Provides image decoders, encoders, and text renderers.</summary>
public interface class IImageServices
{
	/// <summary>Creates a new decoder used to decode images such as PNGs and JPEGs to uncompressed bitmaps.</summary>
	/// <returns>Returns a new image decoder object.</returns>
	IImageDecoder^ CreateImageDecoder();

//	IImageEncoder^ CreateImageEncoder();

	/// <summary>Creates a new renderer used to draw text to an uncompressed bitmap.</summary>
	/// <returns>Returns a new text rendering object.</returns>
	ITextRenderer^ CreateTextRenderer();
};

} } } } }	// namespace CoronaLabs::Corona::WinRT::Interop::Graphics
