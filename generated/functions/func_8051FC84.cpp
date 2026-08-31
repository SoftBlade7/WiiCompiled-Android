#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051FC84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8051FC84;

loc_8051FC84:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r11 = (r1 + 112);
    // inline leaf 0x80021594 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021594
    r0 = MemoryInline::FlatRead8((r4 + 20));
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r0 = (r0 & -129);
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 2260));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
}

loc_8051FCB8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8051FFA0;
    }
}

loc_8051FCBC:
{
    r0 = 253;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801C0990u>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r26 + 2260));
    r4 = (r1 + 24);
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8019812Cu>(ctx);
    r3 = ctx->gpr[3];
    r30 = MemoryInline::FlatRead8((r26 + 80));
    r29 = 1;
}

loc_8051FCEC:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8051FD18;
    }
}

loc_8051FCF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8051FCF4:
{
    r3 = 4;
    r0 = -1;
    MemoryInline::FlatWrite32((r26 + 2264), r3);
    MemoryInline::FlatWrite32((r26 + 2268), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8051FD18;
    }
}

loc_8051FD08:
{
    r3 = MemoryInline::FlatRead32((r26 + 2260));
    r30 = 1;
    r4 = 0;
    ctx->lr = 0x8051FD18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80213A3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8051FD18:
{
    r0 = MemoryInline::FlatRead8((r26 + 80));
}

loc_8051FD20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051FF88;
    }
}

loc_8051FD24:
{
    r3 = MemoryInline::FlatRead32((r26 + 2260));
    r4 = (r26 + 144);
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80197380u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8051FD38:
{
    MemoryInline::FlatWrite32((r26 + 2256), r3);
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8051FF68;
    }
}

loc_8051FD40:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8051FD48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8051FD70;
    }
}

loc_8051FD4C:
{
    r3 = MemoryInline::FlatRead16((r26 + 2302));
}

loc_8051FD54:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(10))) {
        goto loc_8051FD78;
    }
}

loc_8051FD58:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r26 + 2302), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r26 + 2304));
    r29 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    goto loc_8051FD78;
}

loc_8051FD70:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r26 + 2302), static_cast<uint16_t>(r0));
}

loc_8051FD78:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8051FD80:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8051FDA8;
    }
}

loc_8051FD84:
{
    r3 = MemoryInline::FlatRead16((r26 + 2300));
}

loc_8051FD8C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(20))) {
        goto loc_8051FDB0;
    }
}

loc_8051FD90:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r26 + 2300), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r26 + 2304));
    r29 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    goto loc_8051FDB0;
}

loc_8051FDA8:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r26 + 2300), static_cast<uint16_t>(r0));
}

loc_8051FDB0:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r3 + -251);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8051FDBC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8051FE1C;
    }
}

loc_8051FDC0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_8051FDC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051FDE4;
    }
}

loc_8051FDC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8051FDCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051FE1C;
    }
}

loc_8051FDD0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(255));
}

loc_8051FDD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051FE1C;
    }
}

loc_8051FDD8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
}

loc_8051FDDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051FE54;
    }
}

loc_8051FDE0:
{
    goto loc_8051FE74;
}

loc_8051FDE4:
{
    r3 = MemoryInline::FlatRead32((r26 + 2332));
    r4 = r27;
    r5 = (r26 + 144);
    r25 = 1;
    r24 = 1;
    r6 = 0;
    ctx->lr = 0x8051FE00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80745BE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite16((r26 + 2296), static_cast<uint16_t>(r0));
    r3 = r26;
    r4 = r28;
    r5 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051FA7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    goto loc_8051FE88;
}

loc_8051FE1C:
{
    r3 = MemoryInline::FlatRead32((r26 + 2332));
    r4 = r27;
    r5 = (r26 + 144);
    r25 = 0;
    r24 = 0;
    r6 = 0;
    ctx->lr = 0x8051FE38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80745DE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite16((r26 + 2296), static_cast<uint16_t>(r0));
    r3 = r26;
    r4 = r28;
    r5 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051FBE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    goto loc_8051FE88;
}

