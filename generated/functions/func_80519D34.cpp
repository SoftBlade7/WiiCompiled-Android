#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80519D34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80519D34;

loc_80519D34:
{
    MemoryInline::FlatWriteRam32((r1 + -480), r1);
    r1 = (r1 + -480);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 484), r0);
    MemoryInline::FlatWriteRam32((r1 + 476), r31);
    r31 = 0x808B0000u;
    r31 = (r31 + 11400);
    MemoryInline::FlatWriteRam32((r1 + 472), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 468), r29);
    r29 = r3;
}

loc_80519D5C:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    r3 = (r1 + 16);
    r4 = 0;
    r5 = 448;
    ctx->lr = 0x80519D70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r30 & 255);
    r0 = (r0 * 448);
    r4 = (r29 + r0);
    r0 = MemoryInline::FlatRead16((r4 + 24));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80519D84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80519D98;
    }
}

loc_80519D88:
{
    r3 = (r1 + 16);
    r4 = (r4 + 8);
    r5 = 448;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80519D98:
{
    r0 = MemoryInline::FlatRead16((r1 + 32));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80519DA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80519DAC;
    }
}

loc_80519DA4:
{
    r3 = (r30 & 255);
    goto loc_80519DBC;
}

loc_80519DAC:
{
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(30));
}

loc_80519DB4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80519D5C;
    }
}

loc_80519DB8:
{
    r3 = -1;
}

loc_80519DBC:
{
    r0 = MemoryInline::FlatRead32((r1 + 484));
    r31 = MemoryInline::FlatRead32((r1 + 476));
    r30 = MemoryInline::FlatRead32((r1 + 472));
    r29 = MemoryInline::FlatRead32((r1 + 468));
    ctx->lr = r0;
    r1 = (r1 + 480);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00000FB gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80519D34 func_80519D34 preserves=true fpr_mask=0x00000000
