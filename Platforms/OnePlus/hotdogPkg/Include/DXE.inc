  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

  INF Binaries/hotdog/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
  INF Binaries/hotdog/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/hotdog/QcomPkg/Drivers/FontDxe/FontDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/QcomMpmTimerDxe/QcomMpmTimerDxe.inf

  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
  INF ArmPkg/Drivers/ArmPsciMpServicesDxe/ArmPsciMpServicesDxe.inf

  INF Binaries/hotdog/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/PdcDxe/PdcDxe.inf

  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF FatPkg/EnhancedFatDxe/Fat.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
  INF MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf

  INF Binaries/hotdog/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

  INF QcomPkg/Drivers/ClockSpeedUpDxe/ClockSpeedUpDxe.inf

  INF Binaries/hotdog/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf

!if $(USE_DISPLAYDXE) == 1
  INF Binaries/sweet_k6a/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF QcomPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/hotdog/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
  INF Binaries/hotdog/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/hotdog/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMouseAbsolutePointerDxe/UsbMouseAbsolutePointerDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/hotdog/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/HashDxe/HashDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/CipherDxe/CipherDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/RNGDxe/RngDxe.inf

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  INF Binaries/hotdog/QcomPkg/Drivers/PILDxe/PILDxe.inf
  INF Binaries/hotdog/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf