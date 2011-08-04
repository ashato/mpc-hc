/*
 * $Id$
 *
 * (C) 2011 see AUTHORS
 *
 * This file is part of mpc-hc.
 *
 * Mplayerc is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Mplayerc is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

#include <Windows.h>


BOOL IsWinXPOrLater();
BOOL IsWinVistaOrLater();
BOOL IsWinSeven();

bool SetPrivilege(LPCTSTR privilege, bool bEnable=true);

bool ExportRegistryKey(CStdioFile& file, HKEY hKeyRoot, CString keyName=_T(""));