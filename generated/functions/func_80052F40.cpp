#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052F40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80052F40;

loc_80052F40:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80052F48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80052F4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29848));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80052F54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80052F78;
    }
}

loc_80052F58:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80052F5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80052F78;
    }
}

loc_80052F60:
{
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_80052F64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80052F78;
    }
}

loc_80052F68:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_80052F84;
}

loc_80052F78:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & -5);
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_80052F84:
{
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r4 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80052F8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80052FAC;
    }
}

loc_80052F90:
{
    r0 = (r4 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80052F94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80052FAC;
    }
}

loc_80052F98:
{
    r0 = (r4 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80052F9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80052FAC;
    }
}

loc_80052FA0:
{
    r0 = (r4 | 1);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_80052FB8;
}

loc_80052FAC:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_80052FB8:
{
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 52), f3.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001D gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80052F40 func_80052F40 preserves=true fpr_mask=0x00000000
