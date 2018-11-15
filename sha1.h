/*
 * This file is part of <https://github.com/cbscorpion/sha1>.
 * Copyright (c) 2018 Christoph Buttler.
 * 
 * This program is free software: you can redistribute it and/or modify  
 * it under the terms of the GNU General Public License as published by  
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef SHA1_H
#define SHA1_H

// UINT32_C
#include <stdint.h>

struct hash 
{
	uint32_t a;
	uint32_t b;
	uint32_t c;
	uint32_t d;
	uint32_t e;
};

extern int sha1Digest(char *p_input, struct hash *p_result);

#endif
