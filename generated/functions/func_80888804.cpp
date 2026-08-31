#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80888804(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80888898_loc_0 = 0;
    uint32_t addr_lfsx_808888D4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r5_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80888804;

loc_80888804:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r5 = 0x80380000u;
    r4 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r5 + 24576));
    r5 = 0x808E0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r31 = 0x808B0000u;
    r27 = MemoryInline::FlatRead32((r6 + 88));
    r6 = 0;
    r30 = MemoryInline::FlatRead8((r4 + 37));
    r5 = (r5 + -12184);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r0 = MemoryInline::FlatRead8((r3 + 221));
    r29 = (r30 + -1);
    MemoryInline::FlatWrite8((r3 + 220), static_cast<uint8_t>(r6));
    r4 = (r29 + r4);
    r28 = r3;
    r5_addr_0 = (r5 + r4);
    r4 = MemoryInline::FlatRead8(r5_addr_0);
    r31 = (r31 + 10056);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_80888864:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80888878;
    }
}

loc_80888868:
{
    MemoryInline::FlatWrite8((r3 + 221), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8088916Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 272), static_cast<uint8_t>(r0));
}

loc_80888878:
{
    r3 = 0x808E0000u;
    r7 = 1;
    MemoryInline::FlatWrite8((r28 + 272), static_cast<uint8_t>(r7));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r3 = (r3 + -12176);
    r6 = 0x809C0000u;
    r3 = (r3 + r0);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    addr_lfsx_80888898_loc_0 = (r4 + r3);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80888898_loc_0);
    r8 = (r27 * 48);
    r6 = (r6 + 19096);
    MemoryInline::FlatWriteFloat32((r28 + 232), f0.d);
    r0 = MemoryInline::FlatRead16((r28 + 44));
    r4 = 0x809C0000u;
    r5 = (r29 * 12);
    r3 = (r6 + r8);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
}

loc_808888BC:
{
    r3 = (r3 + r5);
    r0 = (r0 | 2);
    r5 = (r5 + r8);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r3 = (r4 + 18984);
    addr_lfsx_808888D4_loc_0 = (r6 + r5);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_808888D4_loc_0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 44), 0, 229u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 192u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 192u, (r28 + 236), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 196u, (r28 + 240), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 200u, (r28 + 244), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 228u, (r28 + 272), static_cast<uint8_t>(r7));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 18984));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r28 + 72), f2.d);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r28 + 44), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r28 + 84), static_cast<uint8_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r28 + 76), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r28 + 80), f0.d);
    }
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8088892C;
    }
}

loc_8088890C:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    MemoryInline::FlatWriteFloat32((r28 + 260), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 264), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 268), f0.d);
    MemoryInline::FlatWrite8((r28 + 272), static_cast<uint8_t>(r7));
    goto loc_80888A9C;
}

loc_8088892C:
{
}

loc_80888930:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(2))) {
        goto loc_80888980;
    }
}

loc_80888934:
{
    r0 = MemoryInline::FlatRead8((r28 + 176));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80888960;
    }
}

loc_80888940:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    MemoryInline::FlatWriteFloat32((r28 + 260), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 264), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 268), f0.d);
    MemoryInline::FlatWrite8((r28 + 272), static_cast<uint8_t>(r7));
    goto loc_80888A9C;
}

loc_80888960:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    MemoryInline::FlatWriteFloat32((r28 + 260), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 264), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 268), f0.d);
    MemoryInline::FlatWrite8((r28 + 272), static_cast<uint8_t>(r7));
    goto loc_80888A9C;
}

loc_80888980:
{
}

loc_80888984:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(3))) {
        goto loc_808889FC;
    }
}

loc_80888988:
{
    r0 = MemoryInline::FlatRead8((r28 + 176));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808889B4;
    }
}

loc_80888994:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    MemoryInline::FlatWriteFloat32((r28 + 260), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 264), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 268), f0.d);
    MemoryInline::FlatWrite8((r28 + 272), static_cast<uint8_t>(r7));
    goto loc_80888A9C;
}

loc_808889B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_808889B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808889DC;
    }
}

loc_808889BC:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 60));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    MemoryInline::FlatWriteFloat32((r28 + 260), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 264), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 268), f0.d);
    MemoryInline::FlatWrite8((r28 + 272), static_cast<uint8_t>(r7));
    goto loc_80888A9C;
}

loc_808889DC:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    MemoryInline::FlatWriteFloat32((r28 + 260), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 264), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 268), f0.d);
    MemoryInline::FlatWrite8((r28 + 272), static_cast<uint8_t>(r7));
    goto loc_80888A9C;
}

loc_808889FC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
}

loc_80888A00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80888A9C;
    }
}

loc_80888A04:
{
    r0 = MemoryInline::FlatRead8((r28 + 176));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80888A30;
    }
}

loc_80888A10:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    MemoryInline::FlatWriteFloat32((r28 + 260), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 264), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 268), f0.d);
    MemoryInline::FlatWrite8((r28 + 272), static_cast<uint8_t>(r7));
    goto loc_80888A9C;
}

loc_80888A30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80888A34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80888A58;
    }
}

loc_80888A38:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 60));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    MemoryInline::FlatWriteFloat32((r28 + 260), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 264), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 268), f0.d);
    MemoryInline::FlatWrite8((r28 + 272), static_cast<uint8_t>(r7));
    goto loc_80888A9C;
}

loc_80888A58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80888A5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80888A80;
    }
}

loc_80888A60:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    MemoryInline::FlatWriteFloat32((r28 + 260), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 264), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 268), f0.d);
    MemoryInline::FlatWrite8((r28 + 272), static_cast<uint8_t>(r7));
    goto loc_80888A9C;
}

loc_80888A80:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 60));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    MemoryInline::FlatWriteFloat32((r28 + 260), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 264), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 268), f0.d);
    MemoryInline::FlatWrite8((r28 + 272), static_cast<uint8_t>(r7));
}

loc_80888A9C:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x80888AB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80888804 func_80888804 preserves=true fpr_mask=0x00000000
