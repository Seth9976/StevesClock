// 函数: sub_409ec0
// 地址: 0x409ec0
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

void* ebx = arg2
int32_t* esi_1 = *(ebx + 8) ^ __security_cookie
int32_t edi
int32_t var_28 = edi
int32_t eax = *esi_1
char var_5 = 0
int32_t result = 1
void* edi_1 = ebx + 0x10

if (eax != 0xfffffffe)
    sub_407fad((esi_1[1] + edi_1) ^ *(eax + edi_1))

sub_407fad((esi_1[3] + edi_1) ^ *(esi_1[2] + edi_1))

if ((arg1->ExceptionFlags.b & 0x66) != 0)
label_40a034:
    
    if (*(ebx + 0xc) != 0xfffffffe)
        @_EH4_LocalUnwind@16(ebx, 0xfffffffe, edi_1, &__security_cookie)
    label_409f68:
        int32_t eax_7 = *esi_1
        
        if (eax_7 != 0xfffffffe)
            sub_407fad((esi_1[1] + edi_1) ^ *(eax_7 + edi_1))
        
        sub_407fad((esi_1[3] + edi_1) ^ *(esi_1[2] + edi_1))
else
    EXCEPTION_RECORD* var_1c
    *(ebx - 4) = &var_1c
    ebx = *(ebx + 0xc)
    var_1c = arg1
    int32_t var_18_1 = arg3
    
    if (ebx != 0xfffffffe)
        while (true)
            void* eax_3 = ebx * 3
            void* eax_5 = esi_1[eax_3 + 4]
            
            if (esi_1[eax_3 + 5] != 0)
                int32_t eax_6 = @_EH4_CallFilterFunc@8()
                var_5 = 1
                
                if (eax_6 s< 0)
                    result = 0
                    goto label_409f68
                
                if (eax_6 s> 0)
                    if (arg1->ExceptionCode == 0xe06d7363 && data_42e9dc != 0
                            && sub_40eae0(&data_42e9dc) != 0)
                        data_42e9dc(arg1, 1)
                    
                    sub_40f372(arg2, arg1)
                    void* eax_10 = arg2
                    
                    if (*(eax_10 + 0xc) != ebx)
                        @_EH4_LocalUnwind@16(eax_10, ebx, edi_1, &__security_cookie)
                        eax_10 = arg2
                    
                    *(eax_10 + 0xc) = eax_5
                    int32_t eax_11 = *esi_1
                    
                    if (eax_11 != 0xfffffffe)
                        sub_407fad((esi_1[1] + edi_1) ^ *(eax_11 + edi_1))
                    
                    sub_407fad((esi_1[3] + edi_1) ^ *(esi_1[2] + edi_1))
                    @_EH4_TransferToHandler@8(esi_1[eax_3 + 6], edi_1)
                    goto label_40a034
            
            ebx = eax_5
            
            if (eax_5 == 0xfffffffe)
                if (var_5 == 0)
                    return result
                
                break
        
        goto label_409f68

return result
