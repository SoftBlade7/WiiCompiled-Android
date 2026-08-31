#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A03AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    int32_t r4_ea_0 = 0;
    int32_t r4_ea_1 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801A03AC;

loc_801A03AC:
{
    // mtspr 272 (privileged/OS register) @ 0x801A03AC
    PPC_WriteSpr(272, r4);
    r4_ea_0 = 192;
    r4 = MemoryInline::FlatRead32(r4_ea_0);
    MemoryInline::FlatWrite32((r4 + 12), r3);
    // mfspr 272 unsupported @ 0x801A03B8
    r3 = PPC_ReadSpr(272);
    MemoryInline::FlatWrite32((r4 + 16), r3);
    MemoryInline::FlatWrite32((r4 + 20), r5);
    r3 = MemoryInline::FlatRead16((r4 + 418));
    r3 = (r3 | 2);
    MemoryInline::FlatWrite16((r4 + 418), static_cast<uint16_t>(r3));
    r3 = cr;
    MemoryInline::FlatWrite32((r4 + 128), r3);
    r3 = ctx->lr;
    MemoryInline::FlatWrite32((r4 + 132), r3);
    r3 = ctr;
    MemoryInline::FlatWrite32((r4 + 136), r3);
    r3 = xer;
    MemoryInline::FlatWrite32((r4 + 140), r3);
    r3 = ctx->srr0;
    MemoryInline::FlatWrite32((r4 + 408), r3);
    r3 = ctx->srr1;
    MemoryInline::FlatWrite32((r4 + 412), r3);
    r5 = r3;
    // nop
    r3 = ctx->msr;
    r3 = (r3 | 48);
    ctx->srr1 = r3;
    r3 = 0;
    r4_ea_1 = 212;
    r4 = MemoryInline::FlatRead32(r4_ea_1);
    r5 = (r5 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801A0420:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A0434;
    }
}

loc_801A0424:
{
    r5 = 0x801A0000u;
    r5 = (r5 + 1096);
    ctx->srr0 = r5;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801A0434:
{
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & 1020);
    r5 = MemoryInline::FlatRead32((r5 + 12288));
    ctx->srr0 = r5;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000038 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A03AC func_801A03AC preserves=true fpr_mask=0x00000000
