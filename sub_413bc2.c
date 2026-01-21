// 函数: sub_413bc2
// 地址: 0x413bc2
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

void* var_20
sub_4070a4(&var_20, arg1)
char* esi = arg2

if (arg3 != 0)
    *arg3 = esi

void* var_18
char var_14

if (esi != 0)
    if (arg4 == 0)
    label_413c1c:
        int32_t result_1 = 0
        void* ecx_1 = var_20
        int32_t ebx
        ebx.b = *esi
        int32_t edi
        int32_t var_2c_1 = edi
        void* edi_1 = &esi[1]
        
        while (true)
            int32_t eax_4
            
            if (*(ecx_1 + 0xac) s<= 1)
                eax_4 = zx.d(*(*(ecx_1 + 0xc8) + (zx.d(ebx.b) << 1))) & 8
            else
                eax_4 = sub_40b115(zx.d(ebx.b), 8, &var_20)
                ecx_1 = var_20
            
            if (eax_4 == 0)
                break
            
            ebx.b = *edi_1
            edi_1 += 1
        
        if (ebx.b == 0x2d)
            arg5 |= 2
            ebx.b = *edi_1
            edi_1 += 1
        else if (ebx.b == 0x2b)
            ebx.b = *edi_1
            edi_1 += 1
        
        int32_t result
        
        if (arg4 s< 0 || arg4 == 1 || arg4 s> 0x24)
            if (arg3 != 0)
                *arg3 = esi
            
            if (var_14 != 0)
                *(var_18 + 0x70) &= 0xfffffffd
            
            result = 0
        else
            if (arg4 != 0)
                if (arg4 == 0x10 && ebx.b == 0x30)
                    goto label_413ccb
            else if (ebx.b == 0x30)
                int32_t eax_7
                eax_7.b = *edi_1
                
                if (eax_7.b == 0x78 || eax_7.b == 0x58)
                    arg4 = 0x10
                label_413ccb:
                    eax_7.b = *edi_1
                    
                    if (eax_7.b == 0x78 || eax_7.b == 0x58)
                        ebx.b = *(edi_1 + 1)
                        edi_1 += 2
                else
                    arg4 = 8
            else
                arg4 = 0xa
            
            int32_t eax_8 = 0xffffffff
            int32_t edx_2 = 0
            uint32_t temp0_1 = divu.dp.d(edx_2:eax_8, arg4)
            
            while (true)
                uint32_t ecx_3 = zx.d(*(*(ecx_1 + 0xc8) + (zx.d(ebx.b) << 1)))
                int32_t ecx_5
                
                if ((ecx_3 & 4) == 0)
                    if ((ecx_3 & 0x103) == 0)
                        break
                    
                    int32_t ecx_8 = sx.d(ebx.b)
                    
                    if (ebx.b - 0x61 u<= 0x19)
                        ecx_8 -= 0x20
                    
                    ecx_5 = ecx_8 - 0x37
                else
                    ecx_5 = sx.d(ebx.b) - 0x30
                
                if (ecx_5 u>= arg4)
                    break
                
                arg5 |= 8
                
                if (result_1 u< temp0_1
                        || (result_1 == temp0_1 && ecx_5 u<= modu.dp.d(edx_2:eax_8, arg4)))
                    result_1 = result_1 * arg4 + ecx_5
                else
                    arg5 |= 4
                    
                    if (arg3 == 0)
                        break
                
                ebx.b = *edi_1
                edi_1 += 1
            
            void* edi_2 = edi_1 - 1
            
            if ((arg5.b & 8) == 0)
                if (arg3 != 0)
                    edi_2 = arg2
                
                result_1 = 0
            else if ((arg5.b & 4) != 0)
            label_413d8f:
                *__errno() = 0x22
                
                if ((arg5.b & 1) == 0)
                    int32_t eax_13
                    eax_13.b = (arg5.b & 2) != 0
                    result_1 = eax_13 + 0x7fffffff
                else
                    result_1 = 0xffffffff
            else if ((arg5.b & 1) == 0)
                int32_t eax_11 = arg5 & 2
                
                if (eax_11 != 0 && result_1 u> 0x80000000)
                    goto label_413d8f
                
                if (eax_11 == 0 && result_1 u> 0x7fffffff)
                    goto label_413d8f
            
            if (arg3 != 0)
                *arg3 = edi_2
            
            if ((arg5.b & 2) != 0)
                result_1 = neg.d(result_1)
            
            if (var_14 != 0)
                *(var_18 + 0x70) &= 0xfffffffd
            
            result = result_1
        
        return result
    
    if (arg4 s>= 2 && arg4 s<= 0x24)
        goto label_413c1c

*__errno() = 0x16
__invalid_parameter_noinfo()

if (var_14 != 0)
    *(var_18 + 0x70) &= 0xfffffffd

return 0
