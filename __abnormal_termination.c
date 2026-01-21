// 函数: __abnormal_termination
// 地址: 0x413b09
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList

if (ExceptionList->Handler == __unwind_handler
        && ExceptionList->__offset(0x8).d == *(ExceptionList->__offset(0xc).d + 0xc))
    return 1

return 0
