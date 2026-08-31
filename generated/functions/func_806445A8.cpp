#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806445A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806445A8;

loc_806445A8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_806445C8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(96))) {
        goto loc_806445EC;
    }
}

loc_806445CC:
{
}

loc_806445D0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(90))) {
        goto loc_806445E0;
    }
}

loc_806445D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(88));
}

loc_806445D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806445FC;
    }
}

loc_806445DC:
{
    goto loc_80644628;
}

loc_806445E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(94));
}

loc_806445E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80644614;
    }
}

loc_806445E8:
{
    goto loc_80644628;
}

loc_806445EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(104));
}

loc_806445F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80644628;
    }
}

loc_806445F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(100));
}

loc_806445F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80644614;
    }
}

loc_806445FC:
{
    r3 = 0x809C0000u;
    r4 = 85;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r5 = 0;
    ctx->lr = 0x80644610u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80635A3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    goto loc_80644628;
}

loc_80644614:
{
    r3 = 0x809C0000u;
    r4 = 91;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r5 = 0;
    ctx->lr = 0x80644628u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80635A3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_80644628:
{
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r5 = 255;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80635AC8u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000007B gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806445A8 func_806445A8 preserves=true fpr_mask=0x00000000
