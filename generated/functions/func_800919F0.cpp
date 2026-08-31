#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800919F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_subfic_ra_0 = 0;
    uint32_t r4_subfic_ra_1 = 0;
    uint32_t r4_subfic_ra_2 = 0;

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
    uint32_t xer = ctx->xer;

    goto loc_800919F0;

loc_800919F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(127));
}

loc_800919F4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80091A04;
    }
}

loc_800919FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28652));
    goto loc_80091A84;
}

loc_80091A04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(126));
}

loc_80091A08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80091A14;
    }
}

loc_80091A0C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28624));
    goto loc_80091A84;
}

loc_80091A14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(50));
}

loc_80091A18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80091A54;
    }
}

loc_80091A1C:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & -2);
    r0 = 1127219200;
    r4 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = (r4 ^ -2147483648);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -28632));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28620));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28616));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_80091A84;
}

loc_80091A54:
{
    r4_subfic_ra_1 = r4;
    r4 = (126 - r4_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(126) >= static_cast<uint32_t>(r4_subfic_ra_1) ? 1u : 0u) << 29);
    r0 = 1127219200;
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -28632));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28612));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28616));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
}

loc_80091A84:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x00000013 gpr_return=0x00000010 fpr_read=0x0000000E fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800919F0 func_800919F0 preserves=true fpr_mask=0x00000000
