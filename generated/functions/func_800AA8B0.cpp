#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AA8B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_800AA8B0;

loc_800AA8B0:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28024));
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_800AA8B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AA8C0;
    }
}

loc_800AA8BC:
{
    goto loc_800AA8D4;
}

loc_800AA8C0:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_800AA8C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AA8D0;
    }
}

loc_800AA8CC:
{
    goto loc_800AA8D4;
}

loc_800AA8D0:
{
    f3.d = f1.d;
}

loc_800AA8D4:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28024));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_800AA8DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AA8E4;
    }
}

loc_800AA8E0:
{
    goto loc_800AA8F8;
}

loc_800AA8E4:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_800AA8EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AA8F4;
    }
}

loc_800AA8F0:
{
    goto loc_800AA8F8;
}

loc_800AA8F4:
{
    f1.d = f2.d;
}

loc_800AA8F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AA900:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AA924;
    }
}

loc_800AA904:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 264));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_800AA90C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800AA910:
{
    r0 = MemoryInline::FlatRead8((r3 + 162));
    MemoryInline::FlatWriteFloat32((r3 + 264), f3.d);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite8((r3 + 162), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_800AA924:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 260));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AA92C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AA93C;
    }
}

loc_800AA930:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 264));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_800AA938:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800AA93C:
{
    r0 = MemoryInline::FlatRead8((r3 + 162));
    MemoryInline::FlatWriteFloat32((r3 + 260), f1.d);
    r0 = (r0 | 8);
    MemoryInline::FlatWriteFloat32((r3 + 264), f3.d);
    MemoryInline::FlatWrite8((r3 + 162), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x0000000F fpr_write=0x0000000B fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800AA8B0 func_800AA8B0 preserves=true fpr_mask=0x00000000
