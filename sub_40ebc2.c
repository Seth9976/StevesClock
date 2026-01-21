// 函数: sub_40ebc2
// 地址: 0x40ebc2
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_20c = edi
uint32_t hFile = sub_40eb9c(arg1)
uint32_t edi_1 = hFile
uint32_t numberOfBytesWritten = edi_1

if (edi_1 != 0)
    int32_t eax_2 = __set_error_mode(3)
    
    if (eax_2 != 1)
        hFile = __set_error_mode(3)
    
    if (eax_2 == 1 || (hFile == 0 && data_41a290 == 1))
        hFile = GetStdHandle(STD_ERROR_HANDLE)
        
        if (hFile != 0 && hFile != 0xffffffff)
            char buffer[0x1f3]
            
            for (int32_t i = 0; i u< 0x1f4; i += 1)
                buffer[i] = *(edi_1 + (i << 1))
                
                if (*(edi_1 + (i << 1)) == 0)
                    break
            
            char var_9_1 = 0
            hFile = WriteFile(hFile, &buffer, _strlen(&buffer), &numberOfBytesWritten, nullptr)
    else if (arg1 != 0xfc)
        int32_t eax_3 = sub_412ddb(0x42e270, 0x314, u"Runtime Error!\n\nProgram: ")
        
        if (eax_3 != 0)
            int32_t var_220_3
            __builtin_memset(&var_220_3, 0, 0x14)
            sub_408fb2()
            noreturn
        
        data_42e4aa = eax_3.w
        uint32_t eax_4 = GetModuleFileNameW(nullptr, &data_42e2a2, 0x104)
        int32_t eax_5
        
        if (eax_4 == 0)
            eax_5 = sub_412ddb(&data_42e2a2, 0x2fb, u"<program name unknown>")
        
        if (eax_4 == 0 && eax_5 != 0)
        label_40ec86:
            int32_t var_220_1
            __builtin_memset(&var_220_1, 0, 0x14)
            sub_408fb2()
            noreturn
        
        int32_t eax_7 = _wcslen(&data_42e2a2) + 1
        int32_t eax_10
        
        if (eax_7 u> 0x3c)
            void* eax_9 = (_wcslen(&data_42e2a2) << 1) + &data_42e22c
            eax_10 = sub_412cf3(eax_9, 0x2fb - ((eax_9 - &data_42e2a2) s>> 1), 0x41774c, 3)
        
        if (eax_7 u> 0x3c && eax_10 != 0)
            goto label_40ec86
        
        if (sub_412c7e(0x42e270, 0x314, 0x417744) != 0)
            goto label_40ec86
        
        if (sub_412c7e(0x42e270, 0x314, numberOfBytesWritten) != 0)
            goto label_40ec86
        
        hFile = sub_412b12(0x42e270, u"Microsoft Visual C++ Runtime Library", 0x12010)

sub_407fad(eax_1 ^ &__saved_ebp)
return hFile
