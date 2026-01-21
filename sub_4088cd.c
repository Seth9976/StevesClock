// 函数: sub_4088cd
// 地址: 0x4088cd
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp_2 = 0x20
int32_t var_8 = 0x4182b8
int32_t (* var_10)(EXCEPTION_RECORD* arg1, void* arg2, int32_t arg3) = sub_409ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x4182b8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_44 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_44
void* const var_48_6 = &data_4088d9
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
sub_40e3f5(8)
int32_t var_8_1 = 0

if (data_42dcc8 != 1)
    data_42dcc4 = 1
    data_42dcc0 = arg3.b
    
    if (arg2 == 0)
        int32_t ebx_1 = DecodePointer(data_42eb10)
        int32_t var_34_1 = ebx_1
        
        if (ebx_1 != 0)
            int32_t* edi_1 = DecodePointer(data_42eb0c)
            int32_t* var_30_1 = edi_1
            int32_t var_28_1 = ebx_1
            int32_t* var_2c_1 = edi_1
            
            while (true)
                edi_1 -= 4
                int32_t* var_30_2 = edi_1
                
                if (edi_1 u< ebx_1)
                    break
                
                int32_t eax_3 = sub_40aca1()
                
                if (*edi_1 != eax_3)
                    if (edi_1 u< ebx_1)
                        break
                    
                    int32_t eax_4 = DecodePointer(*edi_1)
                    *edi_1 = sub_40aca1()
                    eax_4()
                    int32_t eax_6 = DecodePointer(data_42eb10)
                    int32_t* eax_7 = DecodePointer(data_42eb0c)
                    
                    if (var_28_1 != eax_6 || var_2c_1 != eax_7)
                        var_28_1 = eax_6
                        var_34_1 = eax_6
                        var_2c_1 = eax_7
                        edi_1 = eax_7
                        int32_t* var_30_3 = edi_1
                    
                    ebx_1 = var_34_1
        
        for (void* const i = &data_416260; i u< 0x41626c; i += 4)
            int32_t eax_9 = *i
            
            if (eax_9 != 0)
                eax_9()
    
    for (void* const i_1 = &data_416270; i_1 u< 0x416274; i_1 += 4)
        int32_t eax_11 = *i_1
        
        if (eax_11 != 0)
            eax_11()

int32_t var_8_2 = 0xfffffffe
int32_t result = $LN17(&__saved_ebp)

if (arg3 != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_1 = &data_408a0c
    return result

data_42dcc8 = 1
__unlock(8)
__endthreadex(arg1)
noreturn
