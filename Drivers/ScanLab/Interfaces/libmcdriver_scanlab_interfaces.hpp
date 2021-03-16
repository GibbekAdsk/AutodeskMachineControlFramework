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

Abstract: This is an autogenerated C++ header file in order to allow easy
development of MC Driver ScanLab RTC5. The implementer of MC Driver ScanLab RTC5 needs to
derive concrete classes from the abstract classes in this header.

Interface version: 1.0.0

*/


#ifndef __LIBMCDRIVER_SCANLAB_CPPINTERFACES
#define __LIBMCDRIVER_SCANLAB_CPPINTERFACES

#include <string>
#include <memory>

#include "libmcdriver_scanlab_types.hpp"


#include "libmcenv_dynamic.hpp"

namespace LibMCDriver_ScanLab {
namespace Impl {

/**
 Forward declarations of class interfaces
*/
class IBase;
class IDriver;
class IRTCContext;
class IRTCSelector;
class IDriver_ScanLab;
class IDriver_ScanLab_RTC5;



/*************************************************************************************************************************
 Parameter Cache definitions
**************************************************************************************************************************/

class ParameterCache {
	public:
		virtual ~ParameterCache() {}
};

template <class T1> class ParameterCache_1 : public ParameterCache {
	private:
		T1 m_param1;
	public:
		ParameterCache_1 (const T1 & param1)
			: m_param1 (param1)
		{
		}

		void retrieveData (T1 & param1)
		{
			param1 = m_param1;
		}
};

template <class T1, class T2> class ParameterCache_2 : public ParameterCache {
	private:
		T1 m_param1;
		T2 m_param2;
	public:
		ParameterCache_2 (const T1 & param1, const T2 & param2)
			: m_param1 (param1), m_param2 (param2)
		{
		}

		void retrieveData (T1 & param1, T2 & param2)
		{
			param1 = m_param1;
			param2 = m_param2;
		}
};

template <class T1, class T2, class T3> class ParameterCache_3 : public ParameterCache {
	private:
		T1 m_param1;
		T2 m_param2;
		T3 m_param3;
	public:
		ParameterCache_3 (const T1 & param1, const T2 & param2, const T3 & param3)
			: m_param1 (param1), m_param2 (param2), m_param3 (param3)
		{
		}

		void retrieveData (T1 & param1, T2 & param2, T3 & param3)
		{
			param1 = m_param1;
			param2 = m_param2;
			param3 = m_param3;
		}
};

template <class T1, class T2, class T3, class T4> class ParameterCache_4 : public ParameterCache {
	private:
		T1 m_param1;
		T2 m_param2;
		T3 m_param3;
		T4 m_param4;
	public:
		ParameterCache_4 (const T1 & param1, const T2 & param2, const T3 & param3, const T4 & param4)
			: m_param1 (param1), m_param2 (param2), m_param3 (param3), m_param4 (param4)
		{
		}

		void retrieveData (T1 & param1, T2 & param2, T3 & param3, T4 & param4)
		{
			param1 = m_param1;
			param2 = m_param2;
			param3 = m_param3;
			param4 = m_param4;
		}
};

template <class T1, class T2, class T3, class T4, class T5> class ParameterCache_5 : public ParameterCache {
	private:
		T1 m_param1;
		T2 m_param2;
		T3 m_param3;
		T4 m_param4;
		T5 m_param5;
	public:
		ParameterCache_5 (const T1 & param1, const T2 & param2, const T3 & param3, const T4 & param4, const T5 & param5)
			: m_param1 (param1), m_param2 (param2), m_param3 (param3), m_param4 (param4), m_param5 (param5)
		{
		}

		void retrieveData (T1 & param1, T2 & param2, T3 & param3, T4 & param4, T5 & param5)
		{
			param1 = m_param1;
			param2 = m_param2;
			param3 = m_param3;
			param4 = m_param4;
			param5 = m_param5;
		}
};


/*************************************************************************************************************************
 Class interface for Base 
**************************************************************************************************************************/

class IBase {
private:
	std::unique_ptr<ParameterCache> m_ParameterCache;
public:
	/**
	* IBase::~IBase - virtual destructor of IBase
	*/
	virtual ~IBase() {};

