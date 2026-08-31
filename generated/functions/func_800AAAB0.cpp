#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AAAB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_800AAAB0;

loc_800AAAB0:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28024));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_800AAAB8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AAAC0;
    }
}

loc_800AAABC:
{
    goto loc_800AAAD4;
}

loc_800AAAC0:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_800AAAC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AAAD0;
    }
}

loc_800AAACC:
{
    goto loc_800AAAD4;
}

loc_800AAAD0:
{
    f2.d = f1.d;
}

loc_800AAAD4:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 184));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_800AAADC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800AAAE0:
{
    r0 = MemoryInline::FlatRead8((r3 + 162));
    MemoryInline::FlatWriteFloat32((r3 + 184), f2.d);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite8((r3 + 162), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000006 fpr_write=0x00000005 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800AAAB0 func_800AAAB0 preserves=true fpr_mask=0x00000000
