#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AABF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_800AABF0;

loc_800AABF0:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28024));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800AABFC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AAC04;
    }
}

loc_800AAC00:
{
    goto loc_800AAC18;
}

loc_800AAC04:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28020));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800AAC0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AAC14;
    }
}

loc_800AAC10:
{
    goto loc_800AAC18;
}

loc_800AAC14:
{
    f2.d = f0.d;
}

loc_800AAC18:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 220));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_800AAC28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800AAC2C:
{
    MemoryInline::FlatWriteFloat32((r4 + 220), f2.d);
    r0 = MemoryInline::FlatRead8((r3 + 162));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite8((r3 + 162), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000005 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800AABF0 func_800AABF0 preserves=true fpr_mask=0x00000000
