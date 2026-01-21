// 函数: sub_40b735
// 地址: 0x40b735
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* ebx = arg2
int32_t edi
int32_t var_290 = edi
void* edi_1 = arg4
void* var_220 = edi_1
int32_t var_250 = 0
uint32_t var_214 = 0
int32_t var_23c = 0
uint32_t i_5 = 0
int32_t* var_238 = nullptr
int32_t var_248 = 0
int32_t var_240 = 0
void var_260
sub_4070a4(&var_260, arg3)
void* eax_2
uint32_t edx
eax_2, edx = __errno()
uint32_t result
void* var_258
char var_254

if (arg1 != 0)
    if ((arg1[3].b & 0x40) == 0)
        int32_t eax_5 = __fileno(arg1)
        void* ecx_5
        
        if (eax_5 == 0xffffffff || eax_5 == 0xfffffffe)
            ecx_5 = &data_41a520
        else
            ecx_5 = ((eax_5 & 0x1f) << 6) + (&data_42ea00)[eax_5 s>> 5]
        
        if ((*(ecx_5 + 0x24) & 0x7f) != 0)
            goto label_40b7b0
        
        void* eax_8
        
        if (eax_5 == 0xffffffff || eax_5 == 0xfffffffe)
            eax_8 = &data_41a520
        else
            eax_8 = ((eax_5 & 0x1f) << 6) + (&data_42ea00)[eax_5 s>> 5]
        
        if ((*(eax_8 + 0x24) & 0x80) != 0)
            goto label_40b7b0
        
        goto label_40b83a
    
