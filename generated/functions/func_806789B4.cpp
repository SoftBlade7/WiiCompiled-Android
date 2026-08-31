#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806789B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806789B4;

loc_806789B4:
{
    MemoryInline::FlatWriteRam32((r1 + -528), r1);
    r1 = (r1 + -528);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 532), r0);
    MemoryInline::FlatWriteRam32((r1 + 524), r31);
    r31 = r3;
    r3 = (r1 + 8);
    ctx->lr = 0x806789D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E96B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-13));
}

loc_806789D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806789E0;
    }
}

loc_806789D8:
{
    r3 = 0;
    goto loc_80678A14;
}

loc_806789E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806789E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806789F4;
    }
}

loc_806789E8:
{
    MemoryInline::FlatWrite32(r31, r3);
    r3 = 4;
    goto loc_80678A14;
}

loc_806789F4:
{
    r3 = (r1 + 8);
    ctx->lr = 0x806789FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E9F48u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80678A00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80678A10;
    }
}

loc_80678A04:
{
    MemoryInline::FlatWrite32(r31, r3);
    r3 = 4;
    goto loc_80678A14;
}

loc_80678A10:
{
    r3 = 0;
}

loc_80678A14:
{
    r0 = MemoryInline::FlatRead32((r1 + 532));
    r31 = MemoryInline::FlatRead32((r1 + 524));
    ctx->lr = r0;
    r1 = (r1 + 528);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806789B4 func_806789B4 preserves=true fpr_mask=0x00000000
