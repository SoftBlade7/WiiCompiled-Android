#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80085BD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80085BD0;

loc_80085BD0:
{
    f2.d = MemoryInline::FlatReadFloat32(r4);
    r0 = (r5 + -1);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r6 = (r4 + 12);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
}

loc_80085C04:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_80085C08:
{
    f1.d = MemoryInline::FlatReadFloat32(r6);
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80085C14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80085C20;
    }
}

loc_80085C18:
{
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    goto loc_80085C30;
}

loc_80085C20:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80085C28:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80085C30;
    }
}

loc_80085C2C:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
}

loc_80085C30:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80085C3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80085C48;
    }
}

loc_80085C40:
{
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    goto loc_80085C58;
}

loc_80085C48:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80085C50:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80085C58;
    }
}

loc_80085C54:
{
    MemoryInline::FlatWriteFloat32((r3 + 16), f1.d);
}

loc_80085C58:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80085C64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80085C70;
    }
}

loc_80085C68:
{
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    goto loc_80085C80;
}

loc_80085C70:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80085C78:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80085C80;
    }
}

loc_80085C7C:
{
    MemoryInline::FlatWriteFloat32((r3 + 20), f1.d);
}

loc_80085C80:
{
    r6 = (r6 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80085C08;
    }
}

loc_80085C88:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000041 gpr_return=0x00000000 fpr_read=0x00000003 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80085BD0 func_80085BD0 preserves=true fpr_mask=0x00000000
