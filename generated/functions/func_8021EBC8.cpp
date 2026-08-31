#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021EBC8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_8021EBC8;

loc_8021EBC8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 92));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 108));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -25400));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 88), f3.d);
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_8021EBEC:
{
    MemoryInline::FlatWriteFloat32((r3 + 92), f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8021EC00;
    }
}

loc_8021EBF4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25396));
    MemoryInline::FlatWriteFloat32((r3 + 88), f0.d);
    goto loc_8021EC10;
}

loc_8021EC00:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25396));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8021EC08:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8021EC10;
    }
}

loc_8021EC0C:
{
    MemoryInline::FlatWriteFloat32((r3 + 88), f1.d);
}

loc_8021EC10:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 92));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -25400));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8021EC1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8021EC2C;
    }
}

loc_8021EC20:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25396));
    MemoryInline::FlatWriteFloat32((r3 + 92), f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_8021EC2C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25396));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8021EC34:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_8021EC38:
{
    MemoryInline::FlatWriteFloat32((r3 + 92), f1.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021EBC8 func_8021EBC8 preserves=true fpr_mask=0x00000000
