/*
 * This file is derived from the MicroPython project, http://micropython.org/
 *
 * Copyright (c) 2016, Pycom Limited and its licensors.
 *
 * This software is licensed under the GNU GPL version 3 or any later version,
 * with permitted additional terms. For more information see the Pycom Licence
 * v1.0 document supplied with this file, or available at:
 * https://www.pycom.io/opensource/licensing
 *
 * This file contains code under the following copyright and licensing notices.
 * The code has been changed but otherwise retained.
 */

/*
 / _____)             _              | |
( (____  _____ ____ _| |_ _____  ____| |__
 \____ \| ___ |    (_   _) ___ |/ ___)  _ \
 _____) ) ____| | | || |_| ____( (___| | | |
(______/|_____)_|_|_| \__)_____)\____)_| |_|
    (C)2013 Semtech

Description: Bleeper board SPI driver implementation

License: Revised BSD License, see LICENSE.TXT file include in the project

Maintainer: Miguel Luis and Gregory Cristian
*/
#ifndef __SPI_BOARD_H__
#define __SPI_BOARD_H__

/*!
 * SPI driver structure definition
 */
struct Spi_s
{
    void *Spi;
    Gpio_t Mosi;
    Gpio_t Miso;
    Gpio_t Sclk;
    Gpio_t Nss;
};

#endif  // __SPI_BOARD_H__
