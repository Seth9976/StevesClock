// 函数: sub_40c4f0
// 地址: 0x40c4f0
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

void* var_14
sub_4070a4(&var_14, arg7)
int32_t result
void* var_c
char var_8
void* eax

if (arg1 != 0 && arg2 u> 0)
    int32_t eax_3
    
    eax_3 = arg3 s<= 0 ? 0 : arg3
    
    if (arg2 u> eax_3 + 9)
        int32_t edi
        int32_t var_20_1 = edi
        
        if (arg6 != 0)
            int32_t eax_5
            eax_5.b = arg3 s> 0
            void* ecx_2
            ecx_2.b = *arg5 == 0x2d
            sub_40c4ab(ecx_2 + arg1, eax_5)
        
        void* esi_1 = arg1
        
        if (*arg5 == 0x2d)
            *arg1 = 0x2d
            esi_1 = &arg1[1]
        
        if (arg3 s> 0)
            void* eax_7 = var_14
            *esi_1 = *(esi_1 + 1)
            char* eax_9
            eax_9.b = ***(eax_7 + 0xbc)
            esi_1 += 1
            *esi_1 = eax_9.b
        
        int32_t eax_10
        eax_10.b = arg6 == 0
        void* esi_2 = esi_1 + eax_10 + arg3
        void* ebx_1
        
        if (arg2 != 0xffffffff)
            ebx_1 = arg1 - esi_2 + arg2
        else
            ebx_1 = 0xffffffff
        
        int32_t eax_12 = sub_40b1cd(esi_2, ebx_1, "e+000")
        
        if (eax_12 != 0)
            int32_t var_34
            __builtin_memset(&var_34, 0, 0x14)
            sub_408fb2()
            noreturn
        
        if (arg4 != eax_12)
            *esi_2 = 0x45
        
        if (*arg5[3] != 0x30)
            int32_t eax_14 = arg5[1]
            int32_t eax_15 = eax_14 - 1
            
            if (eax_14 - 1 s< 0)
                eax_15 = neg.d(eax_15)
                *(esi_2 + 1) = 0x2d
            
            if (eax_15 s>= 0x64)
                int32_t eax_16
                int32_t edx_2
                edx_2:eax_16 = sx.q(eax_15)
                *(esi_2 + 2) += (divs.dp.d(edx_2:eax_16, 0x64)).b
                eax_15 = mods.dp.d(edx_2:eax_16, 0x64)
            
            if (eax_15 s>= 0xa)
                int32_t eax_18
                int32_t edx_4
                edx_4:eax_18 = sx.q(eax_15)
                *(esi_2 + 3) += (divs.dp.d(edx_4:eax_18, 0xa)).b
                eax_15 = mods.dp.d(edx_4:eax_18, 0xa)
            
            *(esi_2 + 4) += eax_15.b
        
        if ((data_42e9b4 & 1) != 0 && *(esi_2 + 2) == 0x30)
            sub_4111b0(esi_2 + 2, esi_2 + 3, 3)
        
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        
        return 0
    
    eax = __errno()
    result = 0x22
else
    eax = __errno()
    result = 0x16

*eax = result
__invalid_parameter_noinfo()

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd

return result
