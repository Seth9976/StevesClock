// 函数: __local_unwind4
// 地址: 0x40f250
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t ebp
int32_t var_10 = ebp
int32_t var_14 = arg1
void* var_18 = arg2
int32_t var_1c = arg3
int32_t var_20 = arg3
int32_t (* var_24)(int32_t arg1, void* arg2, void** arg3) = __unwind_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_20_1 = __security_cookie ^ &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

while (true)
    int32_t esi_1 = *(arg2 + 0xc)
    
    if (esi_1 == 0xfffffffe)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
    
    if (arg3 != 0xfffffffe && esi_1 u<= arg3)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
    
    int32_t* ebx_3 = (*(arg2 + 8) ^ *arg1) + esi_1 * 0xc + 0x10
    *(arg2 + 0xc) = *ebx_3
    
    if (ebx_3[1] == 0)
        __NLG_Notify(ebx_3[2], ebp, 0x101)
        ebx_3[2]
        __NLG_Call()
