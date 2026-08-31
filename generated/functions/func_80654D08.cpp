#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80654D08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r0_subfc_sub_3 = 0;
    uint32_t r16_rot_0 = 0;
    uint32_t r16_rot_1 = 0;
    uint32_t r16_rot_2 = 0;
    uint32_t r16_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r7_addic_src_0 = 0;
    uint32_t r7_addic_src_1 = 0;
    uint32_t r7_addic_src_2 = 0;
    uint32_t r7_addic_src_3 = 0;
    uint32_t r7_addic_src_4 = 0;
    uint32_t r7_addic_src_5 = 0;
    uint32_t r7_addic_src_6 = 0;
    uint32_t r7_addic_src_7 = 0;
    uint32_t r7_addic_src_8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80654D08;

loc_80654D08:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r1 + 132), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r14);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r18);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r1 + 76), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r1 + 80), r20);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r1 + 88), r22);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r1 + 92), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r1 + 96), r24);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r1 + 104), r26);
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r1 + 108), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r1 + 112), r28);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r1 + 120), r30);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r1 + 124), r31);
    }
    r15 = r3;
    r17 = 0;
    r26 = 0x809C0000u;
    r27 = 0x809C0000u;
    r28 = 0x809C0000u;
    r24 = 1;
    r23 = 0x809C0000u;
    r25 = 0;
    r29 = 65536;
    r30 = 0x809C0000u;
    r31 = 2;
    r14 = 2;
}

loc_80654D48:
{
    r5 = MemoryInline::FlatRead32((r27 + 8408));
    r0 = (r17 & 255);
    r18 = PPC_Slw(static_cast<uint32_t>(r24), static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r0 = (r0 * 88);
    r3 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 72));
    r0 = (r18 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80655144;
    }
}

loc_80654D6C:
{
    r0 = MemoryInline::FlatRead8((r3 + 89));
}

loc_80654D74:
{
    if ((static_cast<uint32_t>(r17) == static_cast<uint32_t>(r0))) {
        goto loc_80655144;
    }
}

loc_80654D78:
{
    r4 = MemoryInline::FlatRead32((r23 + -10448));
    r3 = MemoryInline::FlatRead32((r26 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 32));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead32((r3 + 2964));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r0 = (r0 * 88);
    r4 = (r5 + r0);
    r5 = MemoryInline::FlatRead8((r4 + 89));
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r4 = PPC_Slw(static_cast<uint32_t>(r24), static_cast<uint32_t>(r5));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80654DB8;
    }
}

loc_80654DB0:
{
    r0 = MemoryInline::FlatRead16((r15 + 16));
    goto loc_80654DBC;
}

loc_80654DB8:
{
    r0 = 0;
}

loc_80654DBC:
{
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    r6 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 2936));
}

loc_80654DCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80654DD4;
    }
}

loc_80654DD0:
{
    r6 = (r6 | -2147483648);
}

loc_80654DD4:
{
    r7 = (r3 + 40);
    r5 = 0;
    ctr = r31;
}

loc_80654DE0:
{
    r0 = (r5 & 255);
    r0 = (r0 * 240);
    r4 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_80654DF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80654E00;
    }
}

loc_80654DF8:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r24), static_cast<uint32_t>(r5));
    r6 = (r6 | r0);
}

loc_80654E00:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 240);
    r4 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_80654E18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80654E24;
    }
}

loc_80654E1C:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r24), static_cast<uint32_t>(r5));
    r6 = (r6 | r0);
}

loc_80654E24:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 240);
    r4 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_80654E3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80654E48;
    }
}

loc_80654E40:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r24), static_cast<uint32_t>(r5));
    r6 = (r6 | r0);
}

loc_80654E48:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 240);
    r4 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_80654E60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80654E6C;
    }
}

loc_80654E64:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r24), static_cast<uint32_t>(r5));
    r6 = (r6 | r0);
}

loc_80654E6C:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 240);
    r4 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_80654E84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80654E90;
    }
}

loc_80654E88:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r24), static_cast<uint32_t>(r5));
    r6 = (r6 | r0);
}

