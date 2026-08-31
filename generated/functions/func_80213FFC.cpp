#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80213FFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80213FFC;

loc_80213FFC:
{
    r4 = MemoryInline::FlatRead32((r3 + 32));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25880));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8021400C:
{
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80214034;
    }
}

loc_80214018:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_8021401C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8021403C;
    }
}

loc_80214020:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_80214024:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80214048;
    }
}

loc_80214028:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_8021402C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80214050;
    }
}

loc_80214030:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_80214034:
{
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_8021403C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25864));
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_80214048:
{
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_80214050:
{
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001D gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80213FFC func_80213FFC preserves=true fpr_mask=0x00000000
