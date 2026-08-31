#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A9A40(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A9A40;

loc_805A9A40:
{
    r0 = MemoryInline::FlatRead8(r3);
    r5 = 0x80890000u;
    r5 = (r5 + 8728);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A9A50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_805A9A54:
{
    r4 = MemoryInline::FlatRead32((r3 + 20));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f3.d = MemoryInline::FlatReadFloat32((r5 + 248));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_805A9A78:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A9A98;
    }
}

loc_805A9A7C:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 332));
    f1.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    goto loc_805A9ABC;
}

loc_805A9A98:
{
    f2.d = MemoryInline::FlatReadFloat32((r5 + 332));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_805A9AA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A9ABC;
    }
}

loc_805A9AA4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f1.d = PpcFmulsInline(f4.d, f2.d);
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
}

loc_805A9ABC:
{
    r4 = MemoryInline::FlatRead32((r3 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 532));
    f3.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805A9AE8:
{
    MemoryInline::FlatWriteFloat32((r3 + 16), f1.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_805A9AF4:
{
    r0 = 0;
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A9A40 func_805A9A40 preserves=true fpr_mask=0x00000000
