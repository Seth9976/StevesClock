// 函数: sub_408dda
// 地址: 0x408dda
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

arg1[-1] = 0xfffffffe
int32_t result = arg1[-8]
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-4]
*arg1
*arg1 = &data_408de9
*arg1
return result
