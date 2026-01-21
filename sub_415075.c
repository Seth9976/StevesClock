// 函数: sub_415075
// 地址: 0x415075
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t esi_2 = (arg1 & 0x1f) << 6
void* ecx_1 = (&data_42ea00)[arg1 s>> 5] + esi_2
int32_t eax_1
eax_1.b = *(ecx_1 + 0x24)
eax_1.b *= 2
int32_t edi
int32_t var_10 = edi
int32_t edi_2 = zx.d(*(ecx_1 + 4)) & 0x80
int32_t eax_3 = sx.d(eax_1.b) s>> 1

if (arg2 == 0x4000)
    *(ecx_1 + 4) |= 0x80
    char* ecx_6 = (&data_42ea00)[arg1 s>> 5] + esi_2 + 0x24
    *ecx_6 &= 0x80
else if (arg2 == 0x8000)
    *(ecx_1 + 4) &= 0x7f
else
    char* ecx_3
    void* edx
    
    if (arg2 == 0x10000 || arg2 == 0x20000)
        *(ecx_1 + 4) |= 0x80
        ecx_3 = (&data_42ea00)[arg1 s>> 5] + esi_2 + 0x24
        edx.b = *ecx_3
        edx.b &= 0x82
        edx.b |= 2
        *ecx_3 = edx.b
    else if (arg2 == 0x40000)
        *(ecx_1 + 4) |= 0x80
        ecx_3 = (&data_42ea00)[arg1 s>> 5] + esi_2 + 0x24
        edx.b = *ecx_3
        edx.b &= 0x81
        edx.b |= 1
        *ecx_3 = edx.b

if (edi_2 == 0)
    return 0x8000

int32_t eax_5 = neg.d(eax_3)
return (sbb.d(eax_5, eax_5, eax_3 != 0) & 0xc000) + 0x4000