	/**
	* IBase::ReleaseBaseClassInterface - Releases ownership of a base class interface. Deletes the reference, if necessary.
	* @param[in] pIBase - The base class instance to release
	*/
	static void ReleaseBaseClassInterface(IBase* pIBase)
	{
		if (pIBase) {
			pIBase->DecRefCount();
		}
	};

	/**
	* IBase::AcquireBaseClassInterface - Acquires shared ownership of a base class interface.
	* @param[in] pIBase - The base class instance to acquire
	*/
	static void AcquireBaseClassInterface(IBase* pIBase)
	{
		if (pIBase) {
			pIBase->IncRefCount();
		}
	};


	/**
	* IBase::GetLastErrorMessage - Returns the last error registered of this class instance
	* @param[out] sErrorMessage - Message of the last error registered
	* @return Has an error been registered already
	*/
	virtual bool GetLastErrorMessage(std::string & sErrorMessage) = 0;

	/**
	* IBase::ClearErrorMessages - Clears all registered messages of this class instance
	*/
	virtual void ClearErrorMessages() = 0;

	/**
	* IBase::RegisterErrorMessage - Registers an error message with this class instance
	* @param[in] sErrorMessage - Error message to register
	*/
	virtual void RegisterErrorMessage(const std::string & sErrorMessage) = 0;

	/**
	* IBase::IncRefCount - Increases the reference count of a class instance
	*/
	virtual void IncRefCount() = 0;

	/**
	* IBase::DecRefCount - Decreases the reference count of a class instance and free releases it, if the last reference has been removed
	* @return Has the object been released
	*/
	virtual bool DecRefCount() = 0;

	/**
	* IBase::_setCache - set parameter cache of object
	*/
	void _setCache(ParameterCache * pCache)
	{
		m_ParameterCache.reset(pCache);
	}

	/**
	* IBase::_getCache - returns parameter cache of object
	*/
	ParameterCache* _getCache()
	{
		return m_ParameterCache.get();
	}

};


/**
 Definition of a shared pointer class for IBase
*/
template<class T>
class IBaseSharedPtr : public std::shared_ptr<T>
{
public:
	explicit IBaseSharedPtr(T* t = nullptr)
		: std::shared_ptr<T>(t, IBase::ReleaseBaseClassInterface)
	{
		t->IncRefCount();
	}

	// Reset function, as it also needs to properly set the deleter.
	void reset(T* t = nullptr)
	{
		std::shared_ptr<T>::reset(t, IBase::ReleaseBaseClassInterface);
	}

	// Get-function that increases the Base class's reference count
	T* getCoOwningPtr()
	{
		T* t = this->get();
		t->IncRefCount();
		return t;
	}
};


typedef IBaseSharedPtr<IBase> PIBase;


/*************************************************************************************************************************
 Class interface for Driver 
**************************************************************************************************************************/

class IDriver : public virtual IBase {
public:
	/**
	* IDriver::Configure - Configures a driver with its specific configuration data.
	* @param[in] sConfigurationString - Configuration data of driver.
	*/
	virtual void Configure(const std::string & sConfigurationString) = 0;

	/**
	* IDriver::GetName - returns the name identifier of the driver
	* @return Name of the driver.
	*/
	virtual std::string GetName() = 0;

	/**
	* IDriver::GetType - returns the type identifier of the driver
	* @return Type of the driver.
	*/
	virtual std::string GetType() = 0;

	/**
	* IDriver::GetVersion - returns the version identifiers of the driver
	* @param[out] nMajor - Major version.
	* @param[out] nMinor - Minor version.
	* @param[out] nMicro - Micro version.
	* @param[out] sBuild - Build identifier.
	*/
	virtual void GetVersion(LibMCDriver_ScanLab_uint32 & nMajor, LibMCDriver_ScanLab_uint32 & nMinor, LibMCDriver_ScanLab_uint32 & nMicro, std::string & sBuild) = 0;

