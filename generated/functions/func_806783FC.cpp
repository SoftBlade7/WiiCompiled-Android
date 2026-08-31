#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806783FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806783FC;

loc_806783FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(104));
}

loc_80678400:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8067847C;
    }
}

loc_80678404:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80678438;
    }
}

loc_80678408:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(100));
}

loc_8067840C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8067846C;
    }
}

loc_80678410:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8067842C;
    }
}

loc_80678414:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(7));
}

loc_80678418:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80678464;
    }
}

loc_8067841C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806784A0;
    }
}

loc_80678420:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(6));
}

loc_80678424:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8067845C;
    }
}

loc_80678428:
{
    goto loc_806784A0;
}

loc_8067842C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(102));
}

loc_80678430:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806784A0;
    }
}

loc_80678434:
{
    goto loc_80678474;
}

loc_80678438:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(107));
}

loc_8067843C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80678494;
    }
}

loc_80678440:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80678450;
    }
}

loc_80678444:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(106));
}

loc_80678448:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8067848C;
    }
}

loc_8067844C:
{
    goto loc_80678484;
}

loc_80678450:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(109));
}

loc_80678454:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806784A0;
    }
}

loc_80678458:
{
    goto loc_8067849C;
}

loc_8067845C:
{
    r5 = 9;
    goto loc_806784A0;
}

loc_80678464:
{
    r5 = 1;
    goto loc_806784A0;
}

loc_8067846C:
{
    r5 = 2;
    goto loc_806784A0;
}

loc_80678474:
{
    r5 = 3;
    goto loc_806784A0;
}

loc_8067847C:
{
    r5 = 4;
    goto loc_806784A0;
}

loc_80678484:
{
    r5 = 5;
    goto loc_806784A0;
}

loc_8067848C:
{
    r5 = 6;
    goto loc_806784A0;
}

loc_80678494:
{
    r5 = 7;
    goto loc_806784A0;
}

loc_8067849C:
{
    r5 = 8;
}

loc_806784A0:
{
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x806784A4u>(ctx);
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806783FC func_806783FC preserves=true fpr_mask=0x00000000
