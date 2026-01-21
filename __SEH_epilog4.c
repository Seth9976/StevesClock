// 函数: __SEH_epilog4
// 地址: 0x409ea5
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-4]
*arg1
*arg1 = __return_addr
