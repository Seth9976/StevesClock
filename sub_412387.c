// 函数: sub_412387
// 地址: 0x412387
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t* result = arg3
int32_t ebx = 0
int32_t edi
int32_t var_28 = edi
int32_t var_8 = 0x404e
*result = 0
result[1] = 0
result[2] = 0
int32_t ecx

if (arg2 u> 0)
    ecx = 0
    arg3 = nullptr
    
    do
        int32_t var_1c_1 = *result
        int32_t var_18
        int32_t* edi_1 = &var_18
        void* esi_2 = &result[1]
        *edi_1 = *esi_2
        edi_1[1] = *(esi_2 + 4)
        int32_t edi_4 = ecx * 2
        int32_t ecx_2 = (ebx * 2) | ecx u>> 0x1f
        int32_t* edx_3 = arg3
        arg3 = nullptr
        int32_t ecx_4 = (ecx_2 * 2) | edi_4 u>> 0x1f
        int32_t edi_6 = ecx_4
        int32_t esi_8 = edi_4 * 2
        int32_t ecx_6 = (((edx_3 * 2) | ebx u>> 0x1f) * 2) | ecx_2 u>> 0x1f
        int32_t edx_7 = var_1c_1 + esi_8
        *result = esi_8
        result[1] = edi_6
        result[2] = ecx_6
        
        if (edx_7 u< esi_8 || edx_7 u< var_1c_1)
            arg3 = 1
        
        *result = edx_7
        
        if (arg3 != 0)
            arg3 = nullptr
            edi_6 = ecx_4 + 1
            
            if (edi_6 u< ecx_4 || edi_6 u< 1)
                arg3 = 1
            
            result[1] = edi_6
            
            if (arg3 != 0)
                ecx_6 += 1
                result[2] = ecx_6
        
        int32_t esi_10 = var_18
        arg3 = nullptr
        int32_t ebx_3 = edi_6 + esi_10
        
        if (ebx_3 u< edi_6 || ebx_3 u< esi_10)
            arg3 = 1
        
        result[1] = ebx_3
        
        if (arg3 != 0)
            ecx_6 += 1
            result[2] = ecx_6
        
        int32_t var_c_3 = 0
        int32_t var_14
        int32_t* ecx_9 = ((ecx_6 + var_14) * 2) | ebx_3 u>> 0x1f
        int32_t edx_8 = edx_7 * 2
        ebx = (ebx_3 * 2) | edx_7 u>> 0x1f
        result[2] = ecx_9
        arg3 = ecx_9
        *result = edx_8
        result[1] = ebx
        int32_t esi_13 = sx.d(*arg1)
        ecx = edx_8 + esi_13
        int32_t var_1c_2 = esi_13
        
        if (ecx u< edx_8 || ecx u< esi_13)
            var_c_3 = 1
        
        *result = ecx
        
        if (var_c_3 != 0)
            int32_t edx_9 = ebx + 1
            int32_t esi_14 = 0
            
            if (edx_9 u< ebx || edx_9 u< 1)
                esi_14 = 1
            
            ebx = edx_9
            result[1] = edx_9
            
            if (esi_14 != 0)
                arg3 = ecx_9 + 1
                result[2] = ecx_9 + 1
        
        arg2 -= 1
        arg1 = &arg1[1]
        result[1] = ebx
        result[2] = arg3
    while (arg2 u> 0)

if (result[2] == 0)
    int32_t edx_13 = result[1]
    uint32_t i
    
    do
        int32_t ecx_11 = *result
        var_8 += 0xfff0
        i = edx_13 u>> 0x10
        edx_13 = edx_13 << 0x10 | ecx_11 u>> 0x10
        result[1] = edx_13
        *result = ecx_11 << 0x10
    while (i == 0)
    
    result[2] = i

int32_t edi_10 = result[2]

if ((edi_10 & 0x8000) == 0)
    ecx = result[1]
    
    do
        int32_t ebx_5 = *result
        var_8 += 0xffff
        edi_10 = (edi_10 * 2) | ecx u>> 0x1f
        ecx = (ecx * 2) | ebx_5 u>> 0x1f
        *result = ebx_5 * 2
        result[1] = ecx
        result[2] = edi_10
    while ((edi_10 & 0x8000) == 0)

ecx.w = var_8.w
*(result + 0xa) = ecx.w
return result
