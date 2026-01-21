// 函数: sub_4140dc
// 地址: 0x4140dc
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int16_t eax_3 = arg3 & 0x8000
int16_t edx_1 = arg3 & 0x7fff
int32_t edi
int32_t var_84 = edi
int32_t var_34 = 0xcccccccc
int32_t var_30 = 0xcccccccc
int32_t var_2c = 0x3ffbcccc

if (eax_3 == 0)
    arg6[1].b = 0x20
else
    arg6[1].b = 0x2d

int32_t result

if (edx_1 == 0)
    if (arg2 != 0 || arg1 != 0)
        goto label_41421d
    
    *arg6 = 0
    arg6[1].b = (((eax_3 != 0x8000) - 1) & 0xd) + 0x20
    *(arg6 + 3) = 0x3001
    *(arg6 + 5) = 0
    result = 1
else if (edx_1 != 0x7fff)
label_41421d:
    uint32_t ecx_2 = zx.d(edx_1)
    uint32_t eax_15 = zx.d(((((ecx_2 u>> 8) + (arg2 u>> 0x18 << 1)) * 0x4d + ecx_2 * 0x4d10
        - 0x134312f4) s>> 0x10).w)
    int16_t var_24_1 = 0
    int32_t i = neg.d(sx.d(eax_15.w))
    uint32_t var_50_1 = eax_15
    int16_t var_1a_1 = edx_1
    uint32_t i_8 = arg2
    int32_t var_22 = arg1
    void** var_6c_1 = &data_41af70
    void* j
    int32_t var_40
    int32_t var_3c
    int32_t var_10
    
    if (i != 0)
        bool cond:4_1 = i == 0
        
        if (i s< 0)
            i = neg.d(i)
            var_6c_1 = &data_41b0d0
            cond:4_1 = i == 0
        
        if (not(cond:4_1))
            do
                var_6c_1 = &var_6c_1[0x15]
                int32_t i_10 = i
                i s>>= 3
                int32_t ecx_4 = i_10 & 7
                
                if (ecx_4 != 0)
                    void* ecx_6 = ecx_4 * 0xc + var_6c_1
                    void* eax_16 = ecx_6
                    void* var_48_1 = ecx_6
                    
                    if (*eax_16 u>= 0x8000)
                        var_40 = *eax_16
                        int32_t* edi_2 = &var_3c
                        void* esi_2 = eax_16 + 4
                        *edi_2 = *esi_2
                        eax_16 = &var_40
                        edi_2[1] = *(esi_2 + 4)
                        var_40 -= 1
                        var_48_1 = &var_40
                    
                    int32_t var_4c_1 = 0
                    int32_t var_14_1 = 0
                    var_10 = 0
                    uint32_t i_12 = 0
                    int16_t ecx_7 = *(eax_16 + 0xa)
                    int16_t edx_4 = (ecx_7 ^ var_1a_1) & 0x8000
                    int16_t edx_6 = var_1a_1 & 0x7fff
                    int16_t ecx_8 = ecx_7 & 0x7fff
                    uint32_t edi_5 = zx.d(ecx_8 + edx_6)
                    
                    if (edx_6 u>= 0x7fff || ecx_8 u>= 0x7fff || edi_5.w u> 0xbffd)
                        int32_t eax_33
                        eax_33.b = edx_4 == 0
                        i_8 = ((eax_33 - 1) & 0x80000000) + 0x7fff8000
                        var_22 = 0
                        var_24_1.d = 0
                    else if (edi_5.w u> 0x3fbf)
                        if (edx_6 == 0)
                            edi_5 += 1
                        
                        if (edx_6 != 0 || (i_8 & 0x7fffffff) != 0 || var_22 != 0 || var_24_1.d != 0)
                            if (ecx_8 == 0)
                                edi_5 += 1
                            
                            if (ecx_8 == 0 && (*(eax_16 + 8) & 0x7fffffff) == 0
                                    && *(eax_16 + 4) == 0 && *eax_16 == 0)
                                goto label_414320
                            
                            int32_t var_58_1 = 0
                            int32_t* esi_6 = &var_10
                            
                            for (j = 5; j s> 0; j -= 1)
                                void* edx_7 = j
                                void* k = edx_7
                                
                                if (edx_7 s> 0)
                                    void* var_74_1 = &__saved_ebp + var_58_1 * 2 - 0x20
                                    void* var_70_1 = eax_16 + 8
                                    
                                    do
                                        int32_t edx_8 = esi_6[-1]
                                        int32_t ecx_13 = zx.d(*var_74_1) * zx.d(*var_70_1)
                                        int32_t var_60_1 = 0
                                        int32_t eax_21 = edx_8 + ecx_13
                                        
                                        if (eax_21 u< edx_8 || eax_21 u< ecx_13)
                                            var_60_1 = 1
                                        
                                        esi_6[-1] = eax_21
                                        
                                        if (var_60_1 != 0)
                                            *esi_6 += 1
                                        
                                        var_74_1 += 2
                                        var_70_1 -= 2
                                        k -= 1
                                    while (k s> 0)
                                    
                                    eax_16 = var_48_1
                                
                                esi_6 += 2
                                var_58_1 += 1
                            
                            int32_t edi_6 = edi_5 + 0xc002
                            
                            if (edi_6.w s<= 0)
                            label_414432:
                                edi_6 += 0xffff
                                
                                if (edi_6.w s< 0)
                                    uint32_t j_3 = zx.d((neg.d(edi_6)).w)
                                    edi_6 += j_3
                                    uint32_t j_1
                                    
                                    do
                                        if ((var_14_1.b & 1) != 0)
                                            var_4c_1 += 1
                                        
                                        uint32_t i_17 = i_12
                                        i_12 u>>= 1
                                        int32_t ecx_19 = var_14_1 u>> 1 | var_10 << 0x1f
                                        j_1 = j_3
                                        j_3 -= 1
                                        var_10 = var_10 u>> 1 | i_17 << 0x1f
                                        var_14_1 = ecx_19
                                    while (j_1 != 1)
                                    
                                    if (var_4c_1 != j_3)
                                        var_14_1.w |= 1
                            else
                                while ((i_12 & 0x80000000) == 0)
                                    int32_t eax_22 = var_10
                                    int32_t ecx_14 = var_14_1
                                    var_14_1 <<= 1
                                    var_10 = (eax_22 * 2) | ecx_14 u>> 0x1f
                                    edi_6 += 0xffff
                                    i_12 = (i_12 * 2) | eax_22 u>> 0x1f
                                    
                                    if (edi_6.w s<= 0)
                                        break
                                
                                if (edi_6.w s<= 0)
                                    goto label_414432
                            
                            if (var_14_1.w u> 0x8000 || (var_14_1 & 0x1ffff) == 0x18000)
                                if (var_14_1 != 0xffffffff)
                                    var_14_1 += 1
                                else
                                    var_14_1 = 0
                                    
                                    if (var_10 != 0xffffffff)
                                        var_10 += 1
                                    else
                                        var_10 = 0
                                        
                                        if (i_12:2.w != 0xffff)
                                            i_12:2.w += 1
                                        else
                                            i_12:2.w = 0x8000
                                            edi_6 += 1
                            
                            if (edi_6.w u< 0x7fff)
                                var_24_1 = var_14_1:2.w
                                var_22 = var_10
                                i_8 = i_12
                                var_1a_1 = edi_6.w | edx_4
                            else
                                var_22 = 0
                                int32_t ecx_22
                                ecx_22.b = edx_4 == 0
                                var_24_1.d = 0
                                i_8 = ((ecx_22 - 1) & 0x80000000) + 0x7fff8000
                        else
                            var_1a_1 = 0
                    else
                    label_414320:
                        i_8 = 0
                        var_22 = 0
                        var_24_1.d = 0
            while (i != 0)
    
    uint16_t ecx_27 = (i_8 u>> 0x10).w
    
    if (ecx_27 u>= 0x3fff)
        int16_t ebx_4 = var_2c.w
        var_50_1 += 1
        int32_t var_54_1 = 0
        int32_t var_14_2 = 0
        var_10 = 0
        uint32_t i_2 = 0
        int16_t ecx_28 = ecx_27 & 0x7fff
        int16_t edx_14 = var_2c.w & 0x7fff
        int16_t ebx_6 = (ebx_4 ^ ecx_27) & 0x8000
        uint32_t esi_11 = zx.d(edx_14 + ecx_28)
        
        if (ecx_28 u>= 0x7fff || edx_14 u>= 0x7fff || esi_11.w u> 0xbffd)
            int32_t eax_50
            eax_50.b = ebx_6 == 0
            var_22 = 0
            var_24_1.d = 0
            i_8 = ((eax_50 - 1) & 0x80000000) + 0x7fff8000
        else
            int32_t i_13
            
            if (esi_11.w u> 0x3fbf)
                i_13 = 0
                
                if (ecx_28 == 0)
                    esi_11 += 1
                
                if (ecx_28 != 0 || (i_8 & 0x7fffffff) != 0 || var_22 != 0 || var_24_1.d != 0)
                    if (edx_14 == 0)
                        esi_11 += 1
                    
                    if (edx_14 == 0 && (var_2c & 0x7fffffff) == 0 && var_30 == 0 && var_34 == 0)
                        goto label_414579
                    
                    int32_t var_58_2 = 0
                    int32_t* edi_8 = &var_10
                    
                    for (j = 5; j s> 0; j -= 1)
                        void* j_4 = j
                        void* j_2 = j_4
                        
                        if (j_4 s> 0)
                            int32_t* var_5c_2 = &var_2c
                            void* eax_39 = &__saved_ebp + var_58_2 * 2 - 0x20
                            
                            do
                                int32_t var_48_2 = 0
                                int32_t ecx_31 = zx.d(*var_5c_2) * zx.d(*eax_39)
                                int32_t edx_16 = edi_8[-1]
                                int32_t ebx_7 = edx_16 + ecx_31
                                
                                if (ebx_7 u< edx_16 || ebx_7 u< ecx_31)
                                    var_48_2 = 1
                                
                                edi_8[-1] = ebx_7
                                
                                if (var_48_2 != 0)
                                    *edi_8 += 1
                                
                                var_5c_2 -= 2
                                eax_39 += 2
                                j_2 -= 1
                            while (j_2 s> 0)
                        
                        edi_8 += 2
                        var_58_2 += 1
                    
                    int32_t esi_12 = esi_11 + 0xc002
                    
                    if (esi_12.w s<= 0)
                    label_4146bb:
                        esi_12 += 0xffff
                        
                        if (esi_12.w s< 0)
                            uint32_t i_9 = zx.d((neg.d(esi_12)).w)
                            esi_12 += i_9
                            uint32_t i_1
                            
                            do
                                if ((var_14_2.b & 1) != 0)
                                    var_54_1 += 1
                                
                                uint32_t i_11 = i_2
                                i_2 u>>= 1
                                int32_t ecx_37 = var_14_2 u>> 1 | var_10 << 0x1f
                                i_1 = i_9
                                i_9 -= 1
                                var_10 = var_10 u>> 1 | i_11 << 0x1f
                                var_14_2 = ecx_37
                            while (i_1 != 1)
                            
                            if (var_54_1 != i_9)
                                var_14_2.w |= 1
                    else
                        while (i_2 s>= 0)
                            int32_t eax_40 = var_10
                            int32_t ecx_32 = var_14_2
                            var_14_2 <<= 1
                            var_10 = (eax_40 * 2) | ecx_32 u>> 0x1f
                            esi_12 += 0xffff
                            i_2 = (i_2 * 2) | eax_40 u>> 0x1f
                            
                            if (esi_12.w s<= 0)
                                break
                        
                        if (esi_12.w s<= 0)
                            goto label_4146bb
                    
                    if (var_14_2.w u> 0x8000 || (var_14_2 & 0x1ffff) == 0x18000)
                        if (var_14_2 != 0xffffffff)
                            var_14_2 += 1
                        else
                            var_14_2 = 0
                            
                            if (var_10 != 0xffffffff)
                                var_10 += 1
                            else
                                var_10 = 0
                                
                                if (i_2:2.w != 0xffff)
                                    i_2:2.w += 1
                                else
                                    i_2:2.w = 0x8000
                                    esi_12 += 1
                    
                    if (esi_12.w u< 0x7fff)
                        var_24_1 = var_14_2:2.w
                        var_22 = var_10
                        i_8 = i_2
                        int16_t var_1a_3 = esi_12.w | ebx_6
                    else
                        var_22 = 0
                        int32_t ecx_40
                        ecx_40.b = ebx_6 == 0
                        var_24_1.d = 0
                        i_8 = ((ecx_40 - 1) & 0x80000000) + 0x7fff8000
                else
                    int16_t var_1a_2 = 0
            else
                i_13 = 0
            label_414579:
                var_22 = 0
                var_24_1.d = 0
                i_8 = i_13
    
    int16_t eax_53 = var_50_1.w
    int32_t edi_13 = arg4
    *arg6 = eax_53
    
    if ((arg5 & 1) != 0)
        edi_13 += sx.d(eax_53)
    
    if ((arg5 & 1) == 0 || edi_13 s> 0)
        if (edi_13 s> 0x15)
            edi_13 = 0x15
        
        int32_t esi_16 = (i_8 u>> 0x10) - 0x3ffe
        int16_t var_1a_4 = 0
        int32_t i_7 = 8
        int32_t i_3
        
        do
            int32_t eax_56 = var_24_1.d
            var_24_1.d <<= 1
            uint32_t i_14 = (i_8 * 2) | var_22 u>> 0x1f
            i_3 = i_7
            i_7 -= 1
            var_22 = (var_22 * 2) | eax_56 u>> 0x1f
            i_8 = i_14
        while (i_3 != 1)
        
        if (esi_16 s< 0)
            uint32_t i_4 = zx.d((neg.d(esi_16)).b)
            
            while (i_4 s> 0)
                uint32_t i_15 = i_8
                i_8 u>>= 1
                int32_t eax_63 = var_24_1.d u>> 1 | var_22 << 0x1f
                i_4 -= 1
                var_22 = var_22 u>> 1 | i_15 << 0x1f
                var_24_1.d = eax_63
        
        void* j_6 = &arg6[2]
        j = j_6
        uint32_t i_5 = edi_13 + 1
        
        if (edi_13 + 1 s> 0)
            do
                int32_t edx_22 = var_24_1.d
                int32_t eax_64 = var_22
                var_40 = var_24_1.d
                int32_t* edi_14 = &var_3c
                void* esi_18 = &var_22:2
                *edi_14 = *esi_18
                edi_14[1] = *(esi_18 + 4)
                var_24_1.d <<= 1
                int32_t edi_17 = var_24_1.d
                var_24_1.d <<= 1
                int32_t ecx_49 = (eax_64 * 2) | edx_22 u>> 0x1f
                int32_t edx_27 = var_40
                uint32_t ecx_51 = (((i_8 * 2) | eax_64 u>> 0x1f) * 2) | ecx_49 u>> 0x1f
                int32_t eax_67 = var_24_1.d
                int32_t esi_24 = (ecx_49 * 2) | edi_17 u>> 0x1f
                int32_t edi_19 = edx_27 + eax_67
                
                if (edi_19 u< eax_67 || edi_19 u< edx_27)
                    int32_t edx_28 = 0
                    
                    if (esi_24 + 1 u< esi_24 || esi_24 + 1 u< 1)
                        edx_28 = 1
                    
                    esi_24 += 1
                    
                    if (edx_28 != 0)
                        ecx_51 += 1
                
                int32_t eax_69 = var_3c
                int32_t edx_29 = eax_69 + esi_24
                
                if (edx_29 u< esi_24 || edx_29 u< eax_69)
                    ecx_51 += 1
                
                int32_t var_38
                int32_t i_16 = ((ecx_51 + var_38) * 2) | edx_29 u>> 0x1f
                var_24_1.d = edi_19 * 2
                i_8 = i_16
                *j_6 = (i_16 u>> 0x18).b + 0x30
                j_6 += 1
                i_5 -= 1
                var_22 = (edx_29 * 2) | edi_19 u>> 0x1f
                var_1a_4:1.b = 0
            while (i_5 s> 0)
        
        uint32_t eax_71
        eax_71.b = *(j_6 - 1)
        void* i_6 = j_6 - 2
        int16_t* eax_72
        
        if (eax_71.b s>= 0x35)
            for (; i_6 u>= j; i_6 -= 1)
                if (*i_6 != 0x39)
                    break
                
                *i_6 = 0x30
            
            eax_72 = arg6
            
            if (i_6 u< j)
                i_6 += 1
                *eax_72 += 1
            
            *i_6 += 1
            goto label_414975
        
        void* j_5
        
        for (j_5 = j; i_6 u>= j_5; i_6 -= 1)
            if (*i_6 != 0x30)
                break
        
        eax_72 = arg6
        
        if (i_6 u>= j_5)
        label_414975:
            i_6.b -= eax_72.b
            i_6.b -= 3
            *(eax_72 + 3) = i_6.b
            *(sx.d(i_6.b) + eax_72 + 4) = 0
            result = 1
        else
            *eax_72 = 0
            *(eax_72 + 3) = 1
            eax_72[1].b = (((eax_3 != 0x8000) - 1) & 0xd) + 0x20
            *j_5 = 0x30
            *(eax_72 + 5) = 0
            result = 1
    else
        *arg6 = 0
        *(arg6 + 3) = 0x3001
        arg6[1].b = (((eax_3 != 0x8000) - 1) & 0xd) + 0x20
        *(arg6 + 5) = 0
        result = 1
else
    *arg6 = 1
    char* var_88_1
    
    if ((arg2 != 0x80000000 || arg1 != 0) && (arg2 & 0x40000000) == 0)
        var_88_1 = "1#SNAN"
    label_414206:
        
        if (sub_40b1cd(&arg6[2], 0x16, var_88_1) != 0)
        label_4141b3:
            int32_t var_98
            __builtin_memset(&var_98, 0, 0x14)
            sub_408fb2()
            noreturn
        
        *(arg6 + 3) = 6
    else
        char* var_88_2
        
        if (eax_3 == 0 || arg2 != 0xc0000000)
            if (arg2 != 0x80000000 || arg1 != 0)
                var_88_1 = "1#QNAN"
                goto label_414206
            
            var_88_2 = "1#INF"
        else
            if (arg1 != 0)
                var_88_1 = "1#QNAN"
                goto label_414206
            
            var_88_2 = "1#IND"
        
        if (sub_40b1cd(&arg6[2], 0x16, var_88_2) != 0)
            goto label_4141b3
        
        *(arg6 + 3) = 5
    result = 0

sub_407fad(eax_1 ^ &__saved_ebp)
return result
