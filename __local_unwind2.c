// 函数: __local_unwind2
// 地址: 0x413a85
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t ebp
int32_t var_10 = ebp
void* var_14 = arg1
int32_t var_18 = 0xfffffffe
int32_t (* var_1c)(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4) = __unwind_handler
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_24 = __security_cookie ^ &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

while (true)
    int32_t ebx_1 = *(arg1 + 8)
    int32_t esi_1 = *(arg1 + 0xc)
    
    if (esi_1 == 0xffffffff)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    if (arg2 != 0xffffffff && esi_1 u<= arg2)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    int32_t esi_2 = esi_1 * 3
    int32_t ecx_1 = *(ebx_1 + (esi_2 << 2))
    int32_t var_18_1 = ecx_1
    *(arg1 + 0xc) = ecx_1
    
    if (*(ebx_1 + (esi_2 << 2) + 4) == 0)
        __NLG_Notify(*(ebx_1 + (esi_2 << 2) + 8), ebp, 0x101)
        *(ebx_1 + (esi_2 << 2) + 8)
        __NLG_Call()
