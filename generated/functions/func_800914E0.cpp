#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800914E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800914E0;

loc_800914E0:
{
}

loc_800914E4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800914FC;
    }
}

loc_800914E8:
{
}

loc_800914EC:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(1))) {
        goto loc_80091508;
    }
}

loc_800914F0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
}

loc_800914F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80091514;
    }
}

loc_800914F8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_800914FC:
{
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r4 = (r4 + r0);
    goto loc_8009152C;
}

loc_80091508:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r4 = (r4 + r0);
    goto loc_8009152C;
}

loc_80091514:
{
    r5 = MemoryInline::FlatRead32((r3 + 112));
    r0 = MemoryInline::FlatRead32((r3 + 116));
    r0 = (r5 + r0);
    r4 = (r0 - r4);
}

loc_8009152C:
{
    r5 = MemoryInline::FlatRead32((r3 + 112));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_80091534:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80091540;
    }
}

loc_80091538:
{
    r4 = r5;
    goto loc_80091554;
}

loc_80091540:
{
    r0 = MemoryInline::FlatRead32((r3 + 116));
    r0 = (r5 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8009154C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80091554;
    }
}

loc_80091550:
{
    r4 = r0;
}

loc_80091554:
{
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800B05E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800914E0 func_800914E0 preserves=true fpr_mask=0x00000000
