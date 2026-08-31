#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126AAC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80126AAC;

loc_80126AAC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 32;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x802F0000u;
    r31 = (r31 + 29760);
    MemoryInline::FlatWrite32((r13 + -26312), r4);
    r5 = (r31 + 2272);
    MemoryInline::FlatWrite32((r13 + -26316), r4);
    MemoryInline::FlatWrite32((r13 + -26352), r3);
    MemoryInline::FlatWrite32((r13 + -26336), r4);
    ctr = r0;
}

loc_80126AE4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r5 + 4), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 8), r4);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r5 + 12), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r5 + 16), r4);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r5 + 20), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r5 + 24), r4);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r5 + 28), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r5 + 32), r4);
    r5 = (r5 + 36);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80126AE4;
    }
}

loc_80126B10:
{
    r3 = (r31 + 2272);
    r4 = 1152;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    r0 = 24;
    r4 = (r31 + 1504);
    r3 = 0;
    ctr = r0;
}

loc_80126B2C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r4, r3);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r4 + 4), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r4 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r4 + 12), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r4 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r4 + 20), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r4 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r4 + 28), r3);
    }
    r4 = (r4 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80126B2C;
    }
}

loc_80126B54:
{
    r3 = (r31 + 1504);
    r4 = 768;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    r0 = 36;
    r4 = (r31 + 64);
    r3 = 0;
    ctr = r0;
}

loc_80126B70:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r4, r3);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r4 + 4), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r4 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r4 + 12), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r4 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r4 + 20), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r4 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r4 + 28), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r4 + 32), r3);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r4 + 36), r3);
    }
    r4 = (r4 + 40);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80126B70;
    }
}

loc_80126BA0:
{
    r3 = (r31 + 64);
    r4 = 1440;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    ctx->lr = 0x80126BB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801269BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x80120000u;
    r3 = (r3 + 26776);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80123F88u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r13 + -26352));
    r8 = (r31 + 64);
    r4 = 18;
    r3 = 180;
    r7 = (r8 + 360);
    r6 = (r8 + 720);
    r5 = (r8 + 1080);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80126BDC:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r8);
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    MemoryInline::FlatWrite32((r13 + -26364), r4);
    MemoryInline::FlatWrite32((r13 + -26360), r4);
    MemoryInline::FlatWrite32((r13 + -26356), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80126C14;
    }
}

loc_80126BFC:
{
    r4 = (r31 + 2272);
    r3 = (r31 + 1504);
    r4 = (r4 + 768);
    r5 = (r1 + 8);
    ctx->lr = 0x80126C10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80125BE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80126C28;
}

loc_80126C14:
{
    r4 = (r31 + 2272);
    r3 = (r31 + 1504);
    r4 = (r4 + 384);
    r5 = (r1 + 8);
    ctx->lr = 0x80126C28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80125BE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80126C28:
{
    r0 = MemoryInline::FlatRead32((r13 + -26352));
    r4 = 1;
    r3 = 0;
    MemoryInline::FlatWrite32((r13 + -26320), r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80126C3C:
{
    MemoryInline::FlatWrite32((r13 + -26324), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80126C6C;
    }
}

loc_80126C44:
{
    r3 = MemoryInline::FlatRead32((r13 + -26316));
    r0 = (r31 + 2272);
    r4 = 384;
    r3 = (r3 * 384);
    r3 = (r0 + r3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80123FCCu>(ctx);
    r3 = MemoryInline::FlatRead32((r13 + -26316));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r13 + -26316), r0);
    goto loc_80126C84;
}

loc_80126C6C:
{
    r3 = MemoryInline::FlatRead32((r13 + -26312));
    r0 = (r31 + 2272);
    r4 = 384;
    r3 = (r3 * 384);
    r3 = (r0 + r3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80123FCCu>(ctx);
}

loc_80126C84:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x80124048u>(ctx);
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -26368), r0);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80126AAC func_80126AAC preserves=true fpr_mask=0x00000000
