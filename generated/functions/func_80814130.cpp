#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80814130(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80814130;

loc_80814130:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 48);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r31 = 0x808B0000u;
    r26 = r3;
    r31 = (r31 + -19496);
    r27 = r4;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 36));
    f31.d = f1.d;
    r28 = r5;
    r29 = r6;
    f1.d = PpcFmulsInline(f0.d, f2.d);
    r30 = r7;
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
    f2.d = MemoryInline::FlatReadFloat32((r31 + 64));
    f1.d = MemoryInline::FlatReadFloat32((r26 + 184));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f4.d = MemoryInline::FlatReadFloat32(r27);
    f3.d = MemoryInline::FlatReadFloat32((r26 + 180));
    f6.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f1.d = MemoryInline::FlatReadFloat32(r31);
    f5.d = PpcFmulsInline(f6.d, f5.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f0.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    SetCRFloatResident(cr, 0, f7.d, f1.d);
}

loc_808141C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808141F8;
    }
}

loc_808141C4:
{
    f3.d = PpcFmulsInline(f7.d, f6.d);
    MemoryInline::FlatWriteFloat32((r28 + 8), f1.d);
    f0.d = PpcFmulsInline(f7.d, f2.d);
    r3 = 1;
    MemoryInline::FlatWriteFloat32((r28 + 4), f3.d);
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 8), f1.d);
    MemoryInline::FlatWriteFloat32(r30, f7.d);
    goto loc_80814250;
}

loc_808141F8:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f0.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f0.d));
    SetCRFloatResident(cr, 0, f4.d, f1.d);
}

loc_8081420C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8081424C;
    }
}

loc_80814210:
{
    f0.d = (-(f4.d));
    MemoryInline::FlatWriteFloat32((r28 + 8), f1.d);
    f3.d = PpcFmulsInline(f4.d, f6.d);
    r3 = 1;
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 4), f3.d);
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 4), f2.d);
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 8), f1.d);
    MemoryInline::FlatWriteFloat32(r30, f4.d);
    goto loc_80814250;
}

loc_8081424C:
{
    r3 = 0;
}

loc_80814250:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 48);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 48u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r1 + 48));
    // inline leaf 0x800215E8 (7 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
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

// RECOMP_GUEST_ABI gpr_read=0xFC0000FE gpr_write=0xFC00083B gpr_return=0x00000018 fpr_read=0x800000FE fpr_write=0x800000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80814130 func_80814130 preserves=false fpr_mask=0x80000000
