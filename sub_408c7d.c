// 函数: sub_408c7d
// 地址: 0x408c7d
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t var_4 = 0x58
int32_t var_8 = 0x418318
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_2 = 0x418318 ^ __security_cookie_1
int32_t var_7c = __security_cookie_1 ^ &var_4
int32_t* var_1c = &var_7c
void* const var_80_4 = &data_408c89
int32_t var_8_3 = 0xfffffffe
int32_t var_c = var_8_2
fsbase->NtTib.ExceptionList = &ExceptionList
STARTUPINFOW startupInfo
GetStartupInfoW(&startupInfo)

if (data_42eb04 == 0)
    HeapSetInformation(nullptr, HeapEnableTerminationOnCorruption, nullptr, 0)

int32_t var_20 = 0

if (__heap_init() == 0)
    _fast_error_exit(0x1c)
    noreturn

if (sub_40af9a() == 0)
    _fast_error_exit(0x10)
    noreturn

sub_40e9fc()
int32_t var_8_1 = 0

if (sub_409bf1() s< 0)
    __amsg_exit(0x1b)
    noreturn

data_42eb00 = GetCommandLineA()
data_42dccc = sub_40f8cc()

if (sub_40f811() s< 0)
    __amsg_exit(8)
    noreturn

if (sub_40f59b() s< 0)
    __amsg_exit(9)
    noreturn

int32_t eax_7 = sub_408836(1)

if (eax_7 != 0)
    __amsg_exit(eax_7)
    noreturn

void* eax_8 = __wincmdln()
uint32_t wShowWindow

if ((startupInfo.dwFlags.b & 1) == 0)
    int32_t var_80_2 = 0xa
    wShowWindow = 0xa
else
    wShowWindow = zx.d(startupInfo.wShowWindow)

uint32_t wShowWindow_1 = wShowWindow
void* var_84 = eax_8
int32_t var_88 = 0
int32_t status
int80_t st0
st0, status = sub_4060c3(&__dos_header)
int32_t status_1 = status

if (var_20 != 0)
    __cexit()
    int32_t entry_ebx
    return sub_408dda(&var_4, arg2, arg1, entry_ebx) __tailcall

_exit(status)
noreturn
