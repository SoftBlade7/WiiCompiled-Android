#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8072B1DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8072B1DC;

loc_8072B1DC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0x808D0000u;
    r29 = (r29 + -25208);
    ctx->lr = 0x8072B204u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8072A0E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 92), r0);
    r3 = MemoryInline::FlatRead32((r31 + 68));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8072B220u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32((r31 + 52));
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8072B234u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 404));
    r30 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 12), r30);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 36), r30);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 16), r30);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 40), r30);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 20), r30);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 44), r30);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 24), r30);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 48), r30);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 28), r30);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 52), r30);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 32), r30);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 56), r30);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 8), r30);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 60), r30);
    r3 = MemoryInline::FlatRead32((r31 + 408));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8072B288u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x808A0000u;
    r5 = MemoryInline::FlatRead32((r31 + 412));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 9560));
    r4 = -1;
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + 16), 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r5 + 24), f0.d);
    r0 = 1;
    r3 = 0x809C0000u;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r5 + 20), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r5 + 16), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r5 + 36), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r5 + 32), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r5 + 28), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r5 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r5 + 44), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r5 + 48), r30);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r5 + 52), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r5 + 56), r4);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r5 + 60), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r5 + 64), r4);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r5 + 68), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r5 + 72), r30);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r5 + 76), r30);
    }
    r5 = MemoryInline::FlatRead32((r31 + 416));
    guest_range_2 = MemoryInline::ResolveRangeHost((r5 + 16), 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r5 + 24), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r5 + 20), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r5 + 16), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r5 + 36), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r5 + 32), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r5 + 28), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r5 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r5 + 44), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r5 + 48), r30);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r5 + 52), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r5 + 56), r4);
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r5 + 60), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r5 + 64), r4);
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r5 + 68), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r5 + 72), r30);
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r5 + 76), r30);
    }
    r4 = MemoryInline::FlatRead32((r31 + 56));
    r4 = MemoryInline::FlatRead32(r4);
    r4 = MemoryInline::FlatRead32((r4 + 16));
    r4 = MemoryInline::FlatRead32((r4 + 332));
    MemoryInline::FlatWrite8((r4 + 417), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r31 + 420));
    MemoryInline::FlatWrite32((r31 + 424), r30);
    MemoryInline::FlatWrite32((r31 + 428), r30);
    MemoryInline::FlatWrite32(r4, r30);
    MemoryInline::FlatWrite32((r4 + 4), r30);
    MemoryInline::FlatWrite32((r4 + 8), r30);
    MemoryInline::FlatWrite32((r4 + 12), r30);
    r3 = MemoryInline::FlatRead32((r3 + 11240));
    // inline leaf 0x80739548 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80739548
}

loc_8072B360:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8072B378;
    }
}

loc_8072B364:
{
}

loc_8072B368:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8072B388;
    }
}

loc_8072B36C:
{
}

loc_8072B370:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_8072B398;
    }
}

loc_8072B374:
{
    goto loc_8072B3A4;
}

loc_8072B378:
{
    r3 = MemoryInline::FlatRead32((r31 + 88));
    r0 = MemoryInline::FlatRead16((r29 + 114));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_8072B3A4;
}

loc_8072B388:
{
    r3 = MemoryInline::FlatRead32((r31 + 88));
    r0 = MemoryInline::FlatRead16((r29 + 116));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_8072B3A4;
}

loc_8072B398:
{
    r3 = MemoryInline::FlatRead32((r31 + 88));
    r0 = MemoryInline::FlatRead16((r29 + 118));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_8072B3A4:
{
    // inline leaf 0x807396EC (10 guest instruction(s))
}

loc_inl1_0x807396EC:
{
    r4 = 0x809C0000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_inl1_0x80739700:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80739704:
{
}

loc_inl1_0x80739708:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8073970C:
{
    r3 = 1;
    goto loc_inl1_cont_807396EC;
}

loc_inl1_return:
{
}

loc_inl1_cont_807396EC:
{
    // end of inlined leaf 0x807396EC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8072B3AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8072B3BC;
    }
}

loc_8072B3B0:
{
    r3 = r31;
    r4 = (r31 + 96);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
}

loc_8072B3BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8072B1DC func_8072B1DC preserves=true fpr_mask=0x00000000
