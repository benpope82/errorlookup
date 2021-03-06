// Error Lookup
// Copyright (c) 2011-2017 Henry++

#ifndef __MAIN_H__
#define __MAIN_H__

#include <windows.h>
#include "resource.h"

// config
#define APP_NAME L"Error Lookup"
#define APP_NAME_SHORT L"errorlookup"
#define APP_VERSION L"2.3"
#define APP_VERSION_RES 2,3,0,0
#define APP_COPYRIGHT L"(c) 2011-2017 " _APP_AUTHOR L". All Rights Reserved."

struct ITEM_MODULE
{
	HINSTANCE h = nullptr;

	LPWSTR text = nullptr;

	WCHAR path[MAX_PATH] = {0};
	WCHAR description[MAX_PATH] = {0};
};

// pugixml document configuration
#define PUGIXML_LOAD_FLAGS (pugi::parse_escapes)
#define PUGIXML_LOAD_ENCODING pugi::encoding_auto

#define SECTION_MODULE L"module"

#define FORMAT_DEC L"%lu"
#define FORMAT_HEX L"0x%.8lx"

#endif // __MAIN_H__
