#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80228180(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80228180;

loc_80228180:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRam32((r1 + 140), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8022819C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802281E0;
    }
}

loc_802281A0:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r5 = (r1 + 12);
    r6 = (r1 + 16);
    r7 = (r1 + 20);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80227CB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = (r1 + 28);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f5.d = MemoryInline::FlatReadFloat32((r31 + 24));
    f6.d = MemoryInline::FlatReadFloat32((r31 + 28));
    // inline leaf 0x8006A560 (16 guest instruction(s))
}

loc_inl0_0x8006A560:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x8006A568:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8006A56C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 168), r0);
    MemoryInline::FlatWriteFloat32((r3 + 188), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 192), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 196), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 200), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 180), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 184), f6.d);
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r0 & -241);
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r3 + 112), r0);
    goto loc_inl0_cont_8006A560;
}

loc_inl0_return:
{
}

loc_inl0_cont_8006A560:
{
    // end of inlined leaf 0x8006A560
    goto loc_80228320;
}

loc_802281E0:
{
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    r3 = (r1 + 24);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 8), 0, 40u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f4.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 24));
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 28));
        }
    }
    // inline leaf 0x8006A520 (14 guest instruction(s))
}

loc_inl1_0x8006A520:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl1_0x8006A528:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8006A52C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 168), r0);
    MemoryInline::FlatWriteFloat32((r3 + 172), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 176), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 180), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 184), f4.d);
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r0 & -241);
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r3 + 112), r0);
    goto loc_inl1_cont_8006A520;
}

loc_inl1_return:
{
}

loc_inl1_cont_8006A520:
{
    // end of inlined leaf 0x8006A520
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 8));
    r4 = (r13 + -23976);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 12));
    r5 = (r13 + -23984);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25228));
    r3 = (r1 + 32);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    f6.d = MemoryInline::FlatReadFloat32((r2 + -25224));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 40));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r31 + 20));
    f7.d = MemoryInline::FlatReadFloat32((r2 + -25240));
    f2.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f8.d = PpcFmulsInline(f6.d, f4.d);
    f3.d = MemoryInline::FlatReadFloat32((r13 + -23976));
    f6.d = PpcFmulsInline(f6.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r13 + -23984));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f2.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f4.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f7.d / f8.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 32));
    f4.d = PpcFmulsInline(f4.d, f8.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d / f6.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f4.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 44));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f4.d);
    f4.d = PpcFmulsInline(f0.d, f6.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 36));
    f3.d = PpcFmulsInline(f3.d, f8.d);
    f0.d = PpcFmulsInline(f5.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f5.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 24));
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 28));
        }
    }
    f6.d = (-(f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    // inline leaf 0x80228DD8 (16 guest instruction(s))
    f8.d = MemoryInline::FlatReadFloat32((r2 + -25192));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f8.d / f1.d));
    f6.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f5.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f8.d / f2.d));
    f2.d = PpcFmulsInline(f1.d, f2.d);
    f6.d = PpcFmulsInline(f6.d, f7.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f6.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f0.d);
    // end of inlined leaf 0x80228DD8
    f7.d = MemoryInline::FlatReadFloat32((r2 + -25228));
    r3 = (r1 + 24);
    f6.d = MemoryInline::FlatReadFloat32((r1 + 36));
    r4 = (r1 + 64);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25216));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f0.d);
    ctx->lr = 0x80228320u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006A5A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
}

loc_80228320:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    r31 = MemoryInline::FlatRead32((r1 + 140));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000211E gpr_write=0x800001FB gpr_return=0x00000018 fpr_read=0x000003FF fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80228180 func_80228180 preserves=true fpr_mask=0x00000000