	/**
	* IDriver::GetHeaderInformation - returns the header information
	* @param[out] sNameSpace - NameSpace of the driver.
	* @param[out] sBaseName - BaseName of the driver.
	*/
	virtual void GetHeaderInformation(std::string & sNameSpace, std::string & sBaseName) = 0;

	/**
	* IDriver::QueryParameters - Stores the driver parameters in the driver environment.
	*/
	virtual void QueryParameters() = 0;

};

typedef IBaseSharedPtr<IDriver> PIDriver;


/*************************************************************************************************************************
 Class interface for RTCContext 
**************************************************************************************************************************/

class IRTCContext : public virtual IBase {
public:
	/**
	* IRTCContext::LoadFirmware - Loads card firmware from resource files.
	* @param[in] sFirmwareResource - resource name of the firmware program file.
	* @param[in] sFPGAResource - resource name of the firmware FPGA file.
	* @param[in] sAuxiliaryResource - resource name of the binary auxiliary file.
	*/
	virtual void LoadFirmware(const std::string & sFirmwareResource, const std::string & sFPGAResource, const std::string & sAuxiliaryResource) = 0;

	/**
	* IRTCContext::LoadCorrectionFile - Loads card calibration file from given resource file.
	* @param[in] nCorrectionFileBufferSize - Number of elements in buffer
	* @param[in] pCorrectionFileBuffer - binary data of the correction file.
	* @param[in] nTableNumber - Correction table index of card (1..8)
	* @param[in] nDimension - Is it a 2D or 3D correction file.
	*/
	virtual void LoadCorrectionFile(const LibMCDriver_ScanLab_uint64 nCorrectionFileBufferSize, const LibMCDriver_ScanLab_uint8 * pCorrectionFileBuffer, const LibMCDriver_ScanLab_uint32 nTableNumber, const LibMCDriver_ScanLab_uint32 nDimension) = 0;

	/**
	* IRTCContext::SelectCorrectionTable - Selects Correction Table on card.
	* @param[in] nTableNumberHeadA - Table Number for HeadA (1..8) or off (0).
	* @param[in] nTableNumberHeadB - Table Number for HeadA (1..8) or off (0).
	*/
	virtual void SelectCorrectionTable(const LibMCDriver_ScanLab_uint32 nTableNumberHeadA, const LibMCDriver_ScanLab_uint32 nTableNumberHeadB) = 0;

	/**
	* IRTCContext::ConfigureLists - Configures list buffer size.
	* @param[in] nSizeListA - Size of List A
	* @param[in] nSizeListB - Size of List B
	*/
	virtual void ConfigureLists(const LibMCDriver_ScanLab_uint32 nSizeListA, const LibMCDriver_ScanLab_uint32 nSizeListB) = 0;

	/**
	* IRTCContext::SetLaserMode - Sets laser mode of card.
	* @param[in] eLaserMode - Laser Mode Enum
	* @param[in] eLaserPort - Laser Port Enum
	*/
	virtual void SetLaserMode(const LibMCDriver_ScanLab::eLaserMode eLaserMode, const LibMCDriver_ScanLab::eLaserPort eLaserPort) = 0;

	/**
	* IRTCContext::DisableAutoLaserControl - Disables automatic laser control.
	*/
	virtual void DisableAutoLaserControl() = 0;

	/**
	* IRTCContext::SetLaserControlParameters - Sets laser control parameters of card.
	* @param[in] bDisableLaser - Laser is disabled
	* @param[in] bFinishLaserPulseAfterOn - Finish laser pulse after LaserOn
	* @param[in] bPhaseShiftOfLaserSignal - 180 degree phase shift of Laser signal
	* @param[in] bLaserOnSignalLowActive - Set Laser On Signal Low Active
	* @param[in] bLaserHalfSignalsLowActive - Set Laser Half Signal Low Active
	* @param[in] bSetDigitalInOneHighActive - Set Digital In 1 high Active
	* @param[in] bOutputSynchronizationActive - Output synchronization active
	*/
	virtual void SetLaserControlParameters(const bool bDisableLaser, const bool bFinishLaserPulseAfterOn, const bool bPhaseShiftOfLaserSignal, const bool bLaserOnSignalLowActive, const bool bLaserHalfSignalsLowActive, const bool bSetDigitalInOneHighActive, const bool bOutputSynchronizationActive) = 0;

