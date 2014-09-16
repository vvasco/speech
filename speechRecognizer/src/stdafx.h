// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//
// Copyright � Microsoft Corporation. All rights reserved

// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_)
#define AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// Disable the false warnings caused by the wrong definitions of SetWindowLongPtr
// and GetWindowLongPtr macros.
#pragma warning ( disable : 4244 )

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN     // Exclude rarely-used stuff from Windows headers
#endif // WIN32_LEAN_AND_MEAN


// Windows Header Files:
#include <windows.h>

// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <atlbase.h>

#ifdef _WIN32_WCE
#include<WinCEStub.h>
#define ICON_BIG            1
#endif


// Local Header Files
#include <sapi.h>
#include <sphelper.h>
#include <sperror.h>
#include <atlstr.h>
#include <atlconv.h>

//STD
#include <map>
#include <list>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

//YARP
#include <yarp/os/all.h>
#include <yarp/sig/Sound.h>
#include <yarp/sig/SoundFile.h>

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_)
