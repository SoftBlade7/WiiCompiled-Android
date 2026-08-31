#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AF908(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AF908;

loc_801AF908:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0x80000000u;
    r4 = MemoryInline::FlatRead32((r13 + -25156));
    r0 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r29));
    r31 = r3;
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AF99C;
    }
}

loc_801AF944:
{
    r3 = r29;
    ctx->lr = 0x801AF94Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B3808u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 536870912);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AF950:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AF99C;
    }
}

loc_801AF954:
{
    r0 = MemoryInline::FlatRead32((r13 + -28904));
}

loc_801AF95C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_801AF96C;
    }
}

loc_801AF960:
{
}

loc_801AF964:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(2))) {
        goto loc_801AF96C;
    }
}

loc_801AF968:
{
    r30 = 0;
}

loc_801AF96C:
{
    r3 = 0x80000000u;
    r0 = MemoryInline::FlatRead8((r3 + 12515));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AF978:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AF980;
    }
}

loc_801AF97C:
{
    r30 = 0;
}

loc_801AF980:
{
    r4 = MemoryInline::FlatRead32((r13 + -28908));
    r0 = (r30 & 3);
    r3 = r29;
    r4 = (r4 | 4194304);
    r4 = (r4 | r0);
    // inline leaf 0x801B30C8 (5 guest instruction(s))
    r3 = (r3 * 12);
    r0 = -855638016;
    r3 = (r0 + r3);
    MemoryInline::FlatWrite32((r3 + 25600), r4);
    // end of inlined leaf 0x801B30C8
    // inline leaf 0x801B30DC (4 guest instruction(s))
    r0 = 0x80000000u;
    r3 = -855638016;
    MemoryInline::FlatWrite32((r3 + 25656), r0);
    // end of inlined leaf 0x801B30DC
}

loc_801AF99C:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFE027FB gpr_write=0xFFE00FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801AF908 func_801AF908 preserves=true fpr_mask=0x00000000
