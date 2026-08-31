#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052EB0(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80052EB0;

loc_80052EB0:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80052EB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80052EBC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29848));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80052EC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80052EE8;
    }
}

loc_80052EC8:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80052ECC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80052EE8;
    }
}

loc_80052ED0:
{
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_80052ED4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80052EE8;
    }
}

loc_80052ED8:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_80052EF4;
}

loc_80052EE8:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_80052EF4:
{
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r4 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80052EFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80052F1C;
    }
}

loc_80052F00:
{
    r0 = (r4 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80052F04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80052F1C;
    }
}

loc_80052F08:
{
    r0 = (r4 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80052F0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80052F1C;
    }
}

loc_80052F10:
{
    r0 = (r4 | 1);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_80052F28;
}

loc_80052F1C:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_80052F28:
{
    MemoryInline::FlatWriteFloat32((r3 + 56), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 60), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f3.d);
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
// RECOMP_REGISTRATION base 0x80052EB0 func_80052EB0 preserves=true fpr_mask=0x00000000
