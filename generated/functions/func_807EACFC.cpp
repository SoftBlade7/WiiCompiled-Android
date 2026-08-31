#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807EACFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_807EACFC;

loc_807EACFC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    r5 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r1 + 76), r31);
    r31 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + -27736));
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r30);
    r30 = r6;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r29);
    r29 = r3;
    r3 = MemoryInline::FlatRead32((r5 + 16216));
    r5 = (r1 + 8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r1 + 28), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r1 + 32), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r1 + 36), f1.d);
    // inline leaf 0x807E08E4 (22 guest instruction(s))
}

loc_inl0_0x807E08E4:
{
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 144));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 156));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteRamFloat32(r5, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 152));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 164));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteRamFloat32((r5 + 4), f0.d);
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x807E0924:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x807E0928:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 30568));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRamFloat32(r5, f0.d);
    goto loc_inl0_cont_807E08E4;
}

loc_inl0_return:
{
}

loc_inl0_cont_807E08E4:
{
    // end of inlined leaf 0x807E08E4
    r3 = 0x808B0000u;
    r6 = 0x808D0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + -27724));
    r4 = 0x808D0000u;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r5 = r30;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = (r1 + 16);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r6 + 14368));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 14364));
    f0.d = MemoryInline::FlatReadFloat32((r31 + -27736));
    r4 = (r1 + 40);
    f3.d = PpcFmulsInline(f3.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    f0.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80514838u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = MemoryInline::FlatRead32((r29 + 408));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 72u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r1 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r1 + 28));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r1 + 20));
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r1 + 32));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r1 + 24));
    MemoryInline::FlatWriteFloat32((r3 + 52), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r1 + 36));
    r3 = MemoryInline::FlatRead32((r29 + 408));
    f0.d = MemoryInline::FlatReadFloat32((r31 + -27736));
    MemoryInline::FlatWriteFloat32((r3 + 56), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 60), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 124), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r1 + 76));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 72));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 68));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0xE000007A gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807EACFC func_807EACFC preserves=true fpr_mask=0x00000000