loc_80654E90:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 240);
    r4 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_80654EA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80654EB4;
    }
}

loc_80654EAC:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r24), static_cast<uint32_t>(r5));
    r6 = (r6 | r0);
}

loc_80654EB4:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80654DE0;
    }
}

loc_80654EBC:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    r4 = MemoryInline::FlatRead32((r26 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2920));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r25));
    r0 = MemoryInline::FlatRead32((r4 + 2960));
    r0 = (r0 & 1);
}

loc_80654ED8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80654EE4;
    }
}

loc_80654EDC:
{
    r0 = 3;
    goto loc_80654EF8;
}

loc_80654EE4:
{
    r3 = MemoryInline::FlatRead32((r3 + 2924));
    r0 = 1;
}

loc_80654EF0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80654EF8;
    }
}

loc_80654EF4:
{
    r0 = 2;
}

loc_80654EF8:
{
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 2040);
    r6 = MemoryInline::FlatRead32((r27 + 8408));
    r5 = (r1 + 8);
    r4 = MemoryInline::FlatRead16((r15 + 18));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r7 = 0;
    r3 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 10596));
    r3 = (static_cast<int32_t>(r4) >> 31);
    r0_subfc_sub_2 = r0;
    r0 = (r4 - r0_subfc_sub_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0_subfc_sub_2) ? 1u : 0u) << 29);
    MemoryInline::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r0));
    ctr = r14;
}

loc_80654F28:
{
}

loc_80654F2C:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(0))) {
        goto loc_80654F44;
    }
}

loc_80654F30:
{
}

loc_80654F34:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(12))) {
        goto loc_80654F44;
    }
}

loc_80654F38:
{
    r3 = (r6 + r7);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_80654F48;
}

loc_80654F44:
{
    r0 = 255;
}

loc_80654F48:
{
    r7_addic_src_3 = r7;
    r7 = (r7_addic_src_3 + 1);
}

loc_80654F4C:
{
    MemoryInline::FlatWrite8((r5 + 24), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(0))) {
        goto loc_80654F68;
    }
}

loc_80654F54:
{
}

loc_80654F58:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(12))) {
        goto loc_80654F68;
    }
}

loc_80654F5C:
{
    r3 = (r6 + r7);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_80654F6C;
}

loc_80654F68:
{
    r0 = 255;
}

loc_80654F6C:
{
    r7_addic_src_4 = r7;
    r7 = (r7_addic_src_4 + 1);
}

loc_80654F70:
{
    MemoryInline::FlatWrite8((r5 + 25), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(0))) {
        goto loc_80654F8C;
    }
}

loc_80654F78:
{
}

loc_80654F7C:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(12))) {
        goto loc_80654F8C;
    }
}

loc_80654F80:
{
    r3 = (r6 + r7);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_80654F90;
}

loc_80654F8C:
{
    r0 = 255;
}

loc_80654F90:
{
    r7_addic_src_5 = r7;
    r7 = (r7_addic_src_5 + 1);
}

loc_80654F94:
{
    MemoryInline::FlatWrite8((r5 + 26), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(0))) {
        goto loc_80654FB0;
    }
}

loc_80654F9C:
{
}

loc_80654FA0:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(12))) {
        goto loc_80654FB0;
    }
}

loc_80654FA4:
{
    r3 = (r6 + r7);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_80654FB4;
}

loc_80654FB0:
{
    r0 = 255;
}

loc_80654FB4:
{
    r7_addic_src_6 = r7;
    r7 = (r7_addic_src_6 + 1);
}

loc_80654FB8:
{
    MemoryInline::FlatWrite8((r5 + 27), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(0))) {
        goto loc_80654FD4;
    }
}

loc_80654FC0:
{
}

loc_80654FC4:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(12))) {
        goto loc_80654FD4;
    }
}

loc_80654FC8:
{
    r3 = (r6 + r7);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_80654FD8;
}

loc_80654FD4:
{
    r0 = 255;
}

loc_80654FD8:
{
    r7_addic_src_7 = r7;
    r7 = (r7_addic_src_7 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7_addic_src_7)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80654FDC:
{
    MemoryInline::FlatWrite8((r5 + 28), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(0))) {
        goto loc_80654FF8;
    }
}

