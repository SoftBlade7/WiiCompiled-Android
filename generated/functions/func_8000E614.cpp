#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000E614(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mdest_3 = 0;
    uint32_t r4_mdest_4 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_mrot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8000E614;

loc_8000E614:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r27 = r4;
    r28 = r6;
    r26 = r3;
    r25 = r5;
    r4 = 0;
    r3 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800155D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8000E644:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000E654;
    }
}

loc_8000E648:
{
    r3 = r28;
    r4 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800155D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8000E654:
{
    r30 = (r27 * r25);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000E674;
    }
}

loc_8000E65C:
{
    r0 = MemoryInline::FlatRead8((r28 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000E664:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000E674;
    }
}

loc_8000E668:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(10));
    r0 = (r0_rot_1 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000E670:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000E67C;
    }
}

loc_8000E674:
{
    r3 = 0;
    goto loc_8000E940;
}

loc_8000E67C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(13));
    r0 = (r0_rot_2 & 1);
}

loc_8000E680:
{
    r31 = 1;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8000E698;
    }
}

loc_8000E688:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(7));
    r0 = (r0_rot_3 & 3);
}

loc_8000E690:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8000E698;
    }
}

loc_8000E694:
{
    r31 = 0;
}

loc_8000E698:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & 7);
}

loc_8000E6A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000E6C4;
    }
}

loc_8000E6A4:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_6 & 1);
}

loc_8000E6AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8000E6C4;
    }
}

loc_8000E6B0:
{
    r0 = 2;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r3_mrot_1 = (r3_rot_1 & -536870912);
    r3_mdest_1 = (r3 & 536870911);
    r3 = (r3_mdest_1 | r3_mrot_1);
    MemoryInline::FlatWrite32((r28 + 8), r3);
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 40), r0);
}

loc_8000E6C4:
{
    r0 = MemoryInline::FlatRead32((r28 + 8));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & 7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8000E6D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8000E6EC;
    }
}

loc_8000E6D4:
{
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 10), static_cast<uint8_t>(r3));
    r3 = 0;
    MemoryInline::FlatWrite32((r28 + 40), r0);
    goto loc_8000E940;
}

loc_8000E6EC:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r0 = (r0_rot_9 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000E6F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000E71C;
    }
}

loc_8000E6F8:
{
    ctx->lr = 0x8000E6FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000C9ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8000E700:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000E71C;
    }
}

loc_8000E704:
{
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 10), static_cast<uint8_t>(r3));
    r3 = 0;
    MemoryInline::FlatWrite32((r28 + 40), r0);
    goto loc_8000E940;
}

loc_8000E71C:
{
}

loc_8000E720:
{
    r29 = 0;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8000E7D0;
    }
}

loc_8000E728:
{
    r0 = MemoryInline::FlatRead32((r28 + 8));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & 7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8000E734:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8000E7D0;
    }
}

loc_8000E738:
{
    r3 = r28;
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800155D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8000E748:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8000E770;
    }
}

loc_8000E74C:
{
    r0 = MemoryInline::FlatRead32((r28 + 8));
    r29 = (r29 + 2);
    r30 = (r30 + -2);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_12 & 14);
    r3 = (r28 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 12));
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r0));
    r26 = (r26 + 2);
    goto loc_8000E790;
}

loc_8000E770:
{
    r0 = MemoryInline::FlatRead32((r28 + 8));
    r29 = (r29 + 1);
    r30 = (r30 + -1);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_13 & 7);
    r3 = (r28 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 12));
    MemoryInline::FlatWrite8(r26, static_cast<uint8_t>(r0));
    r26 = (r26 + 1);
}

loc_8000E790:
{
    r4 = MemoryInline::FlatRead32((r28 + 8));
}

loc_8000E798:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r3 = (r3_rot_4 & 7);
    r0 = (r3 + -1);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r4_mrot_2 = (r4_rot_2 & -536870912);
    r4_mdest_2 = (r4 & 536870911);
    r4 = (r4_mdest_2 | r4_mrot_2);
    MemoryInline::FlatWrite32((r28 + 8), r4);
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8000E7B8;
    }
}

loc_8000E7AC:
{
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_15 & 7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8000E7B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8000E738;
    }
}

