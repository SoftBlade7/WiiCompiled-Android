#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056F26C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stfsx_8056F41C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
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
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8056F26C;

loc_8056F26C:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 128);
    // inline leaf 0x8002158C (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002158C
    r26 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r6 + 84));
    r26 = (r26 + 5936);
    r30 = r4;
    f0.d = MemoryInline::FlatReadFloat32(r26);
    r22 = r5;
    r31 = r6;
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8056F2A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8056F470;
    }
}

loc_8056F2AC:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 104));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8056F2B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8056F2BC;
    }
}

loc_8056F2B8:
{
    MemoryInline::FlatWriteFloat32((r3 + 104), f1.d);
}

loc_8056F2BC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 & 24576);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056F2C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056F470;
    }
}

loc_8056F2C8:
{
    r5 = MemoryInline::FlatRead32(r5);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8056F2DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8056F314;
    }
}

loc_8056F2E0:
{
    f0.d = MemoryInline::FlatReadFloat32(r26);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8056F2E8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8056F2FC;
    }
}

loc_8056F2EC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 8192);
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_8056F308;
}

loc_8056F2FC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 | 16384);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_8056F308:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 84));
    MemoryInline::FlatWriteFloat32((r4 + 128), f0.d);
    goto loc_8056F470;
}

loc_8056F314:
{
    r3 = (r3 + 4);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r4 = 0x802A0000u;
    r5 = (r1 + 28);
    r4 = (r4 + 16664);
    r3 = (r3 + 240);
    ctx->lr = 0x8056F330u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8023A2D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f31 = ctx->fpr[31];
    r3 = 0x808A0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r25 = (r22 + 24);
    r24 = MemoryInline::FlatRead32((r3 + 26316));
    r29 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r23 = 0;
    f31.d = MemoryInline::FlatReadFloat32(r26);
    r27 = 0x809C0000u;
    r28 = -1072627712;
}

loc_8056F35C:
{
    r0 = (r23 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8056F364:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056F370;
    }
}

loc_8056F368:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 20));
    goto loc_8056F374;
}

loc_8056F370:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
}

loc_8056F374:
{
    f1.d = MemoryInline::FlatReadFloat32((r22 + 4));
    r5 = r25;
    f3.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r8 = r24;
    f6.d = PpcFmulsInline(f0.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    r4 = (r1 + 16);
    f4.d = MemoryInline::FlatReadFloat32((r22 + 12));
    r6 = (r28 + -20480);
    f5.d = PpcFmulsInline(f6.d, f3.d);
    r3 = MemoryInline::FlatRead32((r27 + 12100));
    f3.d = PpcFmulsInline(f6.d, f2.d);
    r7 = (r1 + 40);
    f2.d = PpcFmulsInline(f6.d, f0.d);
    r9 = 0;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r1 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r22 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r1 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r22 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r1 + 40), f31.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r1 + 24), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r1 + 44), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r1 + 48), f31.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r1 + 52), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r1 + 56), f31.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r1 + 60), f31.d);
    ctx->lr = 0x8056F3F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807901F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8056F3F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8056F420;
    }
}

loc_8056F3F8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 24));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    addr_stfsx_8056F41C_loc_0 = (r29 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8056F41C_loc_0, f0.d);
}

loc_8056F420:
{
    r23 = (r23 + 1);
}

loc_8056F428:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(2))) {
        goto loc_8056F35C;
    }
}

loc_8056F42C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8056F438:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8056F454;
    }
}

loc_8056F43C:
{
    r0 = MemoryInline::FlatRead32(r30);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 84));
    r0 = (r0 | 8192);
    MemoryInline::FlatWrite32(r30, r0);
    MemoryInline::FlatWriteFloat32((r30 + 128), f0.d);
    goto loc_8056F470;
}

loc_8056F454:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8056F458:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8056F470;
    }
}

loc_8056F45C:
{
    r0 = MemoryInline::FlatRead32(r30);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 84));
    r0 = (r0 | 16384);
    MemoryInline::FlatWrite32(r30, r0);
    MemoryInline::FlatWriteFloat32((r30 + 128), f0.d);
}

loc_8056F470:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 128);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8056F26C func_8056F26C preserves=false fpr_mask=0x80000000
