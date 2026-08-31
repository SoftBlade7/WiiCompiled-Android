#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023CED8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023CED8;

loc_8023CED8:
{
}

loc_8023CEDC:
{
    r5 = 0;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8023CF10;
    }
}

loc_8023CEE4:
{
    r3 = MemoryInline::FlatRead16((r3 + 20));
    r0 = (r3 & 1);
}

loc_8023CEEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8023CEF4;
    }
}

loc_8023CEF0:
{
    r5 = (r5 | 1);
}

loc_8023CEF4:
{
    r0 = (r3 & 2);
}

loc_8023CEF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8023CF00;
    }
}

loc_8023CEFC:
{
    r5 = (r5 | 2);
}

loc_8023CF00:
{
    r0 = (r3 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023CF04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023CF38;
    }
}

loc_8023CF08:
{
    r5 = (r5 | 4);
    goto loc_8023CF38;
}

loc_8023CF10:
{
    r3 = MemoryInline::FlatRead16((r3 + 20));
    r0 = (r3 & 8);
}

loc_8023CF18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8023CF20;
    }
}

loc_8023CF1C:
{
    r5 = (r5 | 1);
}

loc_8023CF20:
{
    r0 = (r3 & 16);
}

loc_8023CF24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8023CF2C;
    }
}

loc_8023CF28:
{
    r5 = (r5 | 2);
}

loc_8023CF2C:
{
    r0 = (r3 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023CF30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023CF38;
    }
}

loc_8023CF34:
{
    r5 = (r5 | 4);
}

loc_8023CF38:
{
    MemoryInline::FlatWrite32((r13 + -23928), r5);
    r3 = r4;
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022947Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8023CED8 func_8023CED8 preserves=true fpr_mask=0x00000000
