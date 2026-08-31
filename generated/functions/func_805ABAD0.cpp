#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805ABAD0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805ABAD0;

loc_805ABAD0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = MemoryInline::FlatRead16((r3 + 48));
    r29 = (r29 << 16);
    r29 = (static_cast<int32_t>(r29) >> 16);
    r3 = MemoryInline::FlatRead32((r3 + 44));
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r30 = 0x809C0000u;
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r30 + -10520));
    r5 = r29;
    r6 = 0;
    ctx->lr = 0x805ABB10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80516808u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_805ABB18:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_805ABC40;
    }
}

loc_805ABB1C:
{
    r0 = MemoryInline::FlatRead16((r31 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_805ABB24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805ABC40;
    }
}

loc_805ABB28:
{
    MemoryInline::FlatWrite16((r31 + 48), static_cast<uint16_t>(r3));
    r3 = r31;
    r12 = MemoryInline::FlatRead32(r31);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x805ABB40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805ABB44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805ABC74;
    }
}

loc_805ABB48:
{
    r0 = MemoryInline::FlatRead32((r31 + 76));
    r4 = MemoryInline::FlatRead16((r31 + 48));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_805ABB54:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_805ABB9C;
    }
}

loc_805ABB58:
{
    r0 = MemoryInline::FlatRead8((r31 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805ABB60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805ABBC0;
    }
}

loc_805ABB64:
{
    r30 = 1;
    MemoryInline::FlatWrite32((r31 + 76), r30);
    r3 = r31;
    r12 = MemoryInline::FlatRead32(r31);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x805ABB80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80516CD4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805ABB88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805ABB94;
    }
}

loc_805ABB8C:
{
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_805ABBC0;
}

loc_805ABB94:
{
    MemoryInline::FlatWrite8((r31 + 80), static_cast<uint8_t>(r30));
    goto loc_805ABBC0;
}

loc_805ABB9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_805ABBA0:
{
    MemoryInline::FlatWrite16((r31 + 48), static_cast<uint16_t>(r4));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805ABBB8;
    }
}

loc_805ABBA8:
{
    r3 = MemoryInline::FlatRead32((r30 + -10520));
    r4 = (r4 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80516BFCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    MemoryInline::FlatWrite32((r31 + 8), r3);
}

loc_805ABBB8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 76), r0);
}

loc_805ABBC0:
{
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
    r4 = 0x80890000u;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 440), 0, 72u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r31 + 440), static_cast<uint16_t>(r0));
    r3 = r31;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 9336));
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
    ctx->lr = 0x805ABC3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805ABD94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805ABC74;
}

loc_805ABC40:
{
    r0 = MemoryInline::FlatRead8((r31 + 420));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805ABC48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805ABC74;
    }
}

loc_805ABC4C:
{
    r3 = MemoryInline::FlatRead32((r31 + 44));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805ABC60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805ABC74;
    }
}

loc_805ABC64:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    MemoryInline::FlatWrite8((r31 + 32), static_cast<uint8_t>(r0));
}

loc_805ABC74:
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
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x805ABAD0 func_805ABAD0 preserves=true fpr_mask=0x00000000
