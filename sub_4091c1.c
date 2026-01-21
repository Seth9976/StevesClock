// 函数: sub_4091c1
// 地址: 0x4091c1
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_2 = 0x2c
int32_t var_8 = 0x418338
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x418338 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_50 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_50
void* const var_54_13 = &data_4091cd
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_3c = 0
int32_t var_30_1
__builtin_memset(&var_30_1, 0, 0x14)
sub_40e3f5(7)
int32_t var_8_1 = 0
void** var_24 = &data_41a518
int32_t var_2c
int32_t var_28
int32_t var_20

if (sub_40998c(&var_20) == 0 && _rand_s(&var_28) == 0 && sub_40995f(&var_2c) == 0)
    uint32_t CodePage = sub_40fc9f()
    data_42dd8c = 0
    data_41a47c = 0xffffffff
    data_41a470 = 0xffffffff
    void* eax_3 = __getenv_helper_nolock("TZ")
    void* var_40_1 = eax_3
    
    if (eax_3 == 0 || *eax_3 == 0)
        int32_t eax_13 = data_42dd90
        
        if (eax_13 != 0)
            __free_base(eax_13)
            data_42dd90 = 0
        
        if (GetTimeZoneInformation(&data_42dce0) != 0xffffffff)
            data_42dd8c = 1
            int32_t eax_16 = data_42dce0 * 0x3c
            var_20 = eax_16
            
            if (data_42dd26 != 0)
                var_20 = eax_16 + data_42dd34 * 0x3c
            
            int32_t eax_18
            
            if (data_42dd7a != 0)
                eax_18 = data_42dd88
            
            if (data_42dd7a == 0 || eax_18 == 0)
                var_28 = 0
                var_2c = 0
            else
                var_28 = 1
                var_2c = (eax_18 - data_42dd34) * 0x3c
            
            BOOL usedDefaultChar
            
            if (WideCharToMultiByte(CodePage, 0, &data_42dce4, 0xffffffff, *var_24, 0x3f, nullptr, 
                    &usedDefaultChar) == 0 || usedDefaultChar != 0)
                **var_24 = 0
            else
                *(*var_24 + 0x3f) = 0
            
            if (WideCharToMultiByte(CodePage, 0, &data_42dd38, 0xffffffff, var_24[1], 0x3f, 
                    nullptr, &usedDefaultChar) == 0 || usedDefaultChar != 0)
                *var_24[1] = 0
            else
                *(var_24[1] + 0x3f) = 0
        
        goto label_4093ba
    
    char* eax_4 = data_42dd90
    
    if (eax_4 == 0)
    label_409291:
        int32_t eax_9 = sub_40ce55(_strlen(eax_3) + 1)
        data_42dd90 = eax_9
        
        if (eax_9 == 0)
            goto label_4093ba
        
        void* eax_11 = _strlen(eax_3) + 1
        
        if (sub_40b1cd(data_42dd90, eax_11, eax_3) == 0)
            goto label_4093c9
    else
        if (sub_40fb90(eax_3, eax_4) != 0)
            int32_t eax_6 = data_42dd90
            
            if (eax_6 != 0)
                __free_base(eax_6)
            
            goto label_409291
        
    label_4093ba:
        var_30_1 = 1
    label_4093c9:
        data_41a488 = var_20
        data_41a48c = var_28
        data_41a490 = var_2c
        int32_t var_8_2 = 0xfffffffe
        int32_t result = sub_409444()
        
        if (var_30_1 != 0)
            goto label_409ea8
        
        if (sub_40fad6(*var_24, 0x40, eax_3, 3) == 0)
            void* esi_2 = eax_3 + 3
            
            if (*esi_2 == 0x2d)
                var_3c = 1
                esi_2 += 1
            
            var_20 = sub_40fac0(esi_2) * 0xe10
            
            while (true)
                int32_t eax_35
                eax_35.b = *esi_2
                
                if (eax_35.b != 0x2b)
                    if (eax_35.b s< 0x30)
                        break
                    
                    if (eax_35.b s> 0x39)
                        break
                
                esi_2 += 1
            
            if (*esi_2 == 0x3a)
                esi_2 += 1
                int32_t eax_37 = sub_40fac0(esi_2) * 0x3c
                var_20 += eax_37
                
                while (true)
                    eax_37.b = *esi_2
                    
                    if (eax_37.b s< 0x30)
                        break
                    
                    if (eax_37.b s> 0x39)
                        break
                    
                    esi_2 += 1
                
                if (*esi_2 == 0x3a)
                    esi_2 += 1
                    int32_t eax_38 = sub_40fac0(esi_2)
                    var_20 += eax_38
                    
                    while (true)
                        eax_38.b = *esi_2
                        
                        if (eax_38.b s< 0x30)
                            break
                        
                        if (eax_38.b s> 0x39)
                            break
                        
                        esi_2 += 1
            
            if (var_3c != 0)
                var_20 = neg.d(var_20)
            
            int32_t eax_39 = sx.d(*esi_2)
            var_28 = eax_39
            
            if (eax_39 == 0)
                *var_24[1] = 0
            label_4094c2:
                data_41a488 = var_20
                int32_t esi_4 = var_28
                result = sub_4099b9()
                data_41a48c = esi_4
            label_409ea8:
                fsbase->NtTib.ExceptionList = ExceptionList
                void* const __saved_ebp_1 = &data_4094d3
                return result
            
            if (sub_40fad6(var_24[1], 0x40, esi_2, 3) == 0)
                goto label_4094c2

int32_t var_64
__builtin_memset(&var_64, 0, 0x14)
sub_408fb2()
noreturn
