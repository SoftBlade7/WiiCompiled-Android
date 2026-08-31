#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A1750(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A1750;

loc_805A1750:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_0);
    r3 = MemoryInline::FlatRead8((r5 + 5));
    r0 = MemoryInline::FlatRead8((r5 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_805A1768:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_805A176C:
{
    r0 = MemoryInline::FlatRead8((r5 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A1774:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A179C;
    }
}

loc_805A1778:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 16), static_cast<uint8_t>(r0));
    r3 = 0x80890000u;
    MemoryInline::FlatWrite8((r5 + 17), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8688));
    r0 = MemoryInline::FlatRead8((r5 + 5));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r5 + 8), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_805A179C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r5 + 16), static_cast<uint8_t>(r0));
    r3 = 0x80890000u;
    r4 = MemoryInline::FlatRead32((r5 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8692));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r5 + 8), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805A17C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A17D4;
    }
}

loc_805A17C8:
{
    MemoryInline::FlatWriteFloat32((r5 + 8), f0.d);
    r0 = 1;
    goto loc_805A17D8;
}

loc_805A17D4:
{
    r0 = 0;
}

loc_805A17D8:
{
    MemoryInline::FlatWrite8((r5 + 17), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A1750 func_805A1750 preserves=true fpr_mask=0x00000000
