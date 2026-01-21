// 函数: sub_413f10
// 地址: 0x413f10
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

PSTR lpMultiByteStr_1 = arg1
PSTR var_c = arg1
int32_t edi
int32_t var_18 = edi
int32_t* edi_1 = data_42dcb0
lpMultiByteStr_1 = nullptr

for (wchar16* lpWideCharStr = *edi_1; lpWideCharStr != 0; lpWideCharStr = *edi_1)
    int32_t cbMultiByte =
        WideCharToMultiByte(0, 0, lpWideCharStr, 0xffffffff, nullptr, 0, nullptr, nullptr)
    
    if (cbMultiByte == 0)
        return 0xffffffff
    
    PSTR lpMultiByteStr = __calloc_crt(cbMultiByte, 1)
    lpMultiByteStr_1 = lpMultiByteStr
    
    if (lpMultiByteStr == 0)
        return 0xffffffff
    
    if (WideCharToMultiByte(0, 0, *edi_1, 0xffffffff, lpMultiByteStr, cbMultiByte, nullptr, nullptr)
            == 0)
        __free_base(lpMultiByteStr_1)
        return 0xffffffff
    
    if (sub_4155a9(&lpMultiByteStr_1, 0) s< 0 && lpMultiByteStr_1 != 0)
        __free_base(lpMultiByteStr_1)
        lpMultiByteStr_1 = nullptr
    
    edi_1 = &edi_1[1]

return 0
