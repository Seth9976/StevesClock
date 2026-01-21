// 函数: sub_411e36
// 地址: 0x411e36
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t ecx_1 = zx.d(arg1[5])
int32_t ecx_2 = ecx_1 & 0x8000
int32_t var_14 = *(arg1 + 6)
int32_t ebx_2 = (ecx_1 & 0x7fff) - 0x3fff
uint32_t eax_4 = zx.d(*arg1) << 0x10
int32_t edi
int32_t var_44 = edi
int32_t var_10 = *(arg1 + 2)
uint32_t var_c = eax_4
int32_t result
int32_t ebx_3

if (ebx_2 != 0xffffc001)
    int32_t var_28_1 = 0
    int32_t var_20_1 = var_14
    void var_1c
    void* edi_4 = &var_1c
    int32_t* esi_1 = &var_10
    *edi_4 = *esi_1
    *(edi_4 + 4) = esi_1[1]
    int32_t edi_8 = data_41afc0 - 1
    int32_t eax_7
    int32_t edx_1
    edx_1:eax_7 = sx.q(edi_8 + 1)
    int32_t eax_9 = (eax_7 + (edx_1 & 0x1f)) s>> 5
    int32_t edx_4 = (edi_8 + 1) & 0x8000001f
    int32_t var_30_1 = ebx_2
    
    if (edx_4 s< 0)
        edx_4 = ((edx_4 - 1) | 0xffffffe0) + 1
    
    int32_t i
    
    if (((&__saved_ebp)[eax_9 - 4] & 1 << (0x1f - edx_4.b)) != 0)
        int32_t eax_11 = eax_9
        bool cond:1_1 = ((&var_14)[eax_11] & not.d(0xffffffff << (0x1f - edx_4.b))) != 0
        
        while (true)
            if (cond:1_1)
                int32_t eax_13
                int32_t edx_9
                edx_9:eax_13 = sx.q(edi_8)
                int32_t eax_15 = (eax_13 + (edx_9 & 0x1f)) s>> 5
                int32_t edi_9 = edi_8 & 0x8000001f
                
                if (edi_9 s< 0)
                    edi_9 = ((edi_9 - 1) | 0xffffffe0) + 1
                
                int32_t var_28_2 = 0
                int32_t edx_11 = 1 << (0x1f - edi_9.b)
                void* ecx_7 = &(&__saved_ebp)[eax_15 - 4]
                i = *ecx_7 + edx_11
                bool cond:3_1
                
                if (i u>= *ecx_7)
                    cond:3_1 = i u>= edx_11
                    goto label_411f78
                
            label_411f7a:
                var_28_2 = 1
                
                while (true)
                    int32_t temp1_1 = eax_15
                    eax_15 -= 1
                    *ecx_7 = i
                    
                    if (temp1_1 - 1 s< 0 || var_28_2 == 0)
                        var_28_1 = var_28_2
                        break
                    
                    var_28_2 = 0
                    ecx_7 = &(&__saved_ebp)[eax_15 - 4]
                    int32_t edx_12 = *ecx_7
                    i = edx_12 + 1
                    
                    if (edx_12 + 1 u< edx_12)
                        goto label_411f7a
                    
                    cond:3_1 = edx_12 + 1 u>= 1
                label_411f78:
                    
                    if (not(cond:3_1))
                        goto label_411f7a
                    
                    continue
                
                break
            
            eax_11 += 1
            
            if (eax_11 s>= 3)
                break
            
            cond:1_1 = (&var_14)[eax_11] != 0
    
    (&__saved_ebp)[eax_9 - 4] &= 0xffffffff << (0x1f - edx_4.b)
    
    if (eax_9 + 1 s< 3)
        __builtin_memset(&(&__saved_ebp)[eax_9 - 3], 0, (3 - (eax_9 + 1)) << 2)
    
    if (var_28_1 != 0)
        ebx_2 += 1
    
    int32_t eax_19 = data_41afbc
    
    if (ebx_2 s< eax_19 - data_41afc0)
        var_14 = 0
        int32_t* edi_17 = &var_10
        *edi_17 = 0
        edi_17[1] = 0
        ebx_3 = 0
        result = 2
    else if (ebx_2 s> eax_19)
        int32_t ecx_34 = data_41afc4
        
        if (ebx_2 s< data_41afb8)
            ebx_3 = ebx_2 + data_41afcc
            var_14 &= 0x7fffffff
            int32_t eax_44
            int32_t edx_48
            edx_48:eax_44 = sx.q(ecx_34)
            int32_t eax_46 = (eax_44 + (edx_48 & 0x1f)) s>> 5
            int32_t edx_51 = ecx_34 & 0x8000001f
            
            if (edx_51 s< 0)
                edx_51 = ((edx_51 - 1) | 0xffffffe0) + 1
            
            int32_t var_2c_6 = 0
            
            for (i = 0; i s< 3; )
                int32_t edi_33 = (&var_14)[i]
                (&var_14)[i] = edi_33 u>> edx_51.b | var_2c_6
                i += 1
                var_2c_6 = (edi_33 & not.d(0xffffffff << edx_51.b)) << (0x20 - edx_51.b)
            
            int32_t edx_54 = 2
            void* ecx_48 = &var_c - (eax_46 << 2)
            int32_t temp2_1
            
            do
                if (edx_54 s< eax_46)
                    (&var_14)[edx_54] = 0
                else
                    (&var_14)[edx_54] = *ecx_48
                
                ecx_48 -= 4
                temp2_1 = edx_54
                edx_54 -= 1
            while (temp2_1 - 1 s>= 0)
            result = 0
        else
            var_14 = 0
            int32_t* edi_29 = &var_10
            *edi_29 = 0
            edi_29[1] = 0
            var_14 |= 0x80000000
            int32_t eax_40
            int32_t edx_41
            edx_41:eax_40 = sx.q(ecx_34)
            int32_t eax_42 = (eax_40 + (edx_41 & 0x1f)) s>> 5
            int32_t edx_44 = ecx_34 & 0x8000001f
            
            if (edx_44 s< 0)
                edx_44 = ((edx_44 - 1) | 0xffffffe0) + 1
            
            int32_t var_2c_5 = 0
            
            for (i = 0; i s< 3; )
                int32_t esi_31 = (&__saved_ebp)[i - 4]
                (&__saved_ebp)[i - 4] = esi_31 u>> edx_44.b | var_2c_5
                i += 1
                var_2c_5 = (esi_31 & not.d(0xffffffff << edx_44.b)) << (0x20 - edx_44.b)
            
            int32_t edx_47 = 2
            void* ecx_40 = &var_c - (eax_42 << 2)
            int32_t temp4_1
            
            do
                if (edx_47 s< eax_42)
                    (&var_14)[edx_47] = 0
                else
                    (&var_14)[edx_47] = *ecx_40
                
                ecx_40 -= 4
                temp4_1 = edx_47
                edx_47 -= 1
            while (temp4_1 - 1 s>= 0)
            ebx_3 = data_41afcc + data_41afb8
            result = 1
    else
        int32_t eax_20 = eax_19 - var_30_1
        var_14 = var_20_1
        int32_t* edi_20 = &var_10
        void* esi_5 = &var_1c
        int32_t eax_21
        int32_t edx_14
        edx_14:eax_21 = sx.q(eax_20)
        *edi_20 = *esi_5
        int32_t eax_23 = (eax_21 + (edx_14 & 0x1f)) s>> 5
        int32_t edx_17 = eax_20 & 0x8000001f
        edi_20[1] = *(esi_5 + 4)
        
        if (edx_17 s< 0)
            edx_17 = ((edx_17 - 1) | 0xffffffe0) + 1
        
        int32_t var_2c_2 = 0
        
        for (i = 0; i s< 3; )
            int32_t esi_8 = (&__saved_ebp)[i - 4]
            (&__saved_ebp)[i - 4] = esi_8 u>> edx_17.b | var_2c_2
            i += 1
            var_2c_2 = (esi_8 & not.d(0xffffffff << edx_17.b)) << (0x20 - edx_17.b)
        
        int32_t edx_20 = 2
        void* ecx_19 = &var_c - (eax_23 << 2)
        int32_t temp3_1
        
        do
            if (edx_20 s< eax_23)
                (&var_14)[edx_20] = 0
            else
                (&var_14)[edx_20] = *ecx_19
            
            ecx_19 -= 4
            temp3_1 = edx_20
            edx_20 -= 1
        while (temp3_1 - 1 s>= 0)
        int32_t esi_17 = data_41afc0 - 1
        int32_t eax_25
        int32_t edx_21
        edx_21:eax_25 = sx.q(esi_17 + 1)
        int32_t eax_27 = (eax_25 + (edx_21 & 0x1f)) s>> 5
        int32_t edx_24 = (esi_17 + 1) & 0x8000001f
        int32_t var_34_2 = eax_27
        
        if (edx_24 s< 0)
            edx_24 = ((edx_24 - 1) | 0xffffffe0) + 1
        
        void* ebx_6 = &(&__saved_ebp)[eax_27 - 4]
        
        if ((*ebx_6 & 1 << (0x1f - edx_24.b)) != 0)
            bool cond:9_1 = ((&var_14)[eax_27] & not.d(0xffffffff << (0x1f - edx_24.b))) != 0
            
            while (true)
                if (cond:9_1)
                    int32_t eax_29
                    int32_t edx_30
                    edx_30:eax_29 = sx.q(esi_17)
                    int32_t eax_31 = (eax_29 + (edx_30 & 0x1f)) s>> 5
                    int32_t esi_18 = esi_17 & 0x8000001f
                    
                    if (esi_18 s< 0)
                        esi_18 = ((esi_18 - 1) | 0xffffffe0) + 1
                    
                    int32_t var_2c_3 = 0
                    int32_t edx_32 = 1 << (0x1f - esi_18.b)
                    int32_t esi_21 = (&__saved_ebp)[eax_31 - 4]
                    int32_t edi_24 = esi_21 + edx_32
                    
                    if (edi_24 u< esi_21 || edi_24 u< edx_32)
                        var_2c_3 = 1
                    
                    (&__saved_ebp)[eax_31 - 4] = edi_24
                    int32_t ecx_23 = var_2c_3
                    
                    while (true)
                        int32_t temp5_1 = eax_31
                        eax_31 -= 1
                        
                        if (temp5_1 - 1 s< 0)
                            break
                        
                        if (ecx_23 == 0)
                            break
                        
                        int32_t edx_33 = (&__saved_ebp)[eax_31 - 4]
                        int32_t edi_25 = 0
                        
                        if (edx_33 + 1 u< edx_33 || edx_33 + 1 u< 1)
                            edi_25 = 1
                        
                        (&__saved_ebp)[eax_31 - 4] = edx_33 + 1
                        ecx_23 = edi_25
                    
                    break
                
                eax_27 += 1
                
                if (eax_27 s>= 3)
                    break
                
                cond:9_1 = (&var_14)[eax_27] != 0
        
        *ebx_6 &= 0xffffffff << (0x1f - edx_24.b)
        
        if (var_34_2 + 1 s< 3)
            __builtin_memset(&(&__saved_ebp)[var_34_2 - 3], 0, (3 - (var_34_2 + 1)) << 2)
        
        int32_t ecx_27 = data_41afc4
        int32_t eax_36
        int32_t edx_34
        edx_34:eax_36 = sx.q(ecx_27 + 1)
        int32_t eax_38 = (eax_36 + (edx_34 & 0x1f)) s>> 5
        int32_t edx_37 = (ecx_27 + 1) & 0x8000001f
        
        if (edx_37 s< 0)
            edx_37 = ((edx_37 - 1) | 0xffffffe0) + 1
        
        int32_t var_2c_4 = 0
        
        for (i = 0; i s< 3; )
            int32_t esi_23 = (&__saved_ebp)[i - 4]
            (&__saved_ebp)[i - 4] = esi_23 u>> edx_37.b | var_2c_4
            i += 1
            var_2c_4 = (esi_23 & not.d(0xffffffff << edx_37.b)) << (0x20 - edx_37.b)
        
        int32_t edx_40 = 2
        void* ecx_33 = &var_c - (eax_38 << 2)
        int32_t temp6_1
        
        do
            if (edx_40 s< eax_38)
                (&var_14)[edx_40] = 0
            else
                (&var_14)[edx_40] = *ecx_33
            
            ecx_33 -= 4
            temp6_1 = edx_40
            edx_40 -= 1
        while (temp6_1 - 1 s>= 0)
        ebx_3 = 0
        result = 2
else
    ebx_3 = 0
    int32_t eax_5 = 0
    
    while (true)
        if ((&var_14)[eax_5] != 0)
            var_14 = 0
            int32_t* edi_1 = &var_10
            *edi_1 = 0
            edi_1[1] = 0
            result = 2
            break
        
        eax_5 += 1
        
        if (eax_5 s>= 3)
            result = 0
            break

int32_t ecx_51 = neg.d(ecx_2)
int32_t ecx_54 = data_41afc8
int32_t ebx_14 =
    ebx_3 << (0x1f - (data_41afc4).b) | (sbb.d(ecx_51, ecx_51, ecx_2 != 0) & 0x80000000) | var_14

if (ecx_54 == 0x40)
    int32_t edx_55 = var_10
    arg2[1] = ebx_14
    *arg2 = edx_55
else if (ecx_54 == 0x20)
    *arg2 = ebx_14

sub_407fad(eax_1 ^ &__saved_ebp)
return result
