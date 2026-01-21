// 函数: sub_40c738
// 地址: 0x40c738
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t edi
int32_t var_30 = edi
int32_t var_18 = 0x3ff
int32_t var_8 = 0x30
void* var_28
sub_4070a4(&var_28, arg6)

if (arg4 s< 0)
    arg4 = nullptr

char* esi = arg2
int32_t __saved_ebx_1
void* var_20
char var_1c
void* eax

if (esi != 0 && arg3 u> 0)
    *esi = 0
    
    if (arg3 u> arg4 + 0xb)
        int32_t var_10_1 = *arg1
        int32_t eax_5 = arg1[1]
        
        if ((eax_5 u>> 0x14 & 0x7ff) != 0x7ff)
            if ((eax_5 & 0x80000000) != 0)
                *esi = 0x2d
                esi = &esi[1]
            
            int32_t eax_10
            eax_10.b = arg5 == 0
            eax_10.b -= 1
            eax_10.b &= 0xe0
            eax_10.b += 0x78
            int32_t ebx_3 = neg.d(arg5)
            *esi = 0x30
            esi[1] = eax_10.b
            void* esi_3
            
            if ((arg1[1] & 0x7ff00000) != 0)
                esi[2] = 0x31
                esi_3 = &esi[3]
            else
                esi[2] = 0x30
                esi_3 = &esi[3]
                
                if ((*arg1 | (arg1[1] & 0xfffff)) != 0)
                    var_18 = 0x3fe
                else
                    var_18 = 0
            
            void* esi_4 = esi_3 + 1
            
            if (arg4 != 0)
                char* ecx_13
                ecx_13.b = ***(var_28 + 0xbc)
                *esi_3 = ecx_13.b
            else
                *esi_3 = 0
            
            uint32_t ecx_15 = arg1[1] & 0xfffff
            uint32_t var_c_1 = ecx_15
            
            if (ecx_15 u> 0 || *arg1 u> 0)
                int32_t var_10_2 = 0
                uint32_t var_c_2 = 0xf0000
                
                while (arg4 s> 0)
                    uint32_t eax_19 = zx.d(
                        __aullshr(*arg1 & var_10_2, arg1[1] & var_c_2 & 0xfffff, var_8.b) + 0x30)
                    
                    if (eax_19 u> 0x39)
                        eax_19 += (sbb.d(ebx_3, ebx_3, arg5 != 0) & 0xffffffe0) + 0x27
                    
                    var_8 -= 4
                    *esi_4 = eax_19.b
                    esi_4 += 1
                    arg4 -= 1
                    var_10_2 = var_10_2 u>> 4 | var_c_2 << 0x1c
                    var_c_2 u>>= 4
                    
                    if (var_8.w s< 0)
                        break
                
                if (var_8.w s>= 0)
                    int16_t eax_24
                    eax_24, ecx_15 =
                        __aullshr(*arg1 & var_10_2, arg1[1] & var_c_2 & 0xfffff, var_8.b)
                    
                    if (eax_24 u> 8)
                        void* eax_25 = esi_4 - 1
                        
                        while (true)
                            ecx_15.b = *eax_25
                            
                            if (ecx_15.b != 0x66 && ecx_15.b != 0x46)
                                break
                            
                            *eax_25 = 0x30
                            eax_25 -= 1
                        
                        if (eax_25 == esi_3)
                            *(eax_25 - 1) += 1
                        else
                            ecx_15.b = *eax_25
                            
                            if (ecx_15.b != 0x39)
                                ecx_15.b += 1
                                *eax_25 = ecx_15.b
                            else
                                int32_t ebx_6
                                ebx_6.b =
                                    ((sbb.d(ebx_3, ebx_3, arg5 != 0) & 0xffffffe0) + 0x27).b + 0x3a
                                *eax_25 = ebx_6.b
            
            if (arg4 s> 0)
                sub_408e00(esi_4, 0x30, arg4)
                esi_4 += arg4
            
            if (*esi_3 == 0)
                esi_4 = esi_3
            
            ecx_15.b = 0x34
            void* eax_26
            eax_26.b = arg5 == 0
            eax_26.b -= 1
            eax_26.b &= 0xe0
            eax_26.b += 0x70
            *esi_4 = eax_26.b
            int32_t eax_29 = __aullshr(*arg1, arg1[1], ecx_15.b) & 0x7ff
            int32_t eax_30 = eax_29 - var_18
            bool c_2 = eax_29 u< var_18
            uint32_t edx_8 = sbb.d(0, 0, c_2)
            bool s_1 = sbb.d(0, 0, c_2) s< 0
            bool o_1 = unimplemented  {sbb edx, ecx}
            void* esi_5
            
            if (s_1 || ((sbb.d(0, 0, c_2) == 0 || s_1 != o_1) && eax_30 u< 0))
                *(esi_4 + 1) = 0x2d
                esi_5 = esi_4 + 2
                int32_t temp4_1 = eax_30
                eax_30 = neg.d(eax_30)
                edx_8 = neg.d(adc.d(edx_8, 0, temp4_1 != 0))
            else
                *(esi_4 + 1) = 0x2b
                esi_5 = esi_4 + 2
            
            void* edi_2 = esi_5
            *esi_5 = 0x30
            
            if (edx_8 s>= 0 && (edx_8 s> 0 || eax_30 u>= 0x3e8))
                char eax_31
                int32_t ecx_19
                int32_t edx_10
                eax_31, ecx_19, edx_10 = __alldvrm(eax_30, edx_8, 0x3e8, 0)
                *esi_5 = eax_31 + 0x30
                esi_5 += 1
                int32_t var_14_1 = edx_10
                eax_30 = ecx_19
                edx_8 = 0
                
                if (esi_5 != edi_2)
                    goto label_40ca5a
            
            if (edx_8 s>= 0 && (edx_8 s> 0 || eax_30 u>= 0x64))
            label_40ca5a:
                char eax_32
                int32_t ecx_20
                int32_t edx_11
                eax_32, ecx_20, edx_11 = __alldvrm(eax_30, edx_8, 0x64, 0)
                *esi_5 = eax_32 + 0x30
                int32_t var_14_2 = edx_11
                esi_5 += 1
                eax_30 = ecx_20
                edx_8 = 0
            
            if (esi_5 != edi_2)
            label_40ca80:
                char eax_33
                int32_t ecx_21
                int32_t edx_12
                eax_33, ecx_21, edx_12 = __alldvrm(eax_30, edx_8, 0xa, 0)
                *esi_5 = eax_33 + 0x30
                int32_t var_14_3 = edx_12
                esi_5 += 1
                eax_30 = ecx_21
                int32_t var_14_4 = 0
            else if (edx_8 s>= 0 && (edx_8 s> 0 || eax_30 u>= 0xa))
                goto label_40ca80
            
            eax_30.b += 0x30
            *esi_5 = eax_30.b
            *(esi_5 + 1) = 0
        else
            int32_t eax_7
            
            if (arg3 != 0xffffffff)
                eax_7 = arg3 - 2
            else
                eax_7 = arg3
            
            int32_t eax_8 = __ui64tow_s(arg1, &esi[2], eax_7, arg4, 0)
            
            if (eax_8 != 0)
                *esi = 0
                
                if (var_1c != 0)
                    *(var_20 + 0x70) &= 0xfffffffd
                
                return eax_8
            
            if (esi[2] == 0x2d)
                *esi = 0x2d
                esi = &esi[1]
            
            *esi = 0x30
            eax_8.b = arg5 == 0
            eax_8.b -= 1
            eax_8.b &= 0xe0
            eax_8.b += 0x78
            esi[1] = eax_8.b
            char* eax_9 = sub_410ef0(&esi[2], 0x65)
            
            if (eax_9 != 0)
                *eax_9 = (((arg5 == 0) - 1) & 0xe0) + 0x70
                eax_9[3] = 0
        
        if (var_1c != 0)
            *(var_20 + 0x70) &= 0xfffffffd
        
        return 0
    
    eax = __errno()
    __saved_ebx_1 = 0x22
else
    eax = __errno()
    __saved_ebx_1 = 0x16

*eax = __saved_ebx_1
__invalid_parameter_noinfo()

if (var_1c != 0)
    *(var_20 + 0x70) &= 0xfffffffd

return __saved_ebx_1
