#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F05F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F05F4;

loc_801F05F4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F0600:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F0620;
    }
}

loc_801F0618:
{
    r3 = 10;
    goto loc_801F0704;
}

loc_801F0620:
{
    r0 = MemoryInline::FlatRead16((r3 + 6240));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F0628:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F066C;
    }
}

loc_801F062C:
{
    r3 = MemoryInline::FlatRead32((r3 + 6260));
    ctx->lr = 0x801F0634u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F2E5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F0638:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F066C;
    }
}

loc_801F063C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(21));
}

loc_801F0640:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F0664;
    }
}

loc_801F0644:
{
    r3 = MemoryInline::FlatRead32((r30 + 6260));
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
    MemoryInline::FlatWrite32((r30 + 6232), r3);
    r3 = 4096;
    goto loc_801F0704;
}

loc_801F0664:
{
    r3 = -1;
    goto loc_801F0704;
}

loc_801F066C:
{
    r3 = MemoryInline::FlatRead32((r30 + 6260));
    r4 = r31;
    ctx->lr = 0x801F0678u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F31B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801F067C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801F06B0;
    }
}

loc_801F0680:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(21));
}

loc_801F0684:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F06A8;
    }
}

loc_801F0688:
{
    r3 = MemoryInline::FlatRead32((r30 + 6260));
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
    MemoryInline::FlatWrite32((r30 + 6232), r3);
    r3 = 4096;
    goto loc_801F0704;
}

loc_801F06A8:
{
    r3 = -1;
    goto loc_801F0704;
}

loc_801F06B0:
{
    r0 = MemoryInline::FlatRead16((r30 + 6240));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F06B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F0700;
    }
}

loc_801F06BC:
{
    r3 = MemoryInline::FlatRead32((r30 + 6260));
    r4 = 1;
    ctx->lr = 0x801F06C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F3034u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F06CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F0700;
    }
}

loc_801F06D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(21));
}

loc_801F06D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F06F8;
    }
}

loc_801F06D8:
{
    r3 = MemoryInline::FlatRead32((r30 + 6260));
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
    MemoryInline::FlatWrite32((r30 + 6232), r3);
    r3 = 4096;
    goto loc_801F0704;
}

loc_801F06F8:
{
    r3 = -1;
    goto loc_801F0704;
}

loc_801F0700:
{
    r3 = 0;
}

loc_801F0704:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F05F4 func_801F05F4 preserves=true fpr_mask=0x00000000