	/**
	* IRTCContext::SetLaserPulsesInBits - Sets laser control pulse interval (in 1/64th microseconds)
	* @param[in] nHalfPeriod - Half Output period in 1/64th microseconds
	* @param[in] nPulseLength - Pulse Length in 1/64th microseconds
	*/
	virtual void SetLaserPulsesInBits(const LibMCDriver_ScanLab_uint32 nHalfPeriod, const LibMCDriver_ScanLab_uint32 nPulseLength) = 0;

	/**
	* IRTCContext::SetLaserPulsesInMicroSeconds - Sets laser control pulse interval (in microseconds)
	* @param[in] dHalfPeriod - Half Output period in microseconds
	* @param[in] dPulseLength - Pulse Length in microseconds
	*/
	virtual void SetLaserPulsesInMicroSeconds(const LibMCDriver_ScanLab_double dHalfPeriod, const LibMCDriver_ScanLab_double dPulseLength) = 0;

	/**
	* IRTCContext::SetStandbyInBits - Sets standby pulse interval (in 1/64th microseconds)
	* @param[in] nHalfPeriod - Half Output period in 1/64th microseconds
	* @param[in] nPulseLength - Pulse Length in 1/64th microseconds
	*/
	virtual void SetStandbyInBits(const LibMCDriver_ScanLab_uint32 nHalfPeriod, const LibMCDriver_ScanLab_uint32 nPulseLength) = 0;

	/**
	* IRTCContext::SetStandbyInMicroSeconds - Sets laser control pulse interval (in microseconds)
	* @param[in] dHalfPeriod - Half Output period in microseconds
	* @param[in] dPulseLength - Pulse Length in microseconds
	*/
	virtual void SetStandbyInMicroSeconds(const LibMCDriver_ScanLab_double dHalfPeriod, const LibMCDriver_ScanLab_double dPulseLength) = 0;

	/**
	* IRTCContext::GetSerialNumber - Returns serial number of card
	* @return Returns serial number of board.
	*/
	virtual LibMCDriver_ScanLab_uint32 GetSerialNumber() = 0;

	/**
	* IRTCContext::SetStartList - Opens the list to write
	* @param[in] nListIndex - Index of List (1 or 2).
	* @param[in] nPosition - Relative Position in List.
	*/
	virtual void SetStartList(const LibMCDriver_ScanLab_uint32 nListIndex, const LibMCDriver_ScanLab_uint32 nPosition) = 0;

	/**
	* IRTCContext::SetEndOfList - Closes the currently open list
	*/
	virtual void SetEndOfList() = 0;

	/**
	* IRTCContext::ExecuteList - Executes the list
	* @param[in] nListIndex - Index of List (1 or 2).
	* @param[in] nPosition - Relative Position in List.
	*/
	virtual void ExecuteList(const LibMCDriver_ScanLab_uint32 nListIndex, const LibMCDriver_ScanLab_uint32 nPosition) = 0;

	/**
	* IRTCContext::SetAutoChangePos - Sets the AutoChange Position of the currently not running list.
	* @param[in] nPosition - Relative Position in List.
	*/
	virtual void SetAutoChangePos(const LibMCDriver_ScanLab_uint32 nPosition) = 0;

	/**
	* IRTCContext::SetDelays - Sets the laser delays (on the list)
	* @param[in] nMarkDelay - Mark delay in microseconds (MUST be multiple of 10)
	* @param[in] nJumpDelay - Jump delay in microseconds (MUST be multiple of 10)
	* @param[in] nPolygonDelay - Polygon delay in microseconds (MUST be multiple of 10)
	*/
	virtual void SetDelays(const LibMCDriver_ScanLab_uint32 nMarkDelay, const LibMCDriver_ScanLab_uint32 nJumpDelay, const LibMCDriver_ScanLab_uint32 nPolygonDelay) = 0;

