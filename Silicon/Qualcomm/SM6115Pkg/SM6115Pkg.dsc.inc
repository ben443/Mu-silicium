## @file
#
#  Copyright (c) 2011-2015, ARM Limited. All rights reserved.
#  Copyright (c) 2014, Linaro Limited. All rights reserved.
#  Copyright (c) 2015 - 2016, Intel Corporation. All rights reserved.
#  Copyright (c) 2018 - 2019, Bingxing Wang. All rights reserved.
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

# SoC Defines
[Defines]
  USE_PHYSICAL_TIMER             = 1

[BuildOptions.common]
  *_*_*_CC_FLAGS = -march=armv8-a+crypto+rcpc

[PcdsFixedAtBuild.common]
  gArmTokenSpaceGuid.PcdArmArchTimerFreqInHz|19200000
  gArmTokenSpaceGuid.PcdArmArchTimerSecIntrNum|17
  gArmTokenSpaceGuid.PcdArmArchTimerIntrNum|18
  gArmTokenSpaceGuid.PcdGicDistributorBase|0xf200000
  gArmTokenSpaceGuid.PcdGicRedistributorsBase|0xf300000

  gEfiMdeModulePkgTokenSpaceGuid.PcdAcpiDefaultOemRevision|0x00006115
  gEmbeddedTokenSpaceGuid.PcdInterruptBaseAddress|0xf200000

  gQcomPkgTokenSpaceGuid.PcdSmbiosProcessorModel|"Snapdragon (TM) 662 @ 2.00 GHz"
  gQcomPkgTokenSpaceGuid.PcdSmbiosProcessorRetailModel|"SM6115"

  gArmPlatformTokenSpaceGuid.PcdCoreCount|8
  gArmPlatformTokenSpaceGuid.PcdClusterCount|2

  # UART
  gQcomPkgTokenSpaceGuid.PcdUartSerialBase|0x4A90000

[LibraryClasses.common]
  PlatformPeiLib|SM6115Pkg/Library/PlatformPeiLib/PlatformPeiLib.inf
  PlatformPrePiLib|SM6115Pkg/Library/PlatformPrePiLib/PlatformPrePiLib.inf
  AcpiPlatformUpdateLib|SM6115Pkg/Library/AcpiPlatformUpdateLib/AcpiPlatformUpdateLib.inf

[Components.common]
  SM6115Pkg/Drivers/SmBiosTableDxe/SmBiosTableDxe.inf

!include QcomPkg/QcomPkg.dsc.inc