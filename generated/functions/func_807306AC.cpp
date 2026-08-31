#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807306AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807306AC;

loc_807306AC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808D0000u;
    r31 = (r31 + -23192);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    r3 = MemoryInline::FlatRead32((r3 + 11240));
    // inline leaf 0x80739548 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80739548
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r0 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807306E4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 4), 0, 18u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r30 + 8), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r30 + 20), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r30 + 21), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80730708;
    }
}

loc_807306F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_807306F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80730718;
    }
}

loc_807306FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80730700:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80730730;
    }
}

loc_80730704:
{
    goto loc_80730740;
}

loc_80730708:
{
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r30 + 4), f0.d);
    goto loc_80730740;
}

loc_80730718:
{
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 12), r0);
    r3 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 11224));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r30 + 4), f0.d);
    goto loc_80730740;
}

loc_80730730:
{
    r0 = 2;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r30 + 4), f0.d);
}

loc_80730740:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001B gpr_write=0xC000000B gpr_return=0x00000008 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807306AC func_807306AC preserves=true fpr_mask=0x00000000
