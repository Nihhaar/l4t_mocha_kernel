/*
 * Copyright (c) 2012- 2013, NVIDIA CORPORATION.  All rights reserved.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include <linux/spinlock.h>
#include <linux/delay.h>

#include <asm/atomic.h>

#include <mach/powergate.h>

#include "powergate-priv.h"
#include "powergate-ops-txx.h"
#include "powergate-ops-t1xx.h"

#if 0
static struct powergate_ops tegra14x_powergate_ops = {
	.soc_name = "tegra14x",

	.num_powerdomains = TEGRA_NUM_POWERGATE,
};
#endif

struct powergate_ops *tegra14x_powergate_init_chip_support(void)
{
	return NULL;
}