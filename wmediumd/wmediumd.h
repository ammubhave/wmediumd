/*
 *	wmediumd, wireless medium simulator for mac80211_hwsim kernel module
 *	Copyright (C) 2011  Javier Lopez (jlopex@gmail.com)
 *
 *	This program is free software; you can redistribute it and/or
 *	modify it under the terms of the GNU General Public License
 *	as published by the Free Software Foundation; either version 2
 *	of the License, or (at your option) any later version.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program; if not, write to the Free Software
 *	Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef NLCLIENT_H_
#define NLCLIENT_H_

#define HWSIM_CMD_REGISTER 1
#define HWSIM_CMD_FRAME 2
#define HWSIM_CMD_TX_INFO_FRAME 3

#define HWSIM_ATTR_ADDR_RECEIVER 1
#define HWSIM_ATTR_ADDR_TRANSMITTER 2
#define HWSIM_ATTR_MSG_LEN 3
#define HWSIM_ATTR_MSG 4
#define HWSIM_ATTR_FLAGS 5
#define HWSIM_ATTR_RX_RATE 6
#define HWSIM_ATTR_SIGNAL 7
#define HWSIM_ATTR_TX_INFO 8
#define HWSIM_ATTR_CB_SKB 9
#define HWSIM_ATTR_MAX 9
#define VERSION_NR 1


#endif /* NLCLIENT_H_ */