loc_8051FE54:
{
    r3 = r26;
    r5 = r27;
    r6 = r28;
    r4 = (r1 + 24);
    r25 = 2;
    r24 = 2;
    ctx->lr = 0x8051FE70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051F410u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8051FE88;
}

loc_8051FE74:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r26 + 2296), static_cast<uint16_t>(r0));
    r25 = 4;
    r24 = -1;
    r30 = 0;
}

loc_8051FE88:
{
}

loc_8051FE8C:
{
    MemoryInline::FlatWrite32((r26 + 2264), r25);
    MemoryInline::FlatWrite32((r26 + 2268), r24);
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(4))) {
        goto loc_8051FF58;
    }
}

loc_8051FE98:
{
    r0 = MemoryInline::FlatRead8((r26 + 238));
    r3 = MemoryInline::FlatRead32((r26 + 196));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead32((r26 + 200));
    r4 = (0 - r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r4 & ~r5);
    f2.d = MemoryInline::FlatReadFloat32((r26 + 176));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
}

loc_8051FEBC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f3.d = MemoryInline::FlatReadFloat32((r26 + 180));
    f4.d = MemoryInline::FlatReadFloat32((r26 + 216));
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8051FEF4;
    }
}

loc_8051FECC:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32((r26 + 2312), f2.d);
    MemoryInline::FlatWriteFloat32((r26 + 2316), f3.d);
    MemoryInline::FlatWriteFloat32((r26 + 2320), f1.d);
    MemoryInline::FlatWriteFloat32((r26 + 2324), f0.d);
    MemoryInline::FlatWriteFloat32((r26 + 2328), f4.d);
    MemoryInline::FlatWrite16((r26 + 2310), static_cast<uint16_t>(r0));
    goto loc_8051FF28;
}

loc_8051FEF4:
{
    r3 = MemoryInline::FlatRead16((r26 + 2310));
}

loc_8051FEFC:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(3))) {
        goto loc_8051FF28;
    }
}

loc_8051FF00:
{
    f1.d = MemoryInline::FlatReadFloat32((r26 + 2320));
    r0 = (r3 + 1);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 2324));
    r4 = 1;
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r26 + 2312));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r26 + 2316));
    MemoryInline::FlatWrite16((r26 + 2310), static_cast<uint16_t>(r0));
    f4.d = MemoryInline::FlatReadFloat32((r26 + 2328));
}

loc_8051FF28:
{
    r0 = MemoryInline::FlatRead8((r28 + 48));
}

loc_8051FF30:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(6));
    r0_mrot_1 = (r0_rot_1 & 64);
    r0_mdest_1 = (r0 & -65);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite8((r28 + 48), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8051FF58;
    }
}

loc_8051FF3C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r28 + 28), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 32), f3.d);
    MemoryInline::FlatWriteFloat32((r28 + 36), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 44), f4.d);
}

loc_8051FF58:
{
    r0 = MemoryInline::FlatRead8((r28 + 48));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite8((r28 + 48), static_cast<uint8_t>(r0));
    goto loc_8051FF6C;
}

loc_8051FF68:
{
    r29 = 0;
}

loc_8051FF6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(-1));
}

loc_8051FF70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8051FF8C;
    }
}

loc_8051FF74:
{
    r3 = MemoryInline::FlatRead32((r26 + 2260));
    r30 = 0;
    r4 = 0;
    ctx->lr = 0x8051FF84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80213AD4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_8051FF8C;
}

loc_8051FF88:
{
    r29 = 0;
}

loc_8051FF8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8051FF90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051FF9C;
    }
}

loc_8051FF94:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r26 + 2304), r0);
}

loc_8051FF9C:
{
    MemoryInline::FlatWrite8((r26 + 80), static_cast<uint8_t>(r30));
}

loc_8051FFA0:
{
    r11 = (r1 + 112);
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8051FC84 func_8051FC84 preserves=true fpr_mask=0x00000000
