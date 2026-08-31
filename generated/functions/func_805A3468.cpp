#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A3468(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A3468;

loc_805A3468:
{
    r0 = MemoryInline::FlatRead16((r3 + 820));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A3470:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_805A3474:
{
    r4 = MemoryInline::FlatRead32((r3 + 404));
    r0 = (r4 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A347C:
{
    MemoryInline::FlatWrite32((r3 + 404), r0);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_805A3484:
{
    r5 = 0x80890000u;
    r4 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 400));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 9028));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 9032));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 400), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805A34A4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_805A34A8:
{
    MemoryInline::FlatWriteFloat32((r3 + 400), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
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
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805A3468 func_805A3468 preserves=true fpr_mask=0x00000000
