#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806EA288(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806EA288;

loc_806EA288:
{
    r4 = 0x808A0000u;
    r5 = 0x808C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 2512));
    r0 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 1016), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 1028), r0);
    r5 = (r5 + 29992);
    r4 = 0x809C0000u;
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 1016), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 1040), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 1044), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 1048), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 1052), f0.d);
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2920));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806EA2D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_806EA2D8:
{
    r0 = MemoryInline::FlatRead32((r3 + 1180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_806EA2E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_806EA2E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 24));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 1040), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 1044), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 1048), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 1052), f1.d);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000029 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000002 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806EA288 func_806EA288 preserves=true fpr_mask=0x00000000
