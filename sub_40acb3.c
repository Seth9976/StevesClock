// 函数: sub_40acb3
// 地址: 0x40acb3
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t lpTlsValue = TlsGetValue(data_41acd8)

if (lpTlsValue == 0)
    lpTlsValue = DecodePointer(data_42ddbc)
    TlsSetValue(data_41acd8, lpTlsValue)

return lpTlsValue
