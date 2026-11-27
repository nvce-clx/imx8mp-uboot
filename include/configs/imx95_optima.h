#ifndef __IMX95_OPTIMA_H
#define __IMX95_OPTIMA_H

#include <linux/sizes.h>
#include <linux/stringify.h>
#include <asm/arch/imx-regs.h>

#define CFG_SYS_INIT_RAM_ADDR	0x90000000
#define CFG_SYS_INIT_RAM_SIZE	0x200000

#define CFG_SYS_SDRAM_BASE	0x90000000
#define PHYS_SDRAM		0x90000000

/* Bank 1: same on both boards. 2GB - 256MB reserved */
#define PHYS_SDRAM_SIZE		0x70000000

/* Bank 2 = total RAM - 2GB */
#if defined(CONFIG_IMX95_LPDDR4X_2GB)
#define PHYS_SDRAM_2_SIZE	0x00000000	/* 2GB total */
#elif defined(CONFIG_IMX95_LPDDR4X_4GB)
#define PHYS_SDRAM_2_SIZE	0x80000000	/* 4GB total */
#else
#error "Select CONFIG_IMX95_LPDDR4X_2GB or CONFIG_IMX95_LPDDR4X_4GB"
#endif

#define CFG_SYS_SECURE_SDRAM_BASE	0x8A000000
#define CFG_SYS_SECURE_SDRAM_SIZE	0x06000000

#define WDOG_BASE_ADDR			WDG3_BASE_ADDR

#ifdef CONFIG_ANDROID_SUPPORT
#include "imx95_evk_android.h"
#endif

#endif
