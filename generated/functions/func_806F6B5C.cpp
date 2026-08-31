#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F6B5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806F6B5C;

loc_806F6B5C:
{
    r4 = 0x809C0000u;
    r8 = 0x809C0000u;
    r9 = MemoryInline::FlatRead32((r4 + 10400));
    r7 = 0x809C0000u;
    r4 = 0x809C0000u;
    r6 = (r8 + 8944);
    guest_range_0 = MemoryInline::ResolveRangeHost((r9 + 36), 0, 212u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r9 + 36));
    r5 = (r7 + 8960);
    MemoryInline::FlatWriteRamFloat32((r8 + 8944), f0.d);
    r4 = MemoryInline::FlatRead32((r4 + 10320));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r9 + 64));
    MemoryInline::FlatWriteRamFloat32((r7 + 8960), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r9 + 96));
    MemoryInline::FlatWriteRamFloat32((r6 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r9 + 124));
    MemoryInline::FlatWriteRamFloat32((r5 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 120u, (r9 + 156));
    MemoryInline::FlatWriteRamFloat32((r6 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 148u, (r9 + 184));
    MemoryInline::FlatWriteRamFloat32((r5 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 180u, (r9 + 216));
    MemoryInline::FlatWriteRamFloat32((r6 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 208u, (r9 + 244));
    MemoryInline::FlatWriteRamFloat32((r5 + 12), f0.d);
    r4 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r4 + -46);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_806F6BC8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_806F6BCC:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 6584));
    r4 = MemoryInline::FlatRead32((r4 + 24));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead16((r4 + 820));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWrite8((r3 + 36), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x000003F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806F6B5C func_806F6B5C preserves=true fpr_mask=0x00000000
