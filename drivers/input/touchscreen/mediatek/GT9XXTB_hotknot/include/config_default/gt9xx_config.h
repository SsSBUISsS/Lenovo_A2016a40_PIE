/* drivers/input/touchscreen/gt1x_generic.h
 *
 * 2010 - 2014 Goodix Technology.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be a reference
 * to you, when you are integrating the GOODiX's CTP IC into your system,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * Version: 1.0
 * Revision Record:
 *      V1.0:  first release. 2014/09/28.
 *
 */

#ifndef _GT9XX_CONFIG_H_
#define _GT9XX_CONFIG_H_

/***************************PART2:TODO define**********************************/
/*TODO: puts the config info corresponded to your TP here, the following is just
		a sample config, send this config should cause the chip can not work normally*/

/* TODO define your config for Sensor_ID == 0 here, if needed */
#define CTP_CFG_GROUP1 {\
0x4B,0xD0,0x02,0x00,0x05,0x05,0x34,0x41,0x01,0x0A,\
0x1E,0x0F,0x5A,0x32,0x0F,0x05,0x00,0x00,0xFF,0x7F,\
0x22,0x11,0x04,0x14,0x14,0x25,0x14,0x8B,0x2A,0x0C,\
0x3E,0x40,0xD3,0x07,0x40,0x0F,0x00,0x02,0x33,0x11,\
0x3C,0x11,0x0A,0x00,0x78,0x28,0x2D,0x32,0x00,0x00,\
0x02,0x31,0x95,0x94,0xC5,0x02,0x00,0x00,0x00,0x04,\
0x8C,0x37,0x00,0x76,0x44,0x00,0x65,0x55,0x00,0x57,\
0x6B,0x00,0x4D,0x86,0x00,0x4D,0x18,0x30,0x50,0x00,\
0xF0,0x4A,0x3A,0xFF,0xFF,0x27,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x01,0x02,\
0x50,0x32,0x18,0x16,0x14,0x12,0x10,0x0E,0x0C,0x0A,\
0x08,0x06,0x04,0x02,0xFF,0xFF,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x22,0x28,0x00,0x00,\
0x00,0x20,0x1E,0x1F,0x1D,0x20,0x1C,0x21,0x18,0x22,\
0x16,0x24,0x04,0x02,0x0A,0x06,0x13,0x08,0x0F,0x12,\
0x0C,0x10,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x33,\
0x00,0xFF,0x22,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,\
0xFF,0xFF,0xFF,0xFF,0x8C,0x01\
}

#define CTP_CFG_GROUP1_CHARGER {}

/* TODO puts your group2 config info here,if need. */
#define CTP_CFG_GROUP2 {\
	0x42,0xD0,0x02,0x00,0x05,0x05,0x34,\
	0x41,0x01,0x0A,0x1E,0x0F,0x50,0x32,\
	0x0F,0x05,0x00,0x00,0xFF,0x7F,0x11,\
	0x11,0x04,0x14,0x14,0x24,0x14,0x8B,\
	0x2A,0x0C,0x32,0x34,0xD3,0x07,0x40,\
	0x05,0x00,0x02,0x23,0x11,0x3C,0x01,\
	0x00,0x00,0x78,0x28,0x2D,0x32,0x00,\
	0x00,0x2B,0x28,0x8C,0x94,0xC5,0x02,\
	0x00,0x00,0x00,0x04,0x8B,0x2D,0x00,\
	0x71,0x3A,0x00,0x5C,0x4B,0x00,0x4E,\
	0x60,0x00,0x43,0x7C,0x00,0x43,0x18,\
	0x30,0x50,0x00,0xF0,0x4A,0x3A,0xFF,\
	0xFF,0x27,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x14,0x00,0x00,0x50,0x32,\
	0x18,0x16,0x14,0x12,0x10,0x0E,0x0C,\
	0x0A,0x08,0x06,0x04,0x02,0xFF,0xFF,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x00,0x33,0x28,0x00,0x00,\
	0x00,0x20,0x24,0x1E,0x22,0x1D,0x21,\
	0x1C,0x20,0x18,0x1F,0x16,0x13,0x02,\
	0x06,0x04,0x08,0x0A,0x10,0x12,0x0F,\
	0x0C,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,\
	0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,\
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,\
	0xFF,0xFF,0x88,0x01\
}

/* TODO puts your group2 config info here,if need. */
#define CTP_CFG_GROUP2_CHARGER {}

/* TODO puts your group3 config info here,if need. */
#define CTP_CFG_GROUP3 {\
}

/* TODO puts your group3 config info here,if need. */
#define CTP_CFG_GROUP3_CHARGER {}

/* TODO: define your config for Sensor_ID == 3 here, if needed */
#define CTP_CFG_GROUP4 {}

/* TODO: define your config for Sensor_ID == 4 here, if needed */
#define CTP_CFG_GROUP5 {}

/* TODO: define your config for Sensor_ID == 5 here, if needed */
#define CTP_CFG_GROUP6 {\
}

#define TPD_CALIBRATION_MATRIX_ROTATION_NORMAL {-4096, 0, 3276800, 0, -4096, 5242880, 0, 0}
#define TPD_CALIBRATION_MATRIX_ROTATION_FACTORY {-4096, 0, 3276800, 0, -4096, 5242880, 0, 0}

#endif /* _GT1X_CONFIG_H_ */