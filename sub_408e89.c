// 函数: sub_408e89
// 地址: 0x408e89
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t eax_1 = __security_cookie ^ &var_4
int32_t edi
int32_t var_334_1 = edi

if (arg1 != 0xffffffff)
    int32_t var_338_1 = arg1
    sub_40fab8()

int32_t var_324 = 0
int32_t var_320
int32_t ecx_2
int32_t edx
ecx_2, edx = sub_408e00(&var_320, 0, 0x4c)
EXCEPTION_POINTERS ExceptionInfo
ExceptionInfo.ExceptionRecord = &var_324
bool p = unimplemented  {add esp, 0xc}
bool a = unimplemented  {add esp, 0xc}
int32_t var_2d4
ExceptionInfo.ContextRecord = &var_2d4
int32_t* var_224 = &var_2d4
int32_t var_228 = ecx_2
int32_t var_22c = edx
int32_t var_230 = arg1
int32_t esi
int32_t var_234 = esi
int32_t var_238 = edi
int16_t ss
int16_t var_20c = ss
int16_t cs
int16_t var_218 = cs
int16_t ds
int16_t var_23c = ds
int16_t es
int16_t var_240 = es
int16_t fs
int16_t var_244 = fs
int16_t gs
int16_t var_248 = gs
int32_t var_340
int32_t var_334
bool d
int32_t var_338_2 = (add_overflow(&var_340, 0xc) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
    | (&var_334 s< 0 ? 1 : 0) << 7 | (&var_340 == 0xfffffff4 ? 1 : 0) << 6 | (a ? 1 : 0) << 4
    | (p ? 1 : 0) << 2 | (&var_340 u>= 0xfffffff4 ? 1 : 0)
int32_t var_214 = var_338_2
var_2d4 = 0x10001
void* const __return_addr_2 = __return_addr
int32_t var_220 = var_4
var_324 = arg2
var_320 = arg3
void* const __return_addr_1 = __return_addr
BOOL eax_3 = IsDebuggerPresent()
SetUnhandledExceptionFilter(nullptr)
int32_t result = UnhandledExceptionFilter(&ExceptionInfo)

if (result == 0 && eax_3 == 0 && arg1 != 0xffffffff)
    int32_t var_338_4 = arg1
    sub_40fab8()

sub_407fad(eax_1 ^ &var_4)
return result
