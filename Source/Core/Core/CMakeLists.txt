set(SRCS	ActionReplay.cpp
			Analytics.cpp
			ARDecrypt.cpp
			BootManager.cpp
			ConfigManager.cpp
			Core.cpp
			CoreTiming.cpp
			DSPEmulator.cpp
			ec_wii.cpp
			GeckoCodeConfig.cpp
			GeckoCode.cpp
			HotkeyManager.cpp
			MemTools.cpp
			Movie.cpp
			NetPlayClient.cpp
			NetPlayServer.cpp
			PatchEngine.cpp
			State.cpp
			Boot/Boot_BS2Emu.cpp
			Boot/Boot.cpp
			Boot/Boot_DOL.cpp
			Boot/Boot_ELF.cpp
			Boot/Boot_WiiWAD.cpp
			Boot/ElfReader.cpp
			Debugger/Debugger_SymbolMap.cpp
			Debugger/Dump.cpp
			Debugger/PPCDebugInterface.cpp
			DSP/DSPAssembler.cpp
			DSP/DSPDisassembler.cpp
			DSP/DSPAccelerator.cpp
			DSP/DSPCaptureLogger.cpp
			DSP/DSPHWInterface.cpp
			DSP/DSPMemoryMap.cpp
			DSP/DSPStacks.cpp
			DSP/DSPAnalyzer.cpp
			DSP/DSPCodeUtil.cpp
			DSP/LabelMap.cpp
			DSP/DSPCore.cpp
			DSP/DSPTables.cpp
			DSP/Interpreter/DSPIntArithmetic.cpp
			DSP/Interpreter/DSPIntBranch.cpp
			DSP/Interpreter/DSPIntCCUtil.cpp
			DSP/Interpreter/DSPInterpreter.cpp
			DSP/Interpreter/DSPIntExtOps.cpp
			DSP/Interpreter/DSPIntLoadStore.cpp
			DSP/Interpreter/DSPIntMisc.cpp
			DSP/Interpreter/DSPIntMultiplier.cpp
			DSP/Jit/DSPEmitter.cpp
			DSP/Jit/DSPJitRegCache.cpp
			DSP/Jit/DSPJitExtOps.cpp
			DSP/Jit/DSPJitBranch.cpp
			DSP/Jit/DSPJitCCUtil.cpp
			DSP/Jit/DSPJitArithmetic.cpp
			DSP/Jit/DSPJitLoadStore.cpp
			DSP/Jit/DSPJitMultiplier.cpp
			DSP/Jit/DSPJitUtil.cpp
			DSP/Jit/DSPJitMisc.cpp
			FifoPlayer/FifoAnalyzer.cpp
			FifoPlayer/FifoDataFile.cpp
			FifoPlayer/FifoPlaybackAnalyzer.cpp
			FifoPlayer/FifoPlayer.cpp
			FifoPlayer/FifoRecordAnalyzer.cpp
			FifoPlayer/FifoRecorder.cpp
			HLE/HLE.cpp
			HLE/HLE_Misc.cpp
			HLE/HLE_OS.cpp
			HW/AudioInterface.cpp
			HW/CPU.cpp
			HW/DSP.cpp
			HW/DSPHLE/UCodes/AX.cpp
			HW/DSPHLE/UCodes/AXWii.cpp
			HW/DSPHLE/UCodes/CARD.cpp
			HW/DSPHLE/UCodes/GBA.cpp
			HW/DSPHLE/UCodes/INIT.cpp
			HW/DSPHLE/UCodes/ROM.cpp
			HW/DSPHLE/UCodes/UCodes.cpp
			HW/DSPHLE/UCodes/Zelda.cpp
			HW/DSPHLE/MailHandler.cpp
			HW/DSPHLE/DSPHLE.cpp
			HW/DSPLLE/DSPDebugInterface.cpp
			HW/DSPLLE/DSPHost.cpp
			HW/DSPLLE/DSPSymbols.cpp
			HW/DSPLLE/DSPLLEGlobals.cpp
			HW/DSPLLE/DSPLLE.cpp
			HW/DSPLLE/DSPLLETools.cpp
			HW/DVDInterface.cpp
			HW/DVDThread.cpp
			HW/EXI_Channel.cpp
			HW/EXI.cpp
			HW/EXI_Device.cpp
			HW/EXI_DeviceAD16.cpp
			HW/EXI_DeviceAGP.cpp
			HW/EXI_DeviceEthernet.cpp
			HW/EXI_DeviceGecko.cpp
			HW/EXI_DeviceIPL.cpp
			HW/EXI_DeviceMemoryCard.cpp
			HW/EXI_DeviceSlippi.cpp
			HW/EXI_DeviceMic.cpp
			HW/GCKeyboard.cpp
			HW/GCKeyboardEmu.cpp
			HW/GCMemcard.cpp
			HW/GCMemcardDirectory.cpp
			HW/GCMemcardRaw.cpp
			HW/GCPad.cpp
			HW/GCPadEmu.cpp
			HW/GPFifo.cpp
			HW/HW.cpp
			HW/Memmap.cpp
			HW/MemoryInterface.cpp
			HW/MMIO.cpp
			HW/ProcessorInterface.cpp
			HW/SI.cpp
			HW/SI_Device.cpp
			HW/SI_DeviceDanceMat.cpp
			HW/SI_DeviceGBA.cpp
			HW/SI_DeviceGCAdapter.cpp
			HW/SI_DeviceGCController.cpp
			HW/SI_DeviceGCSteeringWheel.cpp
			HW/SI_DeviceKeyboard.cpp
			HW/Sram.cpp
			HW/StreamADPCM.cpp
			HW/SystemTimers.cpp
			HW/VideoInterface.cpp
			HW/WII_IPC.cpp
			HW/Wiimote.cpp
			HW/WiimoteEmu/WiimoteEmu.cpp
			HW/WiimoteEmu/Attachment/Classic.cpp
			HW/WiimoteEmu/Attachment/Attachment.cpp
			HW/WiimoteEmu/Attachment/Nunchuk.cpp
			HW/WiimoteEmu/Attachment/Drums.cpp
			HW/WiimoteEmu/Attachment/Guitar.cpp
			HW/WiimoteEmu/Attachment/Turntable.cpp
			HW/WiimoteEmu/EmuSubroutines.cpp
			HW/WiimoteEmu/Encryption.cpp
			HW/WiimoteEmu/Speaker.cpp
			HW/WiimoteReal/WiimoteReal.cpp
			HW/WiiSaveCrypted.cpp
			IPC_HLE/ICMPLin.cpp
			IPC_HLE/NWC24Config.cpp
			IPC_HLE/WII_IPC_HLE.cpp
			IPC_HLE/WII_IPC_HLE_Device.cpp
			IPC_HLE/WII_IPC_HLE_Device_stub.cpp
			IPC_HLE/WII_IPC_HLE_Device_DI.cpp
			IPC_HLE/WII_IPC_HLE_Device_es.cpp
			IPC_HLE/WII_IPC_HLE_Device_FileIO.cpp
			IPC_HLE/WII_IPC_HLE_Device_fs.cpp
			IPC_HLE/WII_Socket.cpp
			IPC_HLE/WII_IPC_HLE_Device_net.cpp
			IPC_HLE/WII_IPC_HLE_Device_net_ssl.cpp
			IPC_HLE/WII_IPC_HLE_Device_stm.cpp
			IPC_HLE/WII_IPC_HLE_Device_sdio_slot0.cpp
			IPC_HLE/WII_IPC_HLE_Device_usb_bt_base.cpp
			IPC_HLE/WII_IPC_HLE_Device_usb_bt_emu.cpp
			IPC_HLE/WII_IPC_HLE_Device_usb_bt_stub.cpp
			IPC_HLE/WII_IPC_HLE_Device_usb_kbd.cpp
			IPC_HLE/WII_IPC_HLE_Device_usb_ven.cpp
			IPC_HLE/WII_IPC_HLE_WiiMote.cpp
			IPC_HLE/WiiMote_HID_Attr.cpp
			IPC_HLE/WiiNetConfig.cpp
			PowerPC/MMU.cpp
			PowerPC/PowerPC.cpp
			PowerPC/PPCAnalyst.cpp
			PowerPC/PPCCache.cpp
			PowerPC/PPCSymbolDB.cpp
			PowerPC/PPCTables.cpp
			PowerPC/Profiler.cpp
			PowerPC/SignatureDB.cpp
			PowerPC/JitInterface.cpp
			PowerPC/Interpreter/Interpreter_Branch.cpp
			PowerPC/Interpreter/Interpreter.cpp
			PowerPC/Interpreter/Interpreter_FloatingPoint.cpp
			PowerPC/Interpreter/Interpreter_Integer.cpp
			PowerPC/Interpreter/Interpreter_LoadStore.cpp
			PowerPC/Interpreter/Interpreter_LoadStorePaired.cpp
			PowerPC/Interpreter/Interpreter_Paired.cpp
			PowerPC/Interpreter/Interpreter_SystemRegisters.cpp
			PowerPC/Interpreter/Interpreter_Tables.cpp
			PowerPC/JitCommon/JitAsmCommon.cpp
			PowerPC/JitCommon/JitBase.cpp
			PowerPC/JitCommon/JitCache.cpp
			PowerPC/CachedInterpreter.cpp
			PowerPC/JitILCommon/IR.cpp
			PowerPC/JitILCommon/JitILBase_Branch.cpp
			PowerPC/JitILCommon/JitILBase_LoadStore.cpp
			PowerPC/JitILCommon/JitILBase_SystemRegisters.cpp
			PowerPC/JitILCommon/JitILBase_LoadStoreFloating.cpp
			PowerPC/JitILCommon/JitILBase_LoadStorePaired.cpp
			PowerPC/JitILCommon/JitILBase_Paired.cpp
			PowerPC/JitILCommon/JitILBase_FloatingPoint.cpp
			PowerPC/JitILCommon/JitILBase_Integer.cpp
			)

