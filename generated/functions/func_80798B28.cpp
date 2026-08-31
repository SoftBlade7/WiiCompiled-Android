#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80798B28(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80798B28;

loc_80798B28:
{
    r0 = MemoryInline::FlatRead8((r3 + 26));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80798B30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80798B34:
{
    r0 = MemoryInline::FlatRead32((r3 + 200));
    r6 = 0;
}

loc_80798B40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_80798B60;
    }
}

loc_80798B44:
{
    r0 = MemoryInline::FlatRead32((r3 + 264));
}

loc_80798B4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80798B60;
    }
}

loc_80798B50:
{
    r0 = MemoryInline::FlatRead8((r3 + 520));
}

loc_80798B58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80798B60;
    }
}

loc_80798B5C:
{
    r6 = 1;
}

loc_80798B60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80798B64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80798B68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80798B6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80798B7C;
    }
}

loc_80798B70:
{
    r0 = MemoryInline::FlatRead32((r3 + 208));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80798B78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80798B7C:
{
    r4 = r5;
    r3 = (r3 + 180);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80795350u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80798B28 func_80798B28 preserves=true fpr_mask=0x00000000
