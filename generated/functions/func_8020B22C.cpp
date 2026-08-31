#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020B22C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8020B22C;

loc_8020B22C:
{
    r0 = MemoryInline::FlatRead32((r13 + -24224));
}

loc_8020B234:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8020B250;
    }
}

loc_8020B238:
{
    r5 = MemoryInline::FlatRead32((r13 + -24208));
}

loc_8020B240:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8020B250;
    }
}

loc_8020B244:
{
    r0 = (r3 * 320);
    r3 = (r5 + r0);
    goto loc_8020B254;
}

loc_8020B250:
{
    r3 = 0;
}

loc_8020B254:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020B258:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B274;
    }
}

loc_8020B25C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020B264:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B274;
    }
}

loc_8020B268:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020B270:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020B280;
    }
}

loc_8020B274:
{
    r3 = 65536;
    r3 = (r3 + -20477);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8020B280:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_8020B284:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8020B294;
    }
}

loc_8020B288:
{
    MemoryInline::FlatWrite32((r3 + 12), r4);
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8020B294:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8020B22C func_8020B22C preserves=true fpr_mask=0x00000000
