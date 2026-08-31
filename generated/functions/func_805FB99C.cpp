#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805FB99C(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805FB99C;

loc_805FB99C:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FB9A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FBA44;
    }
}

loc_805FB9A8:
{
    r5 = 0x80890000u;
    r6 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r5 + 25548));
    r5 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r6 + 32092));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 25552));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f3.d = PpcFmulsInline(f0.d, f3.d);
    f5.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f3.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805FB9EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805FB9F8;
    }
}

loc_805FB9F0:
{
    f1.d = f2.d;
    goto loc_805FB9FC;
}

loc_805FB9F8:
{
    f1.d = f0.d;
}

loc_805FB9FC:
{
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805FBA00:
{
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805FBA0C;
    }
}

loc_805FBA08:
{
    goto loc_805FBA10;
}

loc_805FBA0C:
{
    f2.d = f0.d;
}

loc_805FBA10:
{
    SetCRFloatResident(cr, 0, f5.d, f4.d);
}

loc_805FBA14:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805FBA24;
    }
}

loc_805FBA1C:
{
    f0.d = f5.d;
    goto loc_805FBA28;
}

loc_805FBA24:
{
    f0.d = f4.d;
}

loc_805FBA28:
{
    SetCRFloatResident(cr, 0, f5.d, f4.d);
}

loc_805FBA2C:
{
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805FBA38;
    }
}

loc_805FBA34:
{
    goto loc_805FBA3C;
}

loc_805FBA38:
{
    f5.d = f4.d;
}

loc_805FBA3C:
{
    MemoryInline::FlatWriteFloat32((r3 + 16), f5.d);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

loc_805FBA44:
{
    f3.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    MemoryInline::FlatWriteFloat32((r3 + 4), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000061 gpr_return=0x00000000 fpr_read=0x00000037 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805FB99C func_805FB99C preserves=true fpr_mask=0x00000000
