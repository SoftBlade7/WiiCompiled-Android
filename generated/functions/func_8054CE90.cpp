#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054CE90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r12_addr_0 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t r26 = ctx->gpr[26];
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

    goto loc_8054CE90;

loc_8054CE90:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r29 = 0x808B0000u;
    r30 = 0;
    r29 = (r29 + 15552);
    r5 = 0x808B0000u;
    r5 = (r5 + 15948);
    r6 = -1;
    r31 = (r29 + 8);
    r0 = 6;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 40u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 4), static_cast<uint16_t>(r30));
    r27 = r3;
    r28 = r4;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r6);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r5);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r3);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r31);
    }
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r3 = 12;
    ctx->lr = 0x8054CEF4u;
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
    ctx->gpr[26] = r26;
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
    r26 = ctx->gpr[26];
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
    MemoryInline::FlatWrite32((r27 + 20), r3);
    r4 = 65536;
    r0 = (r4 + -1);
    r4 = MemoryInline::FlatRead16((r29 + 8));
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r0));
    r26 = 1;
    r3 = MemoryInline::FlatRead16((r31 + 28));
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r12 = (r12_rot_0 & -2);
    r5 = MemoryInline::FlatRead32((r27 + 20));
    r11 = 2;
    r4 = MemoryInline::FlatRead16((r31 + 56));
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r10 = (r10_rot_0 & -2);
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    r9 = 3;
    r3 = MemoryInline::FlatRead16((r31 + 84));
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & -2);
    r5 = MemoryInline::FlatRead32((r27 + 20));
    r7 = 4;
    r4 = MemoryInline::FlatRead16((r31 + 112));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & -2);
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r0));
}

loc_8054CF4C:
{
    r3 = MemoryInline::FlatRead16((r31 + 140));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & -2);
    guest_range_2 = MemoryInline::ResolveRangeHost((r27 + 20), 0, 4u, true, false);
    r31 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r27 + 20));
    r5 = 5;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & -2);
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r0));
    r31 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r27 + 20));
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
    r31 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r27 + 20));
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r0));
    r31 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r27 + 20));
    r31_addr_0 = (r31 + r12);
    MemoryInline::FlatWrite16(r31_addr_0, static_cast<uint16_t>(r30));
    r12 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r27 + 20));
    r12_addr_0 = (r12 + r10);
    MemoryInline::FlatWrite16(r12_addr_0, static_cast<uint16_t>(r26));
    r10 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r27 + 20));
    r10_addr_0 = (r10 + r8);
    MemoryInline::FlatWrite16(r10_addr_0, static_cast<uint16_t>(r11));
    r8 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r27 + 20));
    r8_addr_0 = (r8 + r6);
    MemoryInline::FlatWrite16(r8_addr_0, static_cast<uint16_t>(r9));
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r27 + 20));
    r6_addr_0 = (r6 + r4);
    MemoryInline::FlatWrite16(r6_addr_0, static_cast<uint16_t>(r7));
    r4 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r27 + 20));
    r4_addr_0 = (r4 + r3);
    MemoryInline::FlatWrite16(r4_addr_0, static_cast<uint16_t>(r5));
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(0))) {
        goto loc_8054CFC0;
    }
}

loc_8054CFA8:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 6248);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8054CFB8:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(r0))) {
        goto loc_8054CFC0;
    }
}

loc_8054CFBC:
{
    r30 = r26;
}

loc_8054CFC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8054CFC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8054CFDC;
    }
}

loc_8054CFC8:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 6248);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8054CFDCu;
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
    ctx->gpr[26] = r26;
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
    r26 = ctx->gpr[26];
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

loc_8054CFDC:
{
    // inline leaf 0x8054ADB4 (7 guest instruction(s))
    r4 = 0x80380000u;
    r3 = 0x802A0000u;
    r0 = MemoryInline::FlatRead32((r4 + 28432));
    r3 = (r3 + 16104);
    r0 = (r0 * 12);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_0);
    // end of inlined leaf 0x8054ADB4
    r4 = (r3 & 65535);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + 3760));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8054CFF8:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = 0;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r27 + 40), f0.d);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8054D028;
    }
}

loc_8054D010:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 6248);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8054D020:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(r0))) {
        goto loc_8054D028;
    }
}

loc_8054D024:
{
    r4 = 1;
}

loc_8054D028:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8054D02C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8054D044;
    }
}

loc_8054D030:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 6248);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8054D044u;
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
    ctx->gpr[26] = r26;
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
    r26 = ctx->gpr[26];
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

loc_8054D044:
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
    r4 = (r3 & 65535);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + 3760));
    r6 = 230;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = 1;
    r4 = 75;
    r0 = 5;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r11 = (r1 + 48);
    r3 = r27;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r27 + 44), f0.d);
    MemoryInline::FlatWriteRam8((r29 + 176), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r29 + 177), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r29 + 178), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r29 + 179), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r29 + 180), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r27 + 8), r0);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
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
    ctx->gpr[26] = r26;
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
// RECOMP_REGISTRATION base 0x8054CE90 func_8054CE90 preserves=true fpr_mask=0x00000000
