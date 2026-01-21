// 函数: sub_402644
// 地址: 0x402644
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t i_1 = 0xffffffff
int32_t i

for (i = 0; i s< 0x20; i += 1)
    int32_t eax_1 = *((i << 2) + &data_425218)
    
    if (eax_1 == arg1)
        break
    
    if (eax_1 == 0 && i_1 == 0xffffffff)
        i_1 = i

if (i s< 0x20)
    if (IsWindow(*((i << 2) + &data_425198)) != 0)
        return 0
    
    if (i_1 == 0xffffffff)
        i_1 = i
    
    *((i << 2) + &data_425218) = 0

char* var_18_1 = arg2
*((i_1 << 2) + &data_425218) = arg1
void* eax_5
int32_t edx_1
eax_5, edx_1 = _strlen(var_18_1)
int32_t* lpTemplate = _calloc(eax_5 * 2 + 0x100, edx_1, var_18_1, eax_5 * 2 + 0x100, 1)

if (arg8 != 0)
    *lpTemplate = arg8
else
    *lpTemplate = 0x90c80000
    
    if (arg11 != arg8)
        *lpTemplate = 0x90c80040

lpTemplate[1] = arg9
lpTemplate[2].w = 0
*(lpTemplate + 0xa) = arg4
lpTemplate[3].w = arg5
*(lpTemplate + 0xe) = arg6
lpTemplate[4].w = arg7
*(lpTemplate + 0x12) = 0
lpTemplate[5].w = 0
void* edi_4 = lpTemplate + 0x16
    + (MultiByteToWideChar(0, 0, arg2, 0xffffffff, lpTemplate + 0x16, _strlen(arg2) * 2 + 1) << 1)

if (arg11 != 0)
    *edi_4 = arg11.w
    MultiByteToWideChar(0, 0, arg10, 0xffffffff, edi_4 + 2, _strlen(arg10) * 2 + 1)

*((i_1 << 2) + &data_425198) = CreateDialogIndirectParamA(data_421724, lpTemplate, arg3, arg1, 0)
__free_base(lpTemplate)
sub_4019b5(nullptr, 1)
return *((i_1 << 2) + &data_425198)
