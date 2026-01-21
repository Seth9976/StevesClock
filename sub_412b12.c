// 函数: sub_412b12
// 地址: 0x412b12
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_34 = edi
int32_t eax_4 = sub_40aca1()
int32_t var_18 = 0
int32_t result

if (data_42e9b8 != 0)
label_412bc5:
    int32_t eax_15 = data_42e9c4
    
    if (eax_15 == eax_4 || data_42e9c8 == eax_4)
    label_412c1e:
        int32_t eax_20 = data_42e9bc
        
        if (eax_20 != eax_4)
            int32_t eax_21 = DecodePointer(eax_20)
            
            if (eax_21 != 0)
                int32_t eax_22 = eax_21()
                var_18 = eax_22
                
                if (eax_22 != 0)
                    int32_t eax_23 = data_42e9c0
                    
                    if (eax_23 != eax_4)
                        int32_t eax_24 = DecodePointer(eax_23)
                        
                        if (eax_24 != 0)
                            var_18 = eax_24(var_18)
    else
        int32_t eax_16 = DecodePointer(eax_15)
        int32_t eax_17 = DecodePointer(data_42e9c8)
        
        if (eax_16 == 0 || eax_17 == 0)
            goto label_412c1e
        
        int32_t eax_18 = eax_16()
        int32_t eax_19
        void var_28
        void var_14
        
        if (eax_18 != 0)
            eax_19 = eax_17(eax_18, 1, &var_14, 0xc, &var_28)
        char var_c
        
        if (eax_18 != 0 && eax_19 != 0 && (var_c & 1) != 0)
            goto label_412c1e
        
        arg3 |= 0x200000
    
    int32_t eax_26 = DecodePointer(data_42e9b8)
    
    if (eax_26 == 0)
        result = 0
    else
        result = eax_26(var_18, arg1, arg2, arg3)
else
    HMODULE hModule = LoadLibraryW(u"USER32.DLL")
    
    if (hModule == 0)
        result = 0
    else
        int32_t eax_5 = GetProcAddress(hModule, "MessageBoxW")
        
        if (eax_5 != 0)
            data_42e9b8 = EncodePointer(eax_5)
            data_42e9bc = EncodePointer(GetProcAddress(hModule, "GetActiveWindow"))
            data_42e9c0 = EncodePointer(GetProcAddress(hModule, "GetLastActivePopup"))
            int32_t eax_12 = EncodePointer(GetProcAddress(hModule, "GetUserObjectInformationW"))
            data_42e9c8 = eax_12
            
            if (eax_12 != 0)
                data_42e9c4 = EncodePointer(GetProcAddress(hModule, "GetProcessWindowStation"))
            
            goto label_412bc5
        
        result = 0

sub_407fad(eax_1 ^ &__saved_ebp)
return result
