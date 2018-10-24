/*
  nvs.c - An embedded CNC Controller with rs274/ngc (g-code) support

  Peristent storage of settings in flash

  Part of Grbl

  Copyright (c) 2018 Terje Io

  Grbl is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Grbl is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Grbl.  If not, see <http://www.gnu.org/licenses/>.
*/

#define GRBL_NVS_SIZE 1536

bool nvsInit(void);
bool nvsRead (uint8_t *dest);
bool nvsWrite (uint8_t *source);
