// 函数: sub_402547
// 地址: 0x402547
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* eax_1 = arg5 + 4
void* edi = *(eax_1 - 4)

if (arg4 == 1)
    int32_t* eax_2
    int32_t edx
    
    if (arg3 == 0 || arg1 == 0)
        eax_2 = _calloc(eax_1, edx, ecx, edi + 2, arg2)
    else
        eax_2 = _realloc(arg1, (edi + 2) * arg2)
    return eax_2

int32_t* ebx_2

if (arg3 == 0 || arg1 == 0)
    int32_t eax_10 = (edi + 2) << 2
    ebx_2 = _calloc(eax_10, 0, ecx, eax_10, 1)
else
    int32_t ecx_2 = 0
    int32_t* eax_3 = arg1
    
    if (*arg1 != 0)
        while (true)
            if (ecx_2 u<= edi)
                eax_3 = &eax_3[1]
                ecx_2 += 1
                
                if (*eax_3 != 0)
                    continue
                else if (ecx_2 u<= edi)
                    break
            
            sub_40172e(&eax_3[-1], arg4, 0)
            break
    
    ebx_2 = _realloc(arg1, (edi + 2) << 2)
    int32_t eax_8 = 0
    int32_t* edx_1 = ebx_2
    
    if (*ebx_2 != 0)
        while (eax_8 u<= edi)
            edx_1 = &edx_1[1]
            eax_8 += 1
            
            if (*edx_1 == 0)
                break
    
    if (eax_8 u< edi + 2)
        __builtin_memset(edx_1, 0, (edi + 2 - eax_8) << 2)

int32_t esi_2 = 0

if (arg4 - 1 s> 0 && edi u> 0)
    do
        ebx_2[esi_2] = sub_402547(ebx_2[esi_2], arg2, arg3, arg4 - 1, eax_1)
        esi_2 += 1
    while (esi_2 u< edi)

return ebx_2