	/**
	* IRTCContext::SetLaserDelaysInMicroseconds - Sets the laser delays (on the list)
	* @param[in] dLaserOnDelay - LaserOn delay in microseconds
	* @param[in] dLaserOffDelay - LaserOff delay in microseconds
	*/
	virtual void SetLaserDelaysInMicroseconds(const LibMCDriver_ScanLab_double dLaserOnDelay, const LibMCDriver_ScanLab_double dLaserOffDelay) = 0;

	/**
	* IRTCContext::SetLaserDelaysInBits - Sets the laser delays (on the list)
	* @param[in] nLaserOnDelay - LaserOn delay in bits (1/64th microseconds)
	* @param[in] nLaserOffDelay - LaserOff delay in bits (1/64th microseconds)
	*/
	virtual void SetLaserDelaysInBits(const LibMCDriver_ScanLab_uint32 nLaserOnDelay, const LibMCDriver_ScanLab_uint32 nLaserOffDelay) = 0;

	/**
	* IRTCContext::DrawPolyline - Writes a polyline into the open list
	* @param[in] nPointsBufferSize - Number of elements in buffer
	* @param[in] pPointsBuffer - Points of polyline to draw.
	* @param[in] fMarkSpeed - Mark speed in mm/s
	* @param[in] fJumpSpeed - Mark speed in mm/s
	* @param[in] fPower - Laser power in percent
	* @param[in] fZValue - Focus Z Value
	*/
	virtual void DrawPolyline(const LibMCDriver_ScanLab_uint64 nPointsBufferSize, const LibMCDriver_ScanLab::sPoint2D * pPointsBuffer, const LibMCDriver_ScanLab_single fMarkSpeed, const LibMCDriver_ScanLab_single fJumpSpeed, const LibMCDriver_ScanLab_single fPower, const LibMCDriver_ScanLab_single fZValue) = 0;

	/**
	* IRTCContext::DrawHatches - Writes a list of hatches into the open list
	* @param[in] nHatchesBufferSize - Number of elements in buffer
	* @param[in] pHatchesBuffer - Hatches to draw.
	* @param[in] fMarkSpeed - Mark speed in mm/s
	* @param[in] fJumpSpeed - Mark speed in mm/s
	* @param[in] fPower - Laser power in percent
	* @param[in] fZValue - Focus Z Value
	*/
	virtual void DrawHatches(const LibMCDriver_ScanLab_uint64 nHatchesBufferSize, const LibMCDriver_ScanLab::sHatch2D * pHatchesBuffer, const LibMCDriver_ScanLab_single fMarkSpeed, const LibMCDriver_ScanLab_single fJumpSpeed, const LibMCDriver_ScanLab_single fPower, const LibMCDriver_ScanLab_single fZValue) = 0;

	/**
	* IRTCContext::AddCustomDelay - Adds a custom delay to the list
	* @param[in] nDelay - Custom delay value in microseconds (MUST be multiple of 10)
	*/
	virtual void AddCustomDelay(const LibMCDriver_ScanLab_uint32 nDelay) = 0;

	/**
	* IRTCContext::GetCorrectionFactor - Returns correction factor of Card Calibration (in bits per mm)
	* @return CorrectionFactor
	*/
	virtual LibMCDriver_ScanLab_double GetCorrectionFactor() = 0;

	/**
	* IRTCContext::GetStatus - Returns status of list execution
	* @param[out] bBusy - Execution is busy
	* @param[out] nPosition - Returns current executed position
	*/
	virtual void GetStatus(bool & bBusy, LibMCDriver_ScanLab_uint32 & nPosition) = 0;

