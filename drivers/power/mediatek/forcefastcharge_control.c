/*
 * Copyright © 2015, Haneesh Raja "HostZero" <haneesh.da.rocker@gmail.com>
 *
 * Charger Control driver for USB Force Fast Charge
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

#ifdef CONFIG_FORCE_FAST_CHARGE
	if (force_fast_charge)
		current_limit = 900;
#endif

MODULE_LICENSE("GPL and additional rights");
MODULE_AUTHOR("Haneesh Raja <haneesh.da.rocker@gmail.com>");
MODULE_DESCRIPTION("USB Force FastCharge control driver");
