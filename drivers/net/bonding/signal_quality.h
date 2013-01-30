/*
 * signal_quality.c
 *
 *  Created on: 22 Jan 2013
 *      Author: Frank LIU
 *      Email: frank.kingdom@gmail.com
 */

#ifndef __SIGNAL_QUALITY_H__
#define __SIGNAL_QUALITY_H__


/* The name of the default interface. Not in use yet. */
#ifndef IW_NAME
#define IW_NAME "wlan0"
#endif

// ================= Exported functions to the main bonding code ==================
int signal_level(char *if_name);


#endif //__SIGNAL_QUALITY_H__