	/**
	* IRTCContext::GetHeadStatus - Returns status of scan head
	* @param[in] nHeadNo - Head Number
	* @param[out] bPositionXisOK - Position X is ok
	* @param[out] bPositionYisOK - Position Y is ok
	* @param[out] bTemperatureisOK - Temperature is ok
	* @param[out] bPowerisOK - Power is ok
	*/
	virtual void GetHeadStatus(const LibMCDriver_ScanLab_uint32 nHeadNo, bool & bPositionXisOK, bool & bPositionYisOK, bool & bTemperatureisOK, bool & bPowerisOK) = 0;

	/**
	* IRTCContext::GetInputPointer - returns current input list position
	* @return Returns current position of open list
	*/
	virtual LibMCDriver_ScanLab_uint32 GetInputPointer() = 0;

	/**
	* IRTCContext::GetRTCVersion - Returns version information of the RTC Card
	* @param[out] nRTCVersion - RTC Card Version
	* @param[out] nRTCType - RTC Card Type
	* @param[out] nDLLVersion - RTC DLL Version
	* @param[out] nHEXVersion - RTC HEX Version
	* @param[out] nBIOSVersion - RTC BIOS Version
	*/
	virtual void GetRTCVersion(LibMCDriver_ScanLab_uint32 & nRTCVersion, LibMCDriver_ScanLab_uint32 & nRTCType, LibMCDriver_ScanLab_uint32 & nDLLVersion, LibMCDriver_ScanLab_uint32 & nHEXVersion, LibMCDriver_ScanLab_uint32 & nBIOSVersion) = 0;

};

typedef IBaseSharedPtr<IRTCContext> PIRTCContext;


/*************************************************************************************************************************
 Class interface for RTCSelector 
**************************************************************************************************************************/

class IRTCSelector : public virtual IBase {
public:
	/**
	* IRTCSelector::SearchCards - Searches Ethernet Cards
	* @param[in] sIP - IP Network Address.
	* @param[in] sNetmask - IP Netmask Address.
	* @param[in] nTimeout - Time out in microseconds.
	* @return Returns how many ethernet cards have been found.
	*/
	virtual LibMCDriver_ScanLab_uint32 SearchCards(const std::string & sIP, const std::string & sNetmask, const LibMCDriver_ScanLab_uint32 nTimeout) = 0;

	/**
	* IRTCSelector::SearchCardsByRange - Searches Ethernet Cards
	* @param[in] sStartIP - IP Network Address.
	* @param[in] sEndIP - IP Network Address.
	* @param[in] nTimeout - Time out in microseconds.
	* @return Returns how many ethernet cards have been found.
	*/
	virtual LibMCDriver_ScanLab_uint32 SearchCardsByRange(const std::string & sStartIP, const std::string & sEndIP, const LibMCDriver_ScanLab_uint32 nTimeout) = 0;

	/**
	* IRTCSelector::GetCardCount - Returns number of detected Cards
	* @return Returns how many cards have been found.
	*/
	virtual LibMCDriver_ScanLab_uint32 GetCardCount() = 0;

	/**
	* IRTCSelector::GetEthernetCardCount - Returns number of found ethernet cards
	* @return Returns how many ethernet cards have been found.
	*/
	virtual LibMCDriver_ScanLab_uint32 GetEthernetCardCount() = 0;

	/**
	* IRTCSelector::AcquireCard - Acquires a card and returns an RTCContext instance.
	* @param[in] nNumber - Number of Card (1-based). Must be between 1 and CardCount.
	* @return New Context# instance
	*/
	virtual IRTCContext * AcquireCard(const LibMCDriver_ScanLab_uint32 nNumber) = 0;

	/**
	* IRTCSelector::AcquireCardBySerial - Acquires a card and returns an RTCContext instance.
	* @param[in] nSerialNumber - Desired Serial Number of card.
	* @return New Context# instance
	*/
	virtual IRTCContext * AcquireCardBySerial(const LibMCDriver_ScanLab_uint32 nSerialNumber) = 0;