if(_M_X86)
	set(SRCS ${SRCS}
			PowerPC/Jit64IL/IR_X86.cpp
			PowerPC/Jit64IL/JitIL.cpp
			PowerPC/Jit64IL/JitIL_Tables.cpp
			PowerPC/Jit64/Jit64_Tables.cpp
			PowerPC/Jit64/JitAsm.cpp
			PowerPC/Jit64/Jit_Branch.cpp
			PowerPC/Jit64/Jit.cpp
			PowerPC/Jit64/Jit_FloatingPoint.cpp
			PowerPC/Jit64/Jit_Integer.cpp
			PowerPC/Jit64/Jit_LoadStore.cpp
			PowerPC/Jit64/Jit_LoadStoreFloating.cpp
			PowerPC/Jit64/Jit_LoadStorePaired.cpp
			PowerPC/Jit64/Jit_Paired.cpp
			PowerPC/Jit64/JitRegCache.cpp
			PowerPC/Jit64/Jit_SystemRegisters.cpp
			PowerPC/Jit64Common/Jit64AsmCommon.cpp
			PowerPC/JitCommon/JitBackpatch.cpp
			PowerPC/JitCommon/Jit_Util.cpp
			PowerPC/JitCommon/TrampolineCache.cpp)
elseif(_M_ARM_64)
	set(SRCS ${SRCS}
	         PowerPC/JitArm64/Jit.cpp
	         PowerPC/JitArm64/JitAsm.cpp
	         PowerPC/JitArm64/JitArm64Cache.cpp
	         PowerPC/JitArm64/JitArm64_RegCache.cpp
	         PowerPC/JitArm64/JitArm64_BackPatch.cpp
	         PowerPC/JitArm64/JitArm64_Branch.cpp
	         PowerPC/JitArm64/JitArm64_FloatingPoint.cpp
	         PowerPC/JitArm64/JitArm64_Integer.cpp
	         PowerPC/JitArm64/JitArm64_LoadStore.cpp
	         PowerPC/JitArm64/JitArm64_LoadStoreFloating.cpp
	         PowerPC/JitArm64/JitArm64_Paired.cpp
	         PowerPC/JitArm64/JitArm64_LoadStorePaired.cpp
	         PowerPC/JitArm64/JitArm64_SystemRegisters.cpp
	         PowerPC/JitArm64/Jit_Util.cpp
	         PowerPC/JitArm64/JitArm64_Tables.cpp)
