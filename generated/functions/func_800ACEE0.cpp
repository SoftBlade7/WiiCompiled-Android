#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800ACEE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_800ACF44_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_800ACEE0;

loc_800ACEE0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27964));
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800ACEEC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800ACEF4;
    }
}

loc_800ACEF0:
{
    goto loc_800ACF08;
}

loc_800ACEF4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27936));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800ACEFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800ACF04;
    }
}

loc_800ACF00:
{
    goto loc_800ACF08;
}

loc_800ACF04:
{
    f0.d = f1.d;
}

loc_800ACF08:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -27960));
    r4 = 0x80270000u;
    r0 = MemoryInline::FlatRead32(r3);
    r4 = (r4 + 19312);
    f1.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27940));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -27964));
    r4_addr_0 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_0);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    addr_lfsx_800ACF44_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_800ACF44_loc_0);
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_800ACF4C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800ACF54;
    }
}

loc_800ACF50:
{
    goto loc_800ACF68;
}

loc_800ACF54:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -27936));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_800ACF5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800ACF64;
    }
}

loc_800ACF60:
{
    goto loc_800ACF68;
}

loc_800ACF64:
{
    f3.d = f0.d;
}

loc_800ACF68:
{
    f1.d = f3.d;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x0000000B fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800ACEE0 func_800ACEE0 preserves=true fpr_mask=0x00000000
