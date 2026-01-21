// 函数: sub_40d111
// 地址: 0x40d111
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

bool p = unimplemented  {sub esp, 0x328}
bool a = unimplemented  {sub esp, 0x328}
data_42ded8 = arg1
data_42ded4 = arg3
data_42ded0 = arg2
int32_t entry_ebx
data_42decc = entry_ebx
data_42dec8 = arg5
data_42dec4 = arg6
int16_t ss
data_42def0 = ss
int16_t cs
data_42dee4 = cs
int16_t ds
data_42dec0 = ds
int16_t es
data_42debc = es
int16_t fs
data_42deb8 = fs
int16_t gs
data_42deb4 = gs
int32_t var_32c
int32_t var_4
bool d
int32_t var_330 = (add_overflow(&var_4, 0xfffffcd8) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
    | (&var_32c s< 0 ? 1 : 0) << 7 | (&var_4 == 0x328 ? 1 : 0) << 6 | (a ? 1 : 0) << 4
    | (p ? 1 : 0) << 2 | (&var_4 u< 0x328 ? 1 : 0)
data_42dee8 = var_330
data_42dedc = arg4
data_42dee0 = __return_addr
void arg_4
data_42deec = &arg_4
data_42de28 = 0x10001
data_42dddc = data_42dee0
data_42ddd0 = 0xc0000409
data_42ddd4 = 1
uint32_t __security_cookie_1 = __security_cookie
int32_t var_328 = data_41a00c
data_42de20 = IsDebuggerPresent()
sub_40fab8()
SetUnhandledExceptionFilter(nullptr)
UnhandledExceptionFilter(&data_416dbc)

if (data_42de20 == 0)
    sub_40fab8()

TerminateProcess(GetCurrentProcess(), 0xc0000409)
noreturn
