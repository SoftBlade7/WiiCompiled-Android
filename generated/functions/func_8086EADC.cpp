#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8086EADC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t ctr = ctx->ctr;

    goto loc_8086EADC;

loc_8086EADC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = 0x802A0000u;
    r4 = 0x808E0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r6 + 16640);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -15536));
    r4 = 0;
    MemoryInline::FlatWriteFloat32((r3 + 184), f0.d);
    r0 = MemoryInline::FlatRead16((r3 + 44));
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 16640), 0, 12u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r6 + 16640));
    MemoryInline::FlatWriteFloat32((r3 + 260), f0.d);
    r0 = (r0 | 1);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r5 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 264), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 268), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r6 + 16640));
    MemoryInline::FlatWriteFloat32((r3 + 284), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r5 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 288), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 292), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r5 + 4));
        }
    }
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r6 + 16640));
    MemoryInline::FlatWriteFloat32((r3 + 48), f2.d);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f0.d);
    MemoryInline::FlatWrite8((r3 + 480), static_cast<uint8_t>(r31));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x8086EB78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
    r4 = 0x808B0000u;
    r3 = MemoryInline::FlatRead32((r30 + 376));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8728));
    r4 = -1;
    MemoryInline::FlatWriteFloat32((r30 + 400), f0.d);
    MemoryInline::FlatWrite32((r30 + 460), r31);
    MemoryInline::FlatWrite32((r30 + 404), r31);
    MemoryInline::FlatWrite32((r30 + 408), r31);
    MemoryInline::FlatWrite32((r30 + 380), r31);
    MemoryInline::FlatWrite32((r30 + 384), r31);
    MemoryInline::FlatWrite32(r3, r31);
    r0 = MemoryInline::FlatRead32((r30 + 384));
    r3 = MemoryInline::FlatRead32((r30 + 376));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 4), r31);
    r0 = MemoryInline::FlatRead32((r30 + 384));
    r3 = MemoryInline::FlatRead32((r30 + 376));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    r0 = MemoryInline::FlatRead32((r30 + 384));
    r3 = MemoryInline::FlatRead32((r30 + 376));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r4 = MemoryInline::FlatRead32((r30 + 372));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 12), r4);
    MemoryInline::FlatWrite8((r30 + 388), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r30 + 360));
    MemoryInline::FlatWrite8((r30 + 389), static_cast<uint8_t>(r31));
    r12 = MemoryInline::FlatRead32((r30 + 368));
    ctx->lr = 0x8086EBF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80021450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
    // nop
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 388), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r4 = r30;
    MemoryInline::FlatWrite8((r30 + 356), static_cast<uint8_t>(r31));
    r5 = 8602;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x8086EC24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEF8E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFF8 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8086EADC func_8086EADC preserves=true fpr_mask=0x00000000
