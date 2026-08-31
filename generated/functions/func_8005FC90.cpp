#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005FC90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8005FC90;

loc_8005FC90:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRam32((r1 + 140), r31);
    MemoryInline::FlatWriteRam32((r1 + 136), r30);
    r30 = r4;
    r4 = (r1 + 76);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 140));
    ctr = r12;
    ctx->lr = 0x8005FCBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32(r3);
    r31 = r3;
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8005FCC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8005FCD4;
    }
}

loc_8005FCCC:
{
    r3 = 0;
    goto loc_8005FDCC;
}

loc_8005FCD4:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8005FCDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005FCEC;
    }
}

loc_8005FCE0:
{
}

loc_8005FCE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8005FD08;
    }
}

loc_8005FCE8:
{
    goto loc_8005FD34;
}

loc_8005FCEC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 48));
    r3 = r30;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 20));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 24));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 28));
    // inline leaf 0x8006A520 (14 guest instruction(s))
}

loc_inl0_0x8006A520:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_inl0_0x8006A528:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8006A52C:
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
    goto loc_inl0_cont_8006A520;
}

loc_inl0_return:
{
}

loc_inl0_cont_8006A520:
{
    // end of inlined leaf 0x8006A520
    goto loc_8005FD34;
}

loc_8005FD08:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29576));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    r3 = r30;
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f5.d = MemoryInline::FlatReadFloat32((r31 + 24));
    f6.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f4.d = PpcFmulsInline(f1.d, f0.d);
    f2.d = (-(f1.d));
    f3.d = (-(f4.d));
    // inline leaf 0x8006A560 (16 guest instruction(s))
}

loc_inl1_0x8006A560:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_inl1_0x8006A568:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8006A56C:
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
    goto loc_inl1_cont_8006A560;
}

loc_inl1_return:
{
}

loc_inl1_cont_8006A560:
{
    // end of inlined leaf 0x8006A560
}

loc_8005FD34:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 48u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r31);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8005FD3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005FD4C;
    }
}

loc_8005FD40:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8005FD44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005FD7C;
    }
}

loc_8005FD48:
{
    goto loc_8005FDB0;
}

loc_8005FD4C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 32));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r31 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    goto loc_8005FDB0;
}

loc_8005FD7C:
{
    r0 = 2;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 68u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 32), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 32));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
        }
    }
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r31 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r1 + 56), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r1 + 48), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r1 + 52), f2.d);
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r31 + 44));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 8), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r1 + 12), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 16), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r1 + 72), f0.d);
}

loc_8005FDB0:
{
    r3 = r30;
    r4 = (r31 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006A270u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r3 = r30;
    r4 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006A2B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = 1;
}

loc_8005FDCC:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    r31 = MemoryInline::FlatRead32((r1 + 140));
    r30 = MemoryInline::FlatRead32((r1 + 136));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8005FC90 func_8005FC90 preserves=true fpr_mask=0x00000000
