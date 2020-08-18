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

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL AUTODESK INC. BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#include "amcdata_storagepath.hpp"
#include "libmcdata_interfaceexception.hpp"

#include "common_utils.hpp"

namespace AMCData {
		
	CStoragePath::CStoragePath(const std::string& sDataPath)
		: m_sDataPath (sDataPath)
	{
		if (sDataPath.empty())
			throw ELibMCDataInterfaceException(LIBMCDATA_ERROR_INVALIDPARAM);
	}

	std::string CStoragePath::getStreamPath(const std::string& sStreamUUID)
	{
		return m_sDataPath + "/" + AMCCommon::CUtils::normalizeUUIDString(sStreamUUID) + ".stream";
	}

	std::string CStoragePath::getLogPath()
	{
		auto sTimeFileName = AMCCommon::CUtils::getCurrentTimeFileName();
		return m_sDataPath + "/log_" + sTimeFileName + ".db";
	}

	std::string CStoragePath::storageStreamStatusToString(eStorageStreamStatus eStatus)
	{
		switch (eStatus) {
		case sssNew: return "new";
		case sssValidated: return "validated";
		case sssArchived: return "archived";
		default: 
			throw ELibMCDataInterfaceException (LIBMCDATA_ERROR_INVALIDSTORAGESTREAMSTATUS);
		}
	}

	eStorageStreamStatus CStoragePath::stringToStorageStreamStatus(const std::string& sStatus)
	{
		if (sStatus == "new")
			return sssNew;
		if (sStatus == "validated")
			return sssValidated;
		if (sStatus == "archived")
			return sssArchived;

		throw ELibMCDataInterfaceException(LIBMCDATA_ERROR_INVALIDSTORAGESTREAMSTATUS);
	}

}