endif()

set(LIBS
	audiocommon
	bdisasm
	common
	cubeb
	discio
	enet
	inputcommon
	${LZO}
	sfml-network
	sfml-system
	SlippiLib
	videoogl
	videosoftware
	z
	)

if(LIBUSB_FOUND)
	# Using shared LibUSB
	set(LIBS	${LIBS}	${LIBUSB_LIBRARIES})
	set(SRCS	${SRCS}	IPC_HLE/WII_IPC_HLE_Device_hid.cpp
	        	       	IPC_HLE/WII_IPC_HLE_Device_usb_bt_real.cpp)
endif(LIBUSB_FOUND)

if(NOT APPLE)
	set(LIBS ${LIBS} videovulkan)
endif()

set(LIBS ${LIBS} ${MBEDTLS_LIBRARIES})

if(WIN32)
	set(SRCS ${SRCS} HW/BBA-TAP/TAP_Win32.cpp HW/WiimoteReal/IOWin.cpp)
elseif(APPLE)
	set(SRCS ${SRCS} HW/BBA-TAP/TAP_Apple.cpp HW/WiimoteReal/IOdarwin.mm)
	set(LIBS ${LIBS}
		${IOB_LIBRARY})
elseif(UNIX)
	set(SRCS ${SRCS} HW/BBA-TAP/TAP_Unix.cpp)
	if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux" AND BLUEZ_FOUND)
		set(SRCS ${SRCS} HW/WiimoteReal/IOLinux.cpp)
		set(LIBS ${LIBS} bluetooth)
	elseif(ANDROID)
		set(SRCS ${SRCS} HW/WiimoteReal/IOAndroid.cpp)
	endif()
endif()
if(HIDAPI_FOUND)
	set(SRCS ${SRCS} HW/WiimoteReal/IOhidapi.cpp)
endif(HIDAPI_FOUND)

if(PORTAUDIO_FOUND)
	set(LIBS ${LIBS} ${PORTAUDIO_LIBRARIES})
endif(PORTAUDIO_FOUND)

if(OPROFILE_FOUND)
	set(LIBS ${LIBS} ${OPROFILE_LIBRARIES})
endif(OPROFILE_FOUND)

if(GDBSTUB)
	set(SRCS ${SRCS} PowerPC/GDBStub.cpp)
endif(GDBSTUB)

if(UNIX)
	set(SRCS ${SRCS} MemoryWatcher.cpp)
endif(UNIX)

add_dolphin_library(core "${SRCS}" "${LIBS}")
