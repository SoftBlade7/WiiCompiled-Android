#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F6BEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806F6BEC;

loc_806F6BEC:
{
}

loc_806F6BF0:
{
    r6 = 0x808A0000u;
    r6 = (r6 + 2976);
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(255))) {
        goto loc_806F6C08;
    }
}

loc_806F6BFC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10232));
    r5 = MemoryInline::FlatRead8((r3 + 76));
}

loc_806F6C08:
{
    r0 = (r5 + -2);
}

loc_806F6C10:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_806F6C2C;
    }
}

loc_806F6C14:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
}

loc_806F6C18:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806F6C24;
    }
}

loc_806F6C1C:
{
    f1.d = MemoryInline::FlatReadFloat32(r6);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_806F6C24:
{
    f1.d = MemoryInline::FlatReadFloat32(r6);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_806F6C2C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F6C50;
    }
}

loc_806F6C34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_806F6C38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F6C50;
    }
}

loc_806F6C3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_806F6C40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F6C58;
    }
}

loc_806F6C44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_806F6C48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F6C58;
    }
}

loc_806F6C4C:
{
    goto loc_806F6C60;
}

loc_806F6C50:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 36));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_806F6C58:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_806F6C60:
{
    f1.d = MemoryInline::FlatReadFloat32(r6);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806F6BEC func_806F6BEC preserves=true fpr_mask=0x00000000
