#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800ACDA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_800ACDEC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_800ACDA0;

loc_800ACDA0:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -27956));
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_800ACDAC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800ACDB4;
    }
}

loc_800ACDB0:
{
    goto loc_800ACDC8;
}

loc_800ACDB4:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -27952));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_800ACDBC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800ACDC4;
    }
}

loc_800ACDC0:
{
    goto loc_800ACDC8;
}

loc_800ACDC4:
{
    f2.d = f1.d;
}

loc_800ACDC8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27948));
    r3 = 0x80250000u;
    r3 = (r3 + -26696);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword0;
    r0 = (r4 + 904);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    addr_lfsx_800ACDEC_loc_0 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_800ACDEC_loc_0);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000006 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000006 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800ACDA0 func_800ACDA0 preserves=true fpr_mask=0x00000000
