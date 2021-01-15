/*++

Copyright (C) 2020 Autodesk Inc.

All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the Autodesk Inc. nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 'AS IS' AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL AUTODESK INC. BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


This file has been generated by the Automatic Component Toolkit (ACT) version 1.7.0-develop.

Abstract: This is an autogenerated C++-Header file with basic types in
order to allow an easy use of MC Driver S7Net 2.0

Interface version: 1.0.0

*/

#ifndef __LIBMCDRIVER_S7NET_TYPES_HEADER_CPP
#define __LIBMCDRIVER_S7NET_TYPES_HEADER_CPP


/*************************************************************************************************************************
 Scalar types definition
**************************************************************************************************************************/

#ifdef LIBMCDRIVER_S7NET_USELEGACYINTEGERTYPES

typedef unsigned char LibMCDriver_S7Net_uint8;
typedef unsigned short LibMCDriver_S7Net_uint16 ;
typedef unsigned int LibMCDriver_S7Net_uint32;
typedef unsigned long long LibMCDriver_S7Net_uint64;
typedef char LibMCDriver_S7Net_int8;
typedef short LibMCDriver_S7Net_int16;
typedef int LibMCDriver_S7Net_int32;
typedef long long LibMCDriver_S7Net_int64;

#else // LIBMCDRIVER_S7NET_USELEGACYINTEGERTYPES

#include <stdint.h>

typedef uint8_t LibMCDriver_S7Net_uint8;
typedef uint16_t LibMCDriver_S7Net_uint16;
typedef uint32_t LibMCDriver_S7Net_uint32;
typedef uint64_t LibMCDriver_S7Net_uint64;
typedef int8_t LibMCDriver_S7Net_int8;
typedef int16_t LibMCDriver_S7Net_int16;
typedef int32_t LibMCDriver_S7Net_int32;
typedef int64_t LibMCDriver_S7Net_int64 ;

#endif // LIBMCDRIVER_S7NET_USELEGACYINTEGERTYPES

typedef float LibMCDriver_S7Net_single;
typedef double LibMCDriver_S7Net_double;

/*************************************************************************************************************************
 General type definitions
**************************************************************************************************************************/

typedef LibMCDriver_S7Net_int32 LibMCDriver_S7NetResult;
typedef void * LibMCDriver_S7NetHandle;
typedef void * LibMCDriver_S7Net_pvoid;

/*************************************************************************************************************************
 Version for LibMCDriver_S7Net
**************************************************************************************************************************/

#define LIBMCDRIVER_S7NET_VERSION_MAJOR 1
#define LIBMCDRIVER_S7NET_VERSION_MINOR 0
#define LIBMCDRIVER_S7NET_VERSION_MICRO 0
#define LIBMCDRIVER_S7NET_VERSION_PRERELEASEINFO ""
#define LIBMCDRIVER_S7NET_VERSION_BUILDINFO ""

/*************************************************************************************************************************
 Error constants for LibMCDriver_S7Net
**************************************************************************************************************************/

#define LIBMCDRIVER_S7NET_SUCCESS 0
#define LIBMCDRIVER_S7NET_ERROR_NOTIMPLEMENTED 1
#define LIBMCDRIVER_S7NET_ERROR_INVALIDPARAM 2
#define LIBMCDRIVER_S7NET_ERROR_INVALIDCAST 3
#define LIBMCDRIVER_S7NET_ERROR_BUFFERTOOSMALL 4
#define LIBMCDRIVER_S7NET_ERROR_GENERICEXCEPTION 5
#define LIBMCDRIVER_S7NET_ERROR_COULDNOTLOADLIBRARY 6
#define LIBMCDRIVER_S7NET_ERROR_COULDNOTFINDLIBRARYEXPORT 7
#define LIBMCDRIVER_S7NET_ERROR_INCOMPATIBLEBINARYVERSION 8
#define LIBMCDRIVER_S7NET_ERROR_INVALIDSTATENAME 9
#define LIBMCDRIVER_S7NET_ERROR_DRIVERERROR 1000
#define LIBMCDRIVER_S7NET_ERROR_DRIVERNOTINITIALISED 1001
#define LIBMCDRIVER_S7NET_ERROR_DRIVERNOTCONNECTED 1002
#define LIBMCDRIVER_S7NET_ERROR_INVALIDDRIVERPROTOCOL 1003

/*************************************************************************************************************************
 Error strings for LibMCDriver_S7Net
**************************************************************************************************************************/

inline const char * LIBMCDRIVER_S7NET_GETERRORSTRING (LibMCDriver_S7NetResult nErrorCode) {
  switch (nErrorCode) {
    case LIBMCDRIVER_S7NET_SUCCESS: return "no error";
    case LIBMCDRIVER_S7NET_ERROR_NOTIMPLEMENTED: return "functionality not implemented";
    case LIBMCDRIVER_S7NET_ERROR_INVALIDPARAM: return "an invalid parameter was passed";
    case LIBMCDRIVER_S7NET_ERROR_INVALIDCAST: return "a type cast failed";
    case LIBMCDRIVER_S7NET_ERROR_BUFFERTOOSMALL: return "a provided buffer is too small";
    case LIBMCDRIVER_S7NET_ERROR_GENERICEXCEPTION: return "a generic exception occurred";
    case LIBMCDRIVER_S7NET_ERROR_COULDNOTLOADLIBRARY: return "the library could not be loaded";
    case LIBMCDRIVER_S7NET_ERROR_COULDNOTFINDLIBRARYEXPORT: return "a required exported symbol could not be found in the library";
    case LIBMCDRIVER_S7NET_ERROR_INCOMPATIBLEBINARYVERSION: return "the version of the binary interface does not match the bindings interface";
    case LIBMCDRIVER_S7NET_ERROR_INVALIDSTATENAME: return "invalid state name";
    case LIBMCDRIVER_S7NET_ERROR_DRIVERERROR: return "a driver error occured";
    case LIBMCDRIVER_S7NET_ERROR_DRIVERNOTINITIALISED: return "the driver is not initialised";
    case LIBMCDRIVER_S7NET_ERROR_DRIVERNOTCONNECTED: return "the driver is not connected";
    case LIBMCDRIVER_S7NET_ERROR_INVALIDDRIVERPROTOCOL: return "invalid driver protocol definition";
    default: return "unknown error";
  }
}

/*************************************************************************************************************************
 Declaration of handle classes 
**************************************************************************************************************************/

typedef LibMCDriver_S7NetHandle LibMCDriver_S7Net_Base;
typedef LibMCDriver_S7NetHandle LibMCDriver_S7Net_Driver;
typedef LibMCDriver_S7NetHandle LibMCDriver_S7Net_Driver_S7Net;

namespace LibMCDriver_S7Net {

} // namespace LibMCDriver_S7Net;

// define legacy C-names for enums, structs and function types

#endif // __LIBMCDRIVER_S7NET_TYPES_HEADER_CPP
