#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806EEB94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806EEB94;

loc_806EEB94:
{
    r0 = MemoryInline::FlatRead8((r3 + 68));
    MemoryInline::FlatWriteFloat32((r3 + 48), f1.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806EEBA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806EEBC8;
    }
}

loc_806EEBA4:
{
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r4 = MemoryInline::FlatRead32((r3 + 76));
    r0 = (r0 * 56);
    r4 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 52));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_806EEBC8:
{
    r0 = MemoryInline::FlatRead16((r3 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r4 = MemoryInline::FlatRead32((r3 + 76));
    r0 = (r0 * 56);
    r4 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 52));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000002 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806EEB94 func_806EEB94 preserves=true fpr_mask=0x00000000
