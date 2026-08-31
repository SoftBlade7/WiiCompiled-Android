#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80675454(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80675454;

loc_80675454:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x80675464u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B1D0Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80675468:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806754A0;
    }
}

loc_8067546C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80675470:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806754B0;
    }
}

loc_80675474:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80675478:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806754C0;
    }
}

loc_8067547C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80675480:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806754D0;
    }
}

loc_80675484:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80675488:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806754E0;
    }
}

loc_8067548C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80675490:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806754F0;
    }
}

loc_80675494:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_80675498:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80675500;
    }
}

loc_8067549C:
{
    goto loc_80675510;
}

loc_806754A0:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r3 = (r3 + 211);
    goto loc_8067551C;
}

loc_806754B0:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r3 = (r3 + 214);
    goto loc_8067551C;
}

loc_806754C0:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r3 = (r3 + 217);
    goto loc_8067551C;
}

loc_806754D0:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r3 = (r3 + 220);
    goto loc_8067551C;
}

loc_806754E0:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r3 = (r3 + 223);
    goto loc_8067551C;
}

loc_806754F0:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r3 = (r3 + 226);
    goto loc_8067551C;
}

loc_80675500:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r3 = (r3 + 229);
    goto loc_8067551C;
}

loc_80675510:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r3 = (r3 + 232);
}

loc_8067551C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF0003FFB gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80675454 func_80675454 preserves=true fpr_mask=0x00000000
