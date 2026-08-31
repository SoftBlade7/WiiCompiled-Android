#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FCEFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806FCEFC;

loc_806FCEFC:
{
    r7 = 0x809C0000u;
    r7 = MemoryInline::FlatRead32((r7 + 10232));
}

loc_806FCF08:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_806FCF14;
    }
}

loc_806FCF0C:
{
    r0 = MemoryInline::FlatRead8((r7 + 112));
    goto loc_806FCF18;
}

loc_806FCF14:
{
    r0 = 0;
}

loc_806FCF18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806FCF1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_806FCF20:
{
    r0 = 3;
    r7 = r3;
    r9 = 0;
    ctr = r0;
}

loc_806FCF30:
{
    r8 = MemoryInline::FlatRead32((r7 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_806FCF38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FCF5C;
    }
}

loc_806FCF3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FCF48;
    }
}

loc_806FCF40:
{
    r0 = MemoryInline::FlatRead32((r8 + 144));
    goto loc_806FCF4C;
}

loc_806FCF48:
{
    r0 = -1;
}

loc_806FCF4C:
{
}

loc_806FCF50:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_806FCF5C;
    }
}

loc_806FCF54:
{
    r0 = 1;
    goto loc_806FCF60;
}

loc_806FCF5C:
{
    r0 = 0;
}

loc_806FCF60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806FCF64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FCF84;
    }
}

loc_806FCF68:
{
    r7 = (r9 * 116);
    r4 = r5;
    r0 = (r6 * 28);
    r3 = (r3 + r7);
    r3 = (r3 + r0);
    r3 = (r3 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80213E5Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_806FCF84:
{
    r7 = (r7 + 116);
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806FCF30;
    }
}

loc_806FCF90:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4960));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_806FCF9C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806FCEFC func_806FCEFC preserves=true fpr_mask=0x00000000
