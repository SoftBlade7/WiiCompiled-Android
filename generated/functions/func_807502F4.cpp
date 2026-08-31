#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807502F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807502F4;

loc_807502F4:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10484));
    r0 = MemoryInline::FlatRead8((r4 + 140));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80750304:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80750338;
    }
}

loc_80750308:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 48), static_cast<uint8_t>(r0));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 124));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f3.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 120));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f2.d, f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_80750338:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 48), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807502F4 func_807502F4 preserves=true fpr_mask=0x00000000
