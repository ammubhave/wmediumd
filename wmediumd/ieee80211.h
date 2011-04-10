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

#ifndef IEEE80211_H_
#define IEEE80211_H_

#define IEEE80211_MAX_TX_RATES 5
#define IEEE80211_CB_SIZE 48

struct ieee80211_hdr {
        unsigned char frame_control[2];
       	unsigned char duration_id[2];
        unsigned char addr1[6];
        unsigned char addr2[6];
        unsigned char addr3[6];
        unsigned char seq_ctrl[2];
        unsigned char addr4[6];
};

struct ieee80211_tx_rate {
	signed char idx;
	unsigned char count;
	unsigned char flags;

};

#endif /* IEEE80211 */
