#pragma once
#include <windows.h>
#include <tlhelp32.h>

#define KTEST_GOOD_COUNTER 0x12C99C
#define KTEST_BAD_COUNTER 0x12C9A0
#define KTEST_COMPL_COUNTER 0x12C998
#define KTEST_QUEST_COUNT 0x125150

#define KTEST_FIRST_FLOAT_MARK 0x12C98C
#define KTEST_SECOND_FLOAT_MARK 0x12C994
#define KTEST_MINUTE_COUNTER 0x12C9AC

public class MemPatcher {
	public:
		//Not sure what exp func behind this vals, so time to hardcore :3
		static constexpr float hardcodedSecondFloatVals[21] = {
			0.0f, // 0%
			6.8f, // 5%
			7.3f, // 10%
			7.6f, // 15%
			7.8f, // 20%
			8.0f, // 25%
			8.2f, // 30%
			8.4f, // 35%
			8.6f, // 40%
			8.8f, // 45%
			9.0f, // 50%
			9.1f, // 55%
			9.2f, // 60%
			9.3f, // 65%
			9.4f, // 70%
			9.5f, // 75%
			9.6f, // 80%
			9.7f, // 85%
			9.8f, // 90%
			9.9f, // 95%
			10.0f // 100%
		};
		static DWORD GetProcId(const wchar_t* procName);
		static uintptr_t GetModuleBaseAddress(DWORD dwProcID, wchar_t* szModuleName);
};