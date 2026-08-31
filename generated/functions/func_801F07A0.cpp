#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F07A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F07A0;

loc_801F07A0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F07AC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F07C4;
    }
}

loc_801F07BC:
{
    r3 = 10;
    goto loc_801F0810;
}

loc_801F07C4:
{
    r8 = r7;
    r3 = MemoryInline::FlatRead32((r3 + 6260));
    r7 = MemoryInline::FlatRead16(r31);
    ctx->lr = 0x801F07D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F3508u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F07D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F080C;
    }
}

loc_801F07DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(21));
}

loc_801F07E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F0804;
    }
}

loc_801F07E4:
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
    goto loc_801F0810;
}

loc_801F0804:
{
    r3 = -1;
    goto loc_801F0810;
}

loc_801F080C:
{
    r3 = 0;
}

loc_801F0810:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F07A0 func_801F07A0 preserves=true fpr_mask=0x00000000
