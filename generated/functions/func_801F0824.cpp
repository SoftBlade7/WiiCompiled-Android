#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F0824(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F0824;

loc_801F0824:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F0830:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F0848;
    }
}

loc_801F0840:
{
    r3 = 10;
    goto loc_801F0890;
}

loc_801F0848:
{
    r3 = MemoryInline::FlatRead32((r3 + 6260));
    r6 = MemoryInline::FlatRead16(r31);
    ctx->lr = 0x801F0854u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F371Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F0858:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F088C;
    }
}

loc_801F085C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(21));
}

loc_801F0860:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F0884;
    }
}

loc_801F0864:
{
    r3 = MemoryInline::FlatRead32((r31 + 6260));
    // inline leaf 0x801F3EC8 (7 guest instruction(s))
    r0 = (r3 & 255);
    r3 = 0x80360000u;
    r0 = (r0 * 44);
    r3 = (r3 + -23936);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1912));
    // end of inlined leaf 0x801F3EC8
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 32), r3);
    MemoryInline::FlatWrite32((r31 + 6232), r3);
    r3 = 4096;
    goto loc_801F0890;
}

loc_801F0884:
{
    r3 = -1;
    goto loc_801F0890;
}

loc_801F088C:
{
    r3 = 0;
}

loc_801F0890:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F0824 func_801F0824 preserves=true fpr_mask=0x00000000