	/**
	* IRTCSelector::AcquireEthernetCard - Acquires an ethernet card and returns an RTCContext instance.
	* @param[in] nNumber - Number of Card (1-based). Must be between 1 and EthernetCardCount.
	* @return New Context# instance
	*/
	virtual IRTCContext * AcquireEthernetCard(const LibMCDriver_ScanLab_uint32 nNumber) = 0;

	/**
	* IRTCSelector::AcquireEthernetCardBySerial - Acquires an ethernet card and returns an RTCContext instance.
	* @param[in] nSerialNumber - Desired Serial Number of card.
	* @return New Context# instance
	*/
	virtual IRTCContext * AcquireEthernetCardBySerial(const LibMCDriver_ScanLab_uint32 nSerialNumber) = 0;

};

typedef IBaseSharedPtr<IRTCSelector> PIRTCSelector;


/*************************************************************************************************************************
 Class interface for Driver_ScanLab 
**************************************************************************************************************************/

class IDriver_ScanLab : public virtual IDriver {
public:
	/**
	* IDriver_ScanLab::LoadSDK - Initializes the ScanLab SDK.
	* @param[in] sResourceName - Resource name of Scanlab DLL
	*/
	virtual void LoadSDK(const std::string & sResourceName) = 0;

	/**
	* IDriver_ScanLab::CreateRTCSelector - Creates and initializes a new RTC selector singleton. Should only be called once per Process.
	* @return New Selector instance
	*/
	virtual IRTCSelector * CreateRTCSelector() = 0;

};

typedef IBaseSharedPtr<IDriver_ScanLab> PIDriver_ScanLab;


/*************************************************************************************************************************
 Class interface for Driver_ScanLab_RTC5 
**************************************************************************************************************************/

class IDriver_ScanLab_RTC5 : public virtual IDriver_ScanLab {
public:
	/**
	* IDriver_ScanLab_RTC5::Initialise - Initializes the RTC5 Scanner Driver.
	* @param[in] sIP - IP Network Address. Empty string for local card.
	* @param[in] sNetmask - IP Netmask Address. Empty string for local card.
	* @param[in] nTimeout - Time out in microseconds.
	* @param[in] nSerialNumber - Desired Serial Number of card.
	*/
	virtual void Initialise(const std::string & sIP, const std::string & sNetmask, const LibMCDriver_ScanLab_uint32 nTimeout, const LibMCDriver_ScanLab_uint32 nSerialNumber) = 0;

	/**
	* IDriver_ScanLab_RTC5::LoadFirmware - Loads the firmware from the driver resources.
	* @param[in] sFirmwareResource - resource name of the firmware program file.
	* @param[in] sFPGAResource - resource name of the firmware FPGA file.
	* @param[in] sAuxiliaryResource - resource name of the binary auxiliary file.
	*/
	virtual void LoadFirmware(const std::string & sFirmwareResource, const std::string & sFPGAResource, const std::string & sAuxiliaryResource) = 0;

	/**
	* IDriver_ScanLab_RTC5::SetCorrectionFile - Sets the correction file stream.
	* @param[in] nCorrectionFileBufferSize - Number of elements in buffer
	* @param[in] pCorrectionFileBuffer - binary data of the correction file.
	* @param[in] nTableNumber - Correction table index of card (1..8)
	* @param[in] nDimension - Is it a 2D or 3D correction file.
	* @param[in] nTableNumberHeadA - Table number of Head A.
	* @param[in] nTableNumberHeadB - Table number of Head B.
	*/
	virtual void SetCorrectionFile(const LibMCDriver_ScanLab_uint64 nCorrectionFileBufferSize, const LibMCDriver_ScanLab_uint8 * pCorrectionFileBuffer, const LibMCDriver_ScanLab_uint32 nTableNumber, const LibMCDriver_ScanLab_uint32 nDimension, const LibMCDriver_ScanLab_uint32 nTableNumberHeadA, const LibMCDriver_ScanLab_uint32 nTableNumberHeadB) = 0;

