// 函数: sub_40edaa
// 地址: 0x40edaa
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (sub_410c6a(__fileno(arg1)) != 0)
    int32_t eax_2
    
    if (arg1 == &data_41a030)
        eax_2 = 0
    label_40ede4:
        data_42dc94 += 1
        
        if ((arg1[3] & 0x10c) == 0)
            int32_t edi
            int32_t var_10_1 = edi
            int32_t eax_3
            
            if (*((eax_2 << 2) + &data_42e898) == 0)
                eax_3 = sub_40ce55(0x1000)
                *((eax_2 << 2) + &data_42e898) = eax_3
            
            if (*((eax_2 << 2) + &data_42e898) != 0 || eax_3 != 0)
                int32_t edi_2 = *((eax_2 << 2) + &data_42e898)
                arg1[2] = edi_2
                *arg1 = edi_2
                arg1[6] = 0x1000
                arg1[1] = 0x1000
            else
                arg1[2] = &arg1[5]
                *arg1 = &arg1[5]
                arg1[6] = 2
                arg1[1] = 2
            
            arg1[3] |= 0x1102
            return 1
    else if (arg1 == &data_41a050)
        eax_2 = 1
        goto label_40ede4

return 0
