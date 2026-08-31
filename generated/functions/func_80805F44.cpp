#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80805F44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_80805F44;

loc_80805F44:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 64);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r31 = 0x808B0000u;
    r30 = 0x808D0000u;
    r31 = (r31 + -20672);
    r25 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f31.d = f1.d;
    r26 = r4;
    r27 = r5;
    f1.d = PpcFmulsInline(f0.d, f2.d);
    r28 = r6;
    r29 = r7;
    r30 = (r30 + 21176);
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800851E0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 184));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 76));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f2.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f3.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32(r26);
    f5.d = (-(f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f4.d = (-(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r25 + 180));
    f7.d = std::fabs(f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f6.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f6.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f2.d));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f1.d));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_80806038:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808060B0;
    }
}

loc_8080603C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 80));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80806044:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808060B0;
    }
}

loc_80806048:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 96));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_80806050:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80806060;
    }
}

loc_80806054:
{
    f0.d = MemoryInline::FlatReadFloat64((r31 + 88));
    f31.d = (f0.d * f31.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d));
}

loc_80806060:
{
    f1.d = f31.d;
    r4 = 0x802A0000u;
    r3 = (r1 + 16);
    r4 = (r4 + 16688);
    // inline leaf 0x80518AB8 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80518AB8
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r3 = 1;
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32((r27 + 4), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r27 + 8), f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32(r28, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 8), f0.d);
    MemoryInline::FlatWriteFloat32(r29, f31.d);
    goto loc_808060B4;
}

loc_808060B0:
{
    r3 = 0;
}

loc_808060B4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 64);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 36), 0, 52u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r1 + 64));
    // inline leaf 0x800215E4 (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
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
    ctx->fpr[7] = f7;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE0000FE gpr_write=0xFE00083B gpr_return=0x00000018 fpr_read=0x8000000F fpr_write=0x800000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80805F44 func_80805F44 preserves=false fpr_mask=0x80000000
