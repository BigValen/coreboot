##
## This file is part of the coreboot project.
##
## Copyright (C) 2013 Google Inc.
## Copyright (C) 2015 Intel Corp.
##
## This program is free software; you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation; version 2 of the License.
##
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
##

romstage-$(CONFIG_MAINBOARD_HAS_CHROMEOS) += chromeos.c
romstage-$(CONFIG_ENABLE_BUILTIN_COM1) += com_init.c

ramstage-$(CONFIG_MAINBOARD_HAS_CHROMEOS) += chromeos.c
ramstage-$(CONFIG_MAINBOARD_HAS_CHROMEOS) += ec.c
ramstage-$(CONFIG_MAINBOARD_HAS_CHROMEOS) += gpio.c
ramstage-y += irqroute.c
ramstage-y += ramstage.c
ramstage-y += w25q64.c

smm-$(CONFIG_HAVE_SMI_HANDLER) += smihandler.c
