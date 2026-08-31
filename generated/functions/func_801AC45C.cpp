#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AC45C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AC45C;

loc_801AC45C:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    r4 = r3;
    r5 = 32;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    MemoryInline::FlatWriteRam32((r1 + 156), r31);
    MemoryInline::FlatWriteRam32((r1 + 152), r30);
    r30 = 0x80350000u;
    r3 = (r30 + -32416);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = (r30 + -32416);
    r3 = 0x802A0000u;
    r6 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r3 + -14176);
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r4 = (r1 + 8);
    r5 = 2;
    r6 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r6 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r31 + 16));
    r6 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r31 + 20));
    r6 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r31 + 24));
    r6 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r31 + 28));
    r6 = (r6 + r0);
    MemoryInline::FlatWriteRam32((r30 + -32416), r6);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8019C800u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801AC4D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AC51C;
    }
}

loc_801AC4DC:
{
    r4 = r31;
    r3 = (r1 + 8);
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8019B884u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(32));
}

loc_801AC4F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AC504;
    }
}

loc_801AC4F4:
{
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8019CA80u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    goto loc_801AC528;
}

loc_801AC504:
{
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8019CA80u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801AC510:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AC524;
    }
}

loc_801AC514:
{
    r3 = 0;
    goto loc_801AC528;
}

loc_801AC51C:
{
    r3 = 0;
    goto loc_801AC528;
}

loc_801AC524:
{
    r3 = 1;
}

loc_801AC528:
{
    r0 = MemoryInline::FlatRead32((r1 + 164));
    r31 = MemoryInline::FlatRead32((r1 + 156));
    r30 = MemoryInline::FlatRead32((r1 + 152));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000007A gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801AC45C func_801AC45C preserves=true fpr_mask=0x00000000
