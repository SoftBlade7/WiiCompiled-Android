#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805ACC34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805ACC34;

loc_805ACC34:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r4 = MemoryInline::FlatRead32((r4 + -10520));
    r0 = MemoryInline::FlatRead8((r3 + 420));
    r4 = MemoryInline::FlatRead32((r4 + 68));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805ACC60:
{
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWrite8((r3 + 422), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805ACE04;
    }
}

loc_805ACC74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805ACC78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805ACE04;
    }
}

loc_805ACC7C:
{
    r3 = MemoryInline::FlatRead32((r3 + 44));
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r30 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r3 = MemoryInline::FlatRead32((r30 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805ACCA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805ACE04;
    }
}

loc_805ACCA4:
{
    r3 = MemoryInline::FlatRead32((r31 + 44));
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = MemoryInline::FlatRead32((r30 + -10448));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805ACCC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805ACE04;
    }
}

loc_805ACCC8:
{
    r3 = 0x808B0000u;
    r4 = MemoryInline::FlatRead16((r31 + 426));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r3 + 27804));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805ACCD8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_805ACCF0;
    }
}

loc_805ACCDC:
{
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 420), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 421), static_cast<uint8_t>(r0));
    goto loc_805ACCF8;
}

loc_805ACCF0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 421), static_cast<uint8_t>(r0));
}

loc_805ACCF8:
{
    r0 = MemoryInline::FlatRead16((r31 + 426));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805ACD00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805ACDE4;
    }
}

loc_805ACD04:
{
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r31 + 40));
    r5 = MemoryInline::FlatRead32((r4 + -10520));
    r4 = (r31 + 244);
    r0 = MemoryInline::FlatRead32((r5 + 68));
    MemoryInline::FlatWrite32((r31 + 8), r0);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x805ACD34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805ACD38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805ACD48;
    }
}

loc_805ACD3C:
{
    r3 = MemoryInline::FlatRead32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    MemoryInline::FlatWriteFloat32((r31 + 52), f0.d);
}

loc_805ACD48:
{
    r30 = 0x80890000u;
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 9336));
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteFloat32((r31 + 20), f0.d);
    MemoryInline::FlatWrite8((r31 + 81), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 10232));
    ctx->lr = 0x805ACD68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807112FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x805ACD74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805A9F54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 4));
    // inline leaf 0x805A6C04 (17 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 824));
    r0 = 0;
    r4 = 0x80890000u;
    r3 = 0x80890000u;
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 48u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r5, static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8728));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r5 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8976));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r5 + 4), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r5 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r5 + 16), f1.d);
    }
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r5 + 28), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r5 + 36), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r5 + 32), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r5 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r5 + 44), f1.d);
    }
    // end of inlined leaf 0x805A6C04
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 440), 0, 72u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r31 + 440), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 9336));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r31 + 464), f0.d);
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r31 + 442), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r31 + 468), f0.d);
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r31 + 444), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r31 + 472), f0.d);
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r31 + 446), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r31 + 476), f0.d);
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r31 + 448), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r31 + 480), f0.d);
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r31 + 450), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r31 + 484), f0.d);
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r31 + 452), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r31 + 488), f0.d);
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r31 + 454), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r31 + 492), f0.d);
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r31 + 456), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r31 + 496), f0.d);
    MemoryInline::WriteResolved16(guest_range_1, 18u, (r31 + 458), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r31 + 500), f0.d);
    MemoryInline::WriteResolved16(guest_range_1, 20u, (r31 + 460), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r31 + 504), f0.d);
    MemoryInline::WriteResolved16(guest_range_1, 22u, (r31 + 462), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r31 + 508), f0.d);
}

loc_805ACDE4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80532030u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805ACDF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805ACE04;
    }
}

loc_805ACDF8:
{
    r3 = MemoryInline::FlatRead16((r31 + 426));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 426), static_cast<uint16_t>(r0));
}

loc_805ACE04:
{
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
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x805ACC34 func_805ACC34 preserves=true fpr_mask=0x00000000
