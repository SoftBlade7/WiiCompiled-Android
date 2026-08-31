#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054DC44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r11_addr_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8054DC44;

loc_8054DC44:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r5 = 0x808B0000u;
    r27 = 0x808B0000u;
    r30 = 0;
    r6 = -1;
    r5 = (r5 + 15912);
    r31 = (r27 + 15736);
    r0 = 5;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 44u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 4), static_cast<uint16_t>(r30));
    r28 = r3;
    r29 = r4;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r6);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r5);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r3);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r31);
    }
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r3 = 10;
    ctx->lr = 0x8054DCA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r28 + 20), r3);
    r4 = 65536;
    r12 = (r4 + -1);
    r0 = MemoryInline::FlatRead16((r27 + 15736));
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r12));
    r10 = 1;
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r9 = (r9_rot_0 & -2);
    r3 = MemoryInline::FlatRead16((r31 + 28));
    r4 = MemoryInline::FlatRead32((r28 + 20));
    r8 = 2;
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r7 = (r7_rot_0 & -2);
    r0 = MemoryInline::FlatRead16((r31 + 56));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r12));
    r6 = 3;
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & -2);
    r3 = MemoryInline::FlatRead16((r31 + 84));
    r4 = MemoryInline::FlatRead32((r28 + 20));
}

loc_8054DCEC:
{
    r0 = MemoryInline::FlatRead16((r31 + 112));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & -2);
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r12));
    r4 = 4;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r11 = MemoryInline::FlatRead32((r28 + 20));
    MemoryInline::FlatWrite16((r11 + 6), static_cast<uint16_t>(r12));
    r11 = MemoryInline::FlatRead32((r28 + 20));
    MemoryInline::FlatWrite16((r11 + 8), static_cast<uint16_t>(r12));
    r11 = MemoryInline::FlatRead32((r28 + 20));
    r11_addr_0 = (r11 + r9);
    MemoryInline::FlatWrite16(r11_addr_0, static_cast<uint16_t>(r30));
    r9 = MemoryInline::FlatRead32((r28 + 20));
    r9_addr_0 = (r9 + r7);
    MemoryInline::FlatWrite16(r9_addr_0, static_cast<uint16_t>(r10));
    r7 = MemoryInline::FlatRead32((r28 + 20));
    r7_addr_0 = (r7 + r5);
    MemoryInline::FlatWrite16(r7_addr_0, static_cast<uint16_t>(r8));
    r5 = MemoryInline::FlatRead32((r28 + 20));
    r5_addr_0 = (r5 + r3);
    MemoryInline::FlatWrite16(r5_addr_0, static_cast<uint16_t>(r6));
    r3 = MemoryInline::FlatRead32((r28 + 20));
    r3_addr_0 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_0, static_cast<uint16_t>(r4));
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(0))) {
        goto loc_8054DD54;
    }
}

loc_8054DD3C:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 6248);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8054DD4C:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r0))) {
        goto loc_8054DD54;
    }
}

loc_8054DD50:
{
    r30 = r10;
}

loc_8054DD54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8054DD58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8054DD70;
    }
}

loc_8054DD5C:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 6248);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8054DD70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8054DD70:
{
    // inline leaf 0x8054ADB4 (7 guest instruction(s))
    r4 = 0x80380000u;
    r3 = 0x802A0000u;
    r0 = MemoryInline::FlatRead32((r4 + 28432));
    r3 = (r3 + 16104);
    r0 = (r0 * 12);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_1);
    // end of inlined leaf 0x8054ADB4
    r4 = (r3 & 65535);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + 3760));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8054DD8C:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = 0;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 44), f0.d);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8054DDBC;
    }
}

loc_8054DDA4:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 6248);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8054DDB4:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r0))) {
        goto loc_8054DDBC;
    }
}

loc_8054DDB8:
{
    r4 = 1;
}

loc_8054DDBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8054DDC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8054DDD8;
    }
}

loc_8054DDC4:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 6248);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8054DDD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8054DDD8:
{
    // inline leaf 0x8054ADD0 (8 guest instruction(s))
    r3 = 0x80380000u;
    r4 = 0x802A0000u;
    r0 = MemoryInline::FlatRead32((r3 + 28432));
    r4 = (r4 + 16104);
    r0 = (r0 * 12);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 2));
    // end of inlined leaf 0x8054ADD0
    r0 = (r3 & 65535);
    r3 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat64((r4 + 3760));
    r0 = 4;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r11 = (r1 + 48);
    r3 = r28;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWrite32((r28 + 8), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 48), f0.d);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8054DC44 func_8054DC44 preserves=true fpr_mask=0x00000000