	/**
	* IDriver_ScanLab_RTC5::ConfigureLaserMode - Configures the laser mode.
	* @param[in] eLaserMode - Laser Mode Enum
	* @param[in] eLaserPort - Laser Port Enum
	* @param[in] dMaxLaserPower - Maximum laser power.
	* @param[in] bFinishLaserPulseAfterOn - Finish laser pulse after LaserOn
	* @param[in] bPhaseShiftOfLaserSignal - 180 degree phase shift of Laser signal
	* @param[in] bLaserOnSignalLowActive - Set Laser On Signal Low Active
	* @param[in] bLaserHalfSignalsLowActive - Set Laser Half Signal Low Active
	* @param[in] bSetDigitalInOneHighActive - Set Digital In 1 high Active
	* @param[in] bOutputSynchronizationActive - Output synchronization active
	*/
	virtual void ConfigureLaserMode(const LibMCDriver_ScanLab::eLaserMode eLaserMode, const LibMCDriver_ScanLab::eLaserPort eLaserPort, const LibMCDriver_ScanLab_double dMaxLaserPower, const bool bFinishLaserPulseAfterOn, const bool bPhaseShiftOfLaserSignal, const bool bLaserOnSignalLowActive, const bool bLaserHalfSignalsLowActive, const bool bSetDigitalInOneHighActive, const bool bOutputSynchronizationActive) = 0;

	/**
	* IDriver_ScanLab_RTC5::DrawLayer - Draws a layer of a build stream. Blocks until the layer is drawn.
	* @param[in] sStreamUUID - UUID of the build stream. Must have been loaded in memory by the system.
	* @param[in] nLayerIndex - Layer index of the build file.
	*/
	virtual void DrawLayer(const std::string & sStreamUUID, const LibMCDriver_ScanLab_uint32 nLayerIndex) = 0;

};

typedef IBaseSharedPtr<IDriver_ScanLab_RTC5> PIDriver_ScanLab_RTC5;


/*************************************************************************************************************************
 Global functions declarations
**************************************************************************************************************************/
class CWrapper {
public:
	// Injected Components
	static LibMCEnv::PWrapper sPLibMCEnvWrapper;

	/**
	* Ilibmcdriver_scanlab::GetVersion - retrieves the binary version of this library.
	* @param[out] nMajor - returns the major version of this library
	* @param[out] nMinor - returns the minor version of this library
	* @param[out] nMicro - returns the micro version of this library
	*/
	static void GetVersion(LibMCDriver_ScanLab_uint32 & nMajor, LibMCDriver_ScanLab_uint32 & nMinor, LibMCDriver_ScanLab_uint32 & nMicro);

	/**
	* Ilibmcdriver_scanlab::GetLastError - Returns the last error recorded on this object
	* @param[in] pInstance - Instance Handle
	* @param[out] sErrorMessage - Message of the last error
	* @return Is there a last error to query
	*/
	static bool GetLastError(IBase* pInstance, std::string & sErrorMessage);

	/**
	* Ilibmcdriver_scanlab::ReleaseInstance - Releases shared ownership of an Instance
	* @param[in] pInstance - Instance Handle
	*/
	static void ReleaseInstance(IBase* pInstance);

	/**
	* Ilibmcdriver_scanlab::AcquireInstance - Acquires shared ownership of an Instance
	* @param[in] pInstance - Instance Handle
	*/
	static void AcquireInstance(IBase* pInstance);

	/**
	* Ilibmcdriver_scanlab::CreateDriver - Creates a driver instance with a specific name.
	* @param[in] sName - Name of driver to be created.
	* @param[in] sType - Type of driver to be created.
	* @param[in] pDriverEnvironment - Environment of this driver.
	* @return New Driver instance
	*/
	static IDriver * CreateDriver(const std::string & sName, const std::string & sType, LibMCEnv::PDriverEnvironment pDriverEnvironment);

};

LibMCDriver_ScanLabResult LibMCDriver_ScanLab_GetProcAddress (const char * pProcName, void ** ppProcAddress);

} // namespace Impl
} // namespace LibMCDriver_ScanLab

#endif // __LIBMCDRIVER_SCANLAB_CPPINTERFACES