loc_80654FE4:
{
}

loc_80654FE8:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(12))) {
        goto loc_80654FF8;
    }
}

loc_80654FEC:
{
    r3 = (r6 + r7);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_80654FFC;
}

loc_80654FF8:
{
    r0 = 255;
}

loc_80654FFC:
{
    MemoryInline::FlatWrite8((r5 + 29), static_cast<uint8_t>(r0));
    r5 = (r5 + 6);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80654F28;
    }
}

loc_8065500C:
{
    r21 = (r1 + 8);
    r16 = 0;
    r19 = r21;
    r20 = 0;
    goto loc_8065508C;
}

loc_80655020:
{
    r4 = r16;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (r3 & 255);
    r5 = MemoryInline::FlatRead32((r26 + -10456));
    r0 = (r0 * 240);
    r3 = MemoryInline::FlatRead32((r27 + 8408));
    r4 = r16;
    r5 = (r5 + r0);
    r22 = MemoryInline::FlatRead32((r5 + 48));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (r3 & 255);
    r5 = MemoryInline::FlatRead32((r26 + -10456));
    r4 = (r0 * 240);
    r3 = MemoryInline::FlatRead32((r28 + 7736));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & 65280);
    r16 = (r16 + 1);
    r4 = (r5 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 52));
    r0_mrot_3 = (r4 & 255);
    r0_mdest_3 = (r0 & -256);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::FlatWrite16((r21 + 14), static_cast<uint16_t>(r0));
    r21 = (r21 + 2);
    r0 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r0 + r20);
    r20 = (r20 + 12);
    r0 = MemoryInline::FlatRead8((r3 + 552));
    MemoryInline::FlatWrite8((r19 + 20), static_cast<uint8_t>(r0));
    r19 = (r19 + 1);
}

loc_8065508C:
{
    r3 = MemoryInline::FlatRead32((r27 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 88));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r16), static_cast<uint32_t>(r0));
}

loc_806550A4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80655020;
    }
}

loc_806550A8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_806550AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806550BC;
    }
}

loc_806550B0:
{
    r0 = (r29 + -1);
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r25));
}

loc_806550BC:
{
    r0 = MemoryInline::FlatRead32((r27 + 8408));
    r16_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(2));
    r16 = (r16_rot_2 & 1020);
    r4 = (r1 + 8);
    r5 = 40;
    r3 = (r0 + r16);
    r0 = MemoryInline::FlatRead32((r3 + 10092));
    r0 = (r0 * 48);
    r3 = (r0 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 240));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x806550E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8065A34Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r7 = MemoryInline::FlatRead32((r27 + 8408));
    r4 = (r15 + 20);
    r6 = (r7 + r16);
    r0 = MemoryInline::FlatRead32((r7 + 10524));
    r3 = MemoryInline::FlatRead32((r6 + 10092));
    r0 = (r0 * 88);
    r5 = (r3 * 48);
    r3 = (r7 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 88));
    r3 = (r5 + r6);
    r3 = MemoryInline::FlatRead32((r3 + 240));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r5 = (r5_rot_2 & -64);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    ctx->lr = 0x80655120u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8065A34Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 8456));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8065512C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80655144;
    }
}

loc_80655130:
{
    r0 = MemoryInline::FlatRead32((r15 + 4));
    r0 = (r0 & r18);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80655144;
    }
}

loc_8065513C:
{
    r4 = (r17 & 255);
    ctx->lr = 0x80655144u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80662ABCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80655144:
{
    r17 = (r17 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r17), static_cast<uint32_t>(12));
}

loc_8065514C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80654D48;
    }
}

loc_80655150:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 80u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 56));
            r15 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 64));
            r17 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 72));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 80));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 84));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 88));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 92));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 96));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 100));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 104));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 108));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 112));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r1 + 116));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r1 + 120));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r1 + 124));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 76u, (r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFC1FB gpr_write=0xFFFFC1FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80654D08 func_80654D08 preserves=true fpr_mask=0x00000000
