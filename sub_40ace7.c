// 函数: sub_40ace7
// 地址: 0x40ace7
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t eax_2 = data_41acd4

if (eax_2 != 0xffffffff)
    DecodePointer(data_42ddc4)(eax_2)
    data_41acd4 = 0xffffffff

uint32_t dwTlsIndex = data_41acd8

if (dwTlsIndex != 0xffffffff)
    TlsFree(dwTlsIndex)
    data_41acd8 = 0xffffffff

return sub_40e2c5() __tailcall
