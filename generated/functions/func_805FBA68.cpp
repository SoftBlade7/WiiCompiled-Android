#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805FBA68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t cr = ctx->cr;

    goto loc_805FBA68;

loc_805FBA68:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_805FBA70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805FBB04;
    }
}

loc_805FBA74:
{
    r4 = 0x80890000u;
    r5 = 0x80890000u;
    f7.d = MemoryInline::FlatReadFloat32((r4 + 25548));
    r4 = 0x80890000u;
    f6.d = MemoryInline::FlatReadFloat32((r5 + 32092));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f5.d = MemoryInline::FlatReadFloat32((r4 + 25552));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f5.d = PpcFmulsInline(f5.d, f6.d);
    f6.d = PpcFmulsInline(f5.d, f0.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f6.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f6.d));
    SetCRFloatResident(cr, 0, f5.d, f0.d);
}

loc_805FBAA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805FBAB0;
    }
}

loc_805FBAAC:
{
    goto loc_805FBAB4;
}

loc_805FBAB0:
{
    f5.d = f0.d;
}

loc_805FBAB4:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f6.d));
    MemoryInline::FlatWriteFloat32((r3 + 4), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f6.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805FBAC4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805FBACC;
    }
}

loc_805FBAC8:
{
    goto loc_805FBAD0;
}

loc_805FBACC:
{
    f3.d = f0.d;
}

loc_805FBAD0:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_805FBAD4:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f3.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805FBAE4;
    }
}

loc_805FBADC:
{
    f0.d = f1.d;
    goto loc_805FBAE8;
}

loc_805FBAE4:
{
    f0.d = f2.d;
}

loc_805FBAE8:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_805FBAEC:
{
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805FBAF8;
    }
}

loc_805FBAF4:
{
    goto loc_805FBAFC;
}

loc_805FBAF8:
{
    f1.d = f2.d;
}

loc_805FBAFC:
{
    MemoryInline::FlatWriteFloat32((r3 + 16), f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return;
}

loc_805FBB04:
{
    SetCRFloatResident(cr, 0, f3.d, f4.d);
}

loc_805FBB08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805FBB14;
    }
}

loc_805FBB0C:
{
    f0.d = f3.d;
    goto loc_805FBB18;
}

loc_805FBB14:
{
    f0.d = f4.d;
}

loc_805FBB18:
{
    SetCRFloatResident(cr, 0, f3.d, f4.d);
}

loc_805FBB1C:
{
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805FBB28;
    }
}

loc_805FBB24:
{
    goto loc_805FBB2C;
}

loc_805FBB28:
{
    f3.d = f4.d;
}

loc_805FBB2C:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_805FBB30:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f3.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805FBB40;
    }
}

loc_805FBB38:
{
    f0.d = f1.d;
    goto loc_805FBB44;
}

loc_805FBB40:
{
    f0.d = f2.d;
}

loc_805FBB44:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_805FBB48:
{
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805FBB54;
    }
}

loc_805FBB50:
{
    goto loc_805FBB58;
}

loc_805FBB54:
{
    f1.d = f2.d;
}

loc_805FBB58:
{
    MemoryInline::FlatWriteFloat32((r3 + 16), f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x0000007F fpr_write=0x000000EB fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805FBA68 func_805FBA68 preserves=true fpr_mask=0x00000000