loc_8000E7B8:
{
    r0 = MemoryInline::FlatRead32((r28 + 8));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_17 & 7);
}

loc_8000E7C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8000E7D0;
    }
}

loc_8000E7C8:
{
    r0 = MemoryInline::FlatRead32((r28 + 48));
    MemoryInline::FlatWrite32((r28 + 40), r0);
}

loc_8000E7D0:
{
}

loc_8000E7D4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8000E8AC;
    }
}

loc_8000E7D8:
{
    r0 = MemoryInline::FlatRead32((r28 + 40));
}

loc_8000E7E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000E7EC;
    }
}

loc_8000E7E4:
{
}

loc_8000E7E8:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8000E8AC;
    }
}

loc_8000E7EC:
{
    r0 = MemoryInline::FlatRead32((r28 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000E7F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000E850;
    }
}

loc_8000E7F8:
{
    r3 = r28;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x8000E808u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000E45Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8000E80C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8000E850;
    }
}

loc_8000E810:
{
}

loc_8000E814:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8000E82C;
    }
}

loc_8000E818:
{
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 10), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r28 + 40), r0);
    goto loc_8000E848;
}

loc_8000E82C:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 40), r0);
    r0 = 1;
    r3 = (r3 & 536870911);
    MemoryInline::FlatWrite32((r28 + 8), r3);
    MemoryInline::FlatWrite8((r28 + 9), static_cast<uint8_t>(r0));
}

loc_8000E848:
{
    r30 = 0;
    goto loc_8000E8AC;
}

loc_8000E850:
{
    r5 = MemoryInline::FlatRead32((r28 + 40));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r30));
}

loc_8000E85C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8000E868;
    }
}

loc_8000E860:
{
    r5 = r30;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
}

loc_8000E868:
{
    r4 = MemoryInline::FlatRead32((r28 + 36));
    r3 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r28 + 36));
    r0 = MemoryInline::FlatRead32((r28 + 40));
    r30 = (r30 - r4);
    r3 = (r3 + r4);
    MemoryInline::FlatWrite32((r28 + 36), r3);
    r26 = (r26 + r4);
    r29 = (r29 + r4);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32((r28 + 40), r0);
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8000E8AC;
    }
}

loc_8000E8A4:
{
}

loc_8000E8A8:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8000E7EC;
    }
}

loc_8000E8AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8000E8B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000E93C;
    }
}

loc_8000E8B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8000E8B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000E93C;
    }
}

loc_8000E8BC:
{
    r31 = MemoryInline::FlatRead32((r28 + 28));
    r3 = r28;
    r25 = MemoryInline::FlatRead32((r28 + 32));
    r4 = (r1 + 8);
    MemoryInline::FlatWrite32((r28 + 28), r26);
    r5 = 1;
    MemoryInline::FlatWrite32((r28 + 32), r30);
    ctx->lr = 0x8000E8DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000E45Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8000E8E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000E91C;
    }
}

loc_8000E8E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8000E8E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000E900;
    }
}

loc_8000E8EC:
{
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 10), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r28 + 40), r0);
    goto loc_8000E91C;
}

loc_8000E900:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 40), r0);
    r0 = 1;
    r3 = (r3 & 536870911);
    MemoryInline::FlatWrite32((r28 + 8), r3);
    MemoryInline::FlatWrite8((r28 + 9), static_cast<uint8_t>(r0));
}

loc_8000E91C:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = r28;
    MemoryInline::FlatWrite32((r28 + 28), r31);
    r29 = (r29 + r0);
    MemoryInline::FlatWrite32((r28 + 32), r25);
    // inline leaf 0x8000E434 (10 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 24));
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r6 = MemoryInline::FlatRead32((r3 + 28));
    r5 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r4 & r0);
    MemoryInline::FlatWrite32((r3 + 36), r6);
    r0 = (r5 - r0);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    MemoryInline::FlatWrite32((r3 + 52), r4);
    // end of inlined leaf 0x8000E434
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 40), r0);
}

loc_8000E93C:
{
    r3 = PPC_Divwu(static_cast<uint32_t>(r29), static_cast<uint32_t>(r27));
}

loc_8000E940:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 20));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 28));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 36));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 40));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 44));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8000E614 func_8000E614 preserves=true fpr_mask=0x00000000
