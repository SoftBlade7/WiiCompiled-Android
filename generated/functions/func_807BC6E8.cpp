#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807BC6E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addic_src_0 = 0;
    uint32_t r0_addic_src_1 = 0;
    uint32_t r0_addic_src_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807BC6E8;

loc_807BC6E8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 24));
}

loc_807BC704:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_807BC76C;
    }
}

loc_807BC708:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_807BC714:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BC728;
    }
}

loc_807BC718:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_807BC71C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BC728;
    }
}

loc_807BC720:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_807BC724:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BC76C;
    }
}

loc_807BC728:
{
    r3 = r31;
    ctx->lr = 0x807BC730u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807BC170u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 8));
}

loc_807BC738:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807BC76C;
    }
}

loc_807BC73C:
{
    r0 = 0;
    r3 = 20;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 38u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 4), r3);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 8), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r31 + 41), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r31 + 24), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r31 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r31 + 16), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r31 + 20), r0);
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r31 + 28), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r31 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r31 + 36), r0);
    }
}

loc_807BC76C:
{
    r0 = MemoryInline::FlatRead8((r31 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BC774:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BC81C;
    }
}

loc_807BC778:
{
    r3 = MemoryInline::FlatRead32((r31 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807BC780:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BC81C;
    }
}

loc_807BC784:
{
    r0 = MemoryInline::FlatRead32((r31 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BC78C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BC81C;
    }
}

loc_807BC790:
{
    r0 = (r3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BC794:
{
    MemoryInline::FlatWrite32((r31 + 32), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BC81C;
    }
}

loc_807BC79C:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 14521));
}

loc_807BC7A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807BC7DC;
    }
}

loc_807BC7AC:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead8((r3 + 25));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BC7B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BC7DC;
    }
}

loc_807BC7BC:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 13984);
    r4 = 12;
    r0 = (r0 * 28);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x807BC7DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8079C220u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807BC7DC:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r0_addic_src_1 = r0;
    r0 = (r0_addic_src_1 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addic_src_1)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BC7E4:
{
    MemoryInline::FlatWrite32((r31 + 8), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BC81C;
    }
}

loc_807BC7EC:
{
    r0 = 0;
    r3 = 20;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 38u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r31 + 4), r3);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r31 + 8), r0);
    }
    MemoryInline::WriteResolved8(guest_range_1, 37u, (r31 + 41), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r31 + 24), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r31 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r31 + 16), r0);
    }
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r31 + 20), r0);
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r31 + 28), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r31 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r31 + 36), r0);
    }
}

loc_807BC81C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807BC6E8 func_807BC6E8 preserves=true fpr_mask=0x00000000
