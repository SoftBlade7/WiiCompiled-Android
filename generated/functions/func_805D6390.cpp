#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805D6390(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805D6390;

loc_805D6390:
{
    r5 = MemoryInline::FlatRead32((r3 + 4524));
    r0 = (r5 + -21);
}

loc_805D639C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_805D63A8;
    }
}

loc_805D63A0:
{
}

loc_805D63A4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(3))) {
        goto loc_805D63B0;
    }
}

loc_805D63A8:
{
    r0 = 1;
    goto loc_805D63B4;
}

loc_805D63B0:
{
    r0 = 0;
}

loc_805D63B4:
{
}

loc_805D63B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805D6410;
    }
}

loc_805D63BC:
{
    r0 = (r4 + -21);
}

loc_805D63C4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_805D63D0;
    }
}

loc_805D63C8:
{
}

loc_805D63CC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_805D63D8;
    }
}

loc_805D63D0:
{
    r0 = 1;
    goto loc_805D63DC;
}

loc_805D63D8:
{
    r0 = 0;
}

loc_805D63DC:
{
}

loc_805D63E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_805D6410;
    }
}

loc_805D63E4:
{
    r0 = (r4 + -21);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_805D63EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805D6404;
    }
}

loc_805D63F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_805D63F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_805D63F8:
{
    r4 = 62;
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80602CF8u>(ctx);
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

loc_805D6404:
{
    r4 = 61;
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80602CF8u>(ctx);
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

loc_805D6410:
{
    r0 = (r5 + -21);
}

loc_805D6418:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_805D6424;
    }
}

loc_805D641C:
{
}

loc_805D6420:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(3))) {
        goto loc_805D642C;
    }
}

loc_805D6424:
{
    r0 = 1;
    goto loc_805D6430;
}

loc_805D642C:
{
    r0 = 0;
}

loc_805D6430:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_805D6434:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_805D6438:
{
    r0 = (r4 + -21);
}

loc_805D6440:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_805D644C;
    }
}

loc_805D6444:
{
}

loc_805D6448:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_805D6454;
    }
}

loc_805D644C:
{
    r0 = 1;
    goto loc_805D6458;
}

loc_805D6454:
{
    r0 = 0;
}

loc_805D6458:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D645C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_805D6460:
{
    r4 = 63;
    r5 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80602CF8u>(ctx);
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

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0x000010F9 gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x805D6390 func_805D6390 preserves=true fpr_mask=0x00000000