label_40b83a:
    uint32_t ecx_8 = 0
    
    if (ebx == 0)
        goto label_40b7b0
    
    edx.b = *ebx
    uint32_t result_1 = 0
    uint32_t var_22c = 0
    char* var_24c_1 = nullptr
    char var_215_1 = edx.b
    
    if (edx.b != 0)
        while (true)
            void* var_244_1 = &ebx[1]
            
            if (result_1 s< 0)
                break
            
            int32_t eax_12
            
            if (edx.b - 0x20 u> 0x58)
                eax_12 = 0
            else
                eax_12 = sx.d(*(sx.d(edx.b) + "yz{|")) & 0xf
            
            uint32_t eax_14 = sx.d(*(ecx_8 + (eax_12 << 3) + 0x416d58)) s>> 4
            uint32_t var_278_1 = eax_14
            int32_t var_27c
            
            switch (eax_14)
                case 0
                    goto label_40bab7
                case 1
                    i_5 = 0xffffffff
                    var_27c = 0
                    var_248 = 0
                    var_23c = 0
                    var_238 = nullptr
                    var_214 = 0
                    var_240 = 0
                case 2
                    int32_t eax_15 = sx.d(edx.b)
                    
                    if (eax_15 == 0x20)
                        var_214 |= 2
                    else if (eax_15 == 0x23)
                        var_214 |= 0x80
                    else if (eax_15 == 0x2b)
                        var_214 |= 1
                    else if (eax_15 == 0x2d)
                        var_214 |= 4
                    else if (eax_15 == 0x30)
                        var_214 |= 8
                case 3
                    if (edx.b != 0x2a)
                        var_23c = var_23c * 0xa + sx.d(edx.b) - 0x30
                    else
                        var_220 = edi_1 + 4
                        int32_t edi_3 = *edi_1
                        var_23c = edi_3
                        
                        if (edi_3 s< 0)
                            var_214 |= 4
                            var_23c = neg.d(var_23c)
                case 4
                    i_5 = 0
                case 5
                    if (edx.b != 0x2a)
                        i_5 = i_5 * 0xa + sx.d(edx.b) - 0x30
                    else
                        var_220 = edi_1 + 4
                        uint32_t i_8 = *edi_1
                        i_5 = i_8
                        
                        if (i_8 s< 0)
                            i_5 = 0xffffffff
                case 6
                    if (edx.b == 0x49)
                        eax_14.b = ebx[1]
                        
                        if (eax_14.b == 0x36 && ebx[2] == 0x34)
                            var_214 |= 0x8000
                            var_244_1 = &ebx[3]
                        else if (eax_14.b == 0x33 && ebx[2] == 0x32)
                            var_214 &= 0xffff7fff
                            var_244_1 = &ebx[3]
                        else if (eax_14.b != 0x64 && eax_14.b != 0x69 && eax_14.b != 0x6f
                                && eax_14.b != 0x75 && eax_14.b != 0x78 && eax_14.b != 0x58)
                            var_278_1 = 0
                        label_40bab7:
                            var_240 = 0
                            uint32_t eax_22
                            int32_t edx_1
                            eax_22, edx_1 = sub_40d0c6(edx.b, &var_260)
                            bool cond:0_1 = eax_22 == 0
                            eax_22.b = var_215_1
                            
                            if (not(cond:0_1))
                                eax_22, edx_1 = sub_40b6a0(eax_22, edx_1, arg1, &result_1)
                                eax_22.b = ebx[1]
                                var_244_1 = &ebx[2]
                                
                                if (eax_22.b == 0)
                                    goto label_40b7b0
                            
                            eax_14, edx = sub_40b6a0(eax_22, edx_1, arg1, &result_1)
                    else if (edx.b == 0x68)
                        var_214 |= 0x20
                    else if (edx.b == 0x6c)
                        if (ebx[1] != 0x6c)
                            var_214 |= 0x10
                        else
                            var_214 |= 0x1000
                            var_244_1 = &ebx[2]
                    else if (edx.b == 0x77)
                        var_214 |= 0x800
                case 7
                    eax_14 = sx.d(edx.b)
                    char* var_294_4
                    char var_230
                    char* var_224
                    char var_210
                    
                    if (eax_14 s> 0x64)
                        if (eax_14 s> 0x70)
                            if (eax_14 != 0x73)
                                if (eax_14 == 0x75)
                                    goto label_40bd82
                                
                                if (eax_14 != 0x78)
                                    goto label_40c0ee
                                
                                edi_1 = var_220
                                var_250 = 0x27
                                goto label_40bf4a
                            
                        label_40bb90:
                            uint32_t i = i_5
                            
                            if (i == 0xffffffff)
                                i = 0x7fffffff
                            
                            var_220 = edi_1 + 4
                            char* edi_6 = *edi_1
                            var_224 = edi_6
                            
                            if ((var_214 & 0x810) == 0)
                                if (edi_6 == 0)
                                    var_224 = data_41ace0
                                
                                char* eax_62 = var_224
                                
                                while (i != 0)
                                    i -= 1
                                    
                                    if (*eax_62 == 0)
                                        break
                                    
                                    eax_62 = &eax_62[1]
                                
                                eax_14 = eax_62 - var_224
                            else
                                if (edi_6 == 0)
                                    var_224 = data_41ace4
                                
                                char* eax_59 = var_224
                                var_240 = 1
                                
                                while (i != 0)
                                    i -= 1
                                    
                                    if (*eax_59 == 0)
                                        break
                                    
                                    eax_59 = &eax_59[2]
                                
                                eax_14 = (eax_59 - var_224) s>> 1
                            
                            goto label_40c0e8
                        
                        if (eax_14 == 0x70)
                            i_5 = 8
                        label_40bf11:
                            var_250 = 7
                        label_40bf4a:
                            var_22c = 0x10
                            
                            if ((var_214.b & 0x80) != 0)
                                eax_14.b = var_250.b
                                eax_14.b += 0x51
                                var_230 = 0x30
                                char var_22f_1 = eax_14.b
                                var_238 = 2
                            
                            goto label_40bf84
                        
                        if (eax_14 s< 0x65)
                            goto label_40c0ee
                        
                        if (eax_14 s<= 0x67)
                            edi_1 = var_220
                        label_40bdb1:
                            var_214 |= 0x40
                            char* ebx_6 = &var_210
                            var_224 = &var_210
                            uint32_t var_264_1 = 0x200
                            
                            if (i_5 s< 0)
                                i_5 = 6
                            else if (i_5 != 0)
                                if (i_5 s> 0x200)
                                    i_5 = 0x200
                                
                                if (i_5 s> 0xa3)
                                    char* eax_41
                                    eax_41, edx = sub_40ce55(i_5 + 0x15d)
                                    edx.b = var_215_1
                                    var_24c_1 = eax_41
                                    
                                    if (eax_41 == 0)
                                        i_5 = 0xa3
                                    else
                                        var_224 = eax_41
                                        var_264_1 = i_5 + 0x15d
                                        ebx_6 = eax_41
                            else if (edx.b == 0x67)
                                i_5 = 1
                            
                            int32_t var_284 = *edi_1
                            int32_t var_280_1 = *(edi_1 + 4)
                            var_220 = edi_1 + 8
                            DecodePointer(data_41ad00)(&var_284, ebx_6, var_264_1, sx.d(edx.b), 
                                i_5, var_27c, &var_260)
                            int32_t edi_12 = var_214 & 0x80
                            
                            if (edi_12 != 0 && i_5 == 0)
                                DecodePointer(data_41ad0c)(ebx_6, &var_260)
                            
                            if (var_215_1 == 0x67 && edi_12 == 0)
                                DecodePointer(data_41ad08)(ebx_6, &var_260)
                            
                            if (*ebx_6 == 0x2d)
                                var_214 |= 0x100
                                ebx_6 = &ebx_6[1]
                                var_224 = ebx_6
                            
                            var_294_4 = ebx_6
                            goto label_40bcc8
                        
                        if (eax_14 == 0x69)
                            edi_1 = var_220
                        label_40bd7b:
                            var_214 |= 0x40
                        label_40bd82:
                            var_22c = 0xa
                        label_40bf84:
                            int32_t eax_40
                            
                            if ((var_214 & 0x8000) == 0 && (var_214 & 0x1000) == 0)
                                void* edi_9 = edi_1 + 4
                                
                                if ((var_214.b & 0x20) == 0)
                                    eax_40 = *(edi_9 - 4)
                                    
                                    if ((var_214.b & 0x40) == 0)
                                        edx = 0
                                    else
                                        edx:eax_40 = sx.q(eax_40)
                                    
                                    var_220 = edi_9
                                else
                                    var_220 = edi_9
                                    int32_t eax_51
                                    
                                    if ((var_214.b & 0x40) == 0)
                                        eax_51 = zx.d(*(edi_9 - 4))
                                    else
                                        eax_51 = sx.d(*(edi_9 - 4))
                                    
                                    edx:eax_40 = sx.q(eax_51)
                            else
                                eax_40 = *edi_1
                                edx = *(edi_1 + 4)
                                var_220 = edi_1 + 8
                            
                            if ((var_214.b & 0x40) != 0 && edx s<= 0 && (edx s< 0 || eax_40 u< 0))
                                int32_t temp18_1 = eax_40
                                eax_40 = neg.d(eax_40)
                                edx = neg.d(adc.d(edx, 0, temp18_1 != 0))
                                var_214 |= 0x100
                            
                            uint32_t edi_13 = edx
                            int32_t ebx_7 = eax_40
                            
                            if ((var_214 & 0x9000) == 0)
                                edi_13 = 0
                            
                            if (i_5 s>= 0)
                                var_214 &= 0xfffffff7
                                
                                if (i_5 s> 0x200)
                                    i_5 = 0x200
                            else
                                i_5 = 1
                            
                            if ((ebx_7 | edi_13) == 0)
                                var_238 = nullptr
                            
                            void var_11
                            void* esi_8 = &var_11
                            
                            while (true)
                                uint32_t i_7 = i_5
                                i_5 -= 1
                                
                                if (i_7 s<= 0 && (ebx_7 | edi_13) == 0)
                                    break
                                
                                int32_t eax_57
                                uint32_t edx_3
                                edx_3:eax_57 = sx.q(var_22c)
                                uint32_t eax_58
                                int32_t ecx_20
                                eax_58, ecx_20, edx = __aulldvrm(ebx_7, edi_13, eax_57, edx_3)
                                int32_t ecx_21 = ecx_20 + 0x30
                                int32_t var_264_2 = ebx_7
                                ebx_7 = eax_58
                                edi_13 = edx
                                
                                if (ecx_21 s> 0x39)
                                    ecx_21 += var_250
                                
                                *esi_8 = ecx_21.b
                                esi_8 -= 1
                            
                            eax_14 = &var_11 - esi_8
                            var_22c = eax_14
                            var_224 = esi_8 + 1
                            
                            if ((var_214 & 0x200) == 0 || (eax_14 != 0 && *(esi_8 + 1) == 0x30))
                                goto label_40c0ee
                            
                            var_224 -= 1
                            *var_224 = 0x30
                            eax_14 += 1
                            goto label_40c0e8
                        
                        if (eax_14 != 0x6e)
                            if (eax_14 != 0x6f)
                                goto label_40c0ee
                            
                            edi_1 = var_220
                            var_22c = 8
                            
                            if ((var_214.b & 0x80) != 0)
                                var_214 |= 0x200
                            
                            goto label_40bf84
                        
                        var_220 += 4
                        int16_t* esi_5 = *(var_220 - 4)
                        
                        if (sub_410cc0() == 0)
                            goto label_40b7b0
                        
                        if ((var_214.b & 0x20) == 0)
                            *esi_5 = result_1
                        else
                            eax_14.w = result_1.w
                            *esi_5 = eax_14.w
                        
                        var_248 = 1
                    else
                        if (eax_14 == 0x64)
                            goto label_40bd7b
                        
                        if (eax_14 s<= 0x53)
                            if (eax_14 == 0x53)
                                if ((var_214 & 0x830) == 0)
                                    var_214 |= 0x800
                                
                                goto label_40bb90
                            
                            if (eax_14 == 0x41)
                            label_40bb43:
                                edx.b += 0x20
                                var_27c = 1
                                var_215_1 = edx.b
                                goto label_40bdb1
                            
                            int32_t eax_24 = eax_14 - 0x42
                            
                            if (eax_24 == 1)
                                if ((var_214 & 0x830) == 0)
                                    var_214 |= 0x800
                                
                                goto label_40bc16
                            
                            if (eax_24 == 3 || eax_24 == 5)
                                goto label_40bb43
                            
                            goto label_40c0ee
                        
                        if (eax_14 == 0x58)
                            goto label_40bf11
                        
                        int32_t eax_29 = eax_14 - 0x59
                        
                        if (eax_29 != 1)
                            if (eax_29 == 8)
                                goto label_40bdb1
                            
                            if (eax_29 != 0xa)
                                goto label_40c0ee
                            
                            edi_1 = var_220
                        label_40bc16:
                            var_220 = edi_1 + 4
                            
                            if ((var_214 & 0x810) == 0)
                                eax_14.b = *edi_1
                                var_210 = eax_14.b
                                var_22c = 1
                            else
                                int32_t eax_34
                                eax_34, edx = __mbccpy_s(&var_22c, &var_210, 0x200, zx.d(*edi_1))
                                
                                if (eax_34 != 0)
                                    var_248 = 1
                            
                            var_224 = &var_210
                            goto label_40c0ee
                        
                        int16_t* eax_35 = *edi_1
                        var_220 = edi_1 + 4
                        char* ecx_14
                        
                        if (eax_35 != 0)
                            ecx_14 = *(eax_35 + 4)
                        
                        if (eax_35 != 0 && ecx_14 != 0)
                            eax_14 = sx.d(*eax_35)
                            var_224 = ecx_14
                            
                            if ((var_214 & 0x800) == 0)
                                var_240 = 0
                            else
                                int32_t eax_36
                                edx:eax_36 = sx.q(eax_14)
                                eax_14 = (eax_36 - edx) s>> 1
                                var_240 = 1
                            
                            goto label_40c0e8
                        
                        char* eax_38 = data_41ace0
                        var_224 = eax_38
                        var_294_4 = eax_38
                    label_40bcc8:
                        eax_14, edx = _strlen(var_294_4)
                    label_40c0e8:
                        var_22c = eax_14
                    label_40c0ee:
                        
                        if (var_248 == 0)
                            uint32_t ecx_24 = var_214
                            
                            if ((ecx_24.b & 0x40) != 0)
                                if ((ecx_24 & 0x100) != 0)
                                    var_230 = 0x2d
                                    var_238 = 1
                                else if ((ecx_24.b & 1) != 0)
                                    var_230 = 0x2b
                                    var_238 = 1
                                else if ((ecx_24.b & 2) != 0)
                                    var_230 = 0x20
                                    var_238 = 1
                            
                            void* i_6 = var_23c - var_22c - var_238
                            void* i_4 = i_6
                            
                            if ((ecx_24.b & 0xc) == 0)
                                void* i_1 = i_6
                                
                                while (i_1 s> 0)
                                    ecx_24 = arg1
                                    i_6.b = 0x20
                                    i_1 -= 1
                                    i_6, edx = sub_40b6a0(i_6, edx, ecx_24, &result_1)
                                    
                                    if (result_1 == 0xffffffff)
                                        break
                            
                            char* var_298_6 = &var_230
                            uint32_t eax_66
                            uint32_t edx_4
                            eax_66, edx_4 = sub_40b6d3(&result_1, eax_2, edx, ecx_24)
                            int32_t* ecx_25 = var_238
                            
                            if ((var_214.b & 8) != 0 && (var_214.b & 4) == 0)
                                void* i_2 = i_4
                                
                                while (i_2 s> 0)
                                    ecx_25 = arg1
                                    eax_66.b = 0x30
                                    i_2 -= 1
                                    eax_66, edx_4 = sub_40b6a0(eax_66, edx_4, ecx_25, &result_1)
                                    
                                    if (result_1 == 0xffffffff)
                                        break
                            
                            uint32_t eax_67 = var_22c
                            
                            if (var_240 == 0 || eax_67 s<= 0)
                                uint32_t var_294_13 = eax_67
                                char* var_298_8 = var_224
                                eax_14, edx = sub_40b6d3(&result_1, eax_2, edx_4, ecx_25)
                            else
                                char* esi_12 = var_224
                                uint32_t var_26c_1 = eax_67
                                
                                while (true)
                                    uint32_t eax_68 = zx.d(*esi_12)
                                    var_26c_1 -= 1
                                    esi_12 = &esi_12[2]
                                    int32_t var_274
                                    void var_10
                                    uint32_t ecx_26
                                    eax_14, ecx_26, edx = __mbccpy_s(&var_274, &var_10, 6, eax_68)
                                    
                                    if (eax_14 != 0 || var_274 == eax_14)
                                        result_1 = 0xffffffff
                                        break
                                    
                                    int32_t var_294_12 = var_274
                                    void* var_298_7 = &var_10
                                    eax_14, edx = sub_40b6d3(&result_1, eax_2, edx, ecx_26)
                                    
                                    if (var_26c_1 == 0)
                                        break
                                    
                                    continue
                            
                            if (result_1 s>= 0 && (var_214.b & 4) != 0)
                                void* i_3 = i_4
                                
                                while (i_3 s> 0)
                                    eax_14.b = 0x20
                                    i_3 -= 1
                                    eax_14, edx = sub_40b6a0(eax_14, edx, arg1, &result_1)
                                    
                                    if (result_1 == 0xffffffff)
                                        break
                    
                    if (var_24c_1 != 0)
                        eax_14, edx = __free_base(var_24c_1)
                        var_24c_1 = nullptr
            
            ebx = var_244_1
            eax_14.b = *ebx
            var_215_1 = eax_14.b
            
            if (eax_14.b == 0)
                break
            
            ecx_8 = var_278_1
            edi_1 = var_220
            edx.b = eax_14.b
    
    if (var_254 != 0)
        *(var_258 + 0x70) &= 0xfffffffd
    
    result = result_1
else
label_40b7b0:
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    
    if (var_254 != 0)
        *(var_258 + 0x70) &= 0xfffffffd
    
    result = 0xffffffff
sub_407fad(eax_1 ^ &__saved_ebp)
return result
