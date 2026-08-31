#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B8C3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805B8C3C;

loc_805B8C3C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r0 = MemoryInline::FlatRead32((r3 + 6976));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B8C58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B8CE0;
    }
}

loc_805B8C5C:
{
    r3 = 72;
    ctx->lr = 0x805B8C64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805B8C68:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B8CD8;
    }
}

loc_805B8C70:
{
    r4 = 0x808B0000u;
    r4 = (r4 + 29480);
    MemoryInline::FlatWriteRam32((r3 + 16), r4);
    ctx->lr = 0x805B8C80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8021A0F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x808B0000u;
    r3 = (r31 + 20);
    r4 = (r4 + 29492);
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 68u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r31, r4);
    r4 = 76;
    // inline leaf 0x800AEF60 (6 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 28u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_0, 30u, (r3 + 10), r4);
    }
    // end of inlined leaf 0x800AEF60
    r3 = (r31 + 32);
    r4 = 76;
    // inline leaf 0x800AEF60 (6 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 40u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 40u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_0, 42u, (r3 + 10), r4);
    }
    // end of inlined leaf 0x800AEF60
    r3 = (r31 + 44);
    r4 = 76;
    // inline leaf 0x800AEF60 (6 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 52u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 52u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_0, 54u, (r3 + 10), r4);
    }
    // end of inlined leaf 0x800AEF60
    r3 = (r31 + 56);
    r4 = 76;
    // inline leaf 0x800AEF60 (6 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 64u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 64u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_0, 66u, (r3 + 10), r4);
    }
    // end of inlined leaf 0x800AEF60
    r3 = 0x809C0000u;
    r4 = 1;
    r0 = MemoryInline::FlatRead32((r3 + 6260));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B8CCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B8CD4;
    }
}

loc_805B8CD0:
{
    r4 = 3;
}

loc_805B8CD4:
{
    MemoryInline::FlatWriteRam32((r31 + 68), r4);
}

loc_805B8CD8:
{
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r3 + 6976), r31);
}

loc_805B8CE0:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r3 = MemoryInline::FlatRead32((r3 + 6976));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805B8C3C func_805B8C3C preserves=true fpr_mask=0x00000000
