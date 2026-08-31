#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A2F88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807A2F88;

loc_807A2F88:
{
    r4 = MemoryInline::FlatRead32((r3 + 152));
    r0 = (r3 + 128);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_807A2F94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_807A2F98:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 128));
    r0 = (r3 + 68);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 132));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 136));
    MemoryInline::FlatWriteFloat32((r3 + 68), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 72), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 76), f0.d);
    MemoryInline::FlatWrite32((r3 + 152), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807A2F88 func_807A2F88 preserves=true fpr_mask=0x00000000
