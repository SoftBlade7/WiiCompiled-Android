#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808672F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_808672F4;

loc_808672F4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead16((r3 + 36));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead8((r3 + 38));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80867314:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80867320;
    }
}

loc_80867318:
{
    r3 = -1;
    goto loc_80867390;
}

loc_80867320:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r31 + 39));
    r3 = MemoryInline::FlatRead32((r3 + 18232));
    ctx->lr = 0x80867330u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80866FC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80867334:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80867340;
    }
}

loc_80867338:
{
    r3 = -1;
    goto loc_80867390;
}

loc_80867340:
{
    r0 = MemoryInline::FlatRead8((r31 + 38));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80867348:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80867354;
    }
}

loc_8086734C:
{
    r3 = MemoryInline::FlatRead32((r31 + 24));
    goto loc_80867390;
}

loc_80867354:
{
    r5 = 0;
    r4 = 1;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80867364:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8086738C;
    }
}

loc_80867368:
{
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r3 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    r0 = (r3 & ~r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80867384;
    }
}

loc_80867378:
{
    r0 = MemoryInline::FlatRead32((r31 + 24));
    r3 = (r0 + r5);
    goto loc_80867390;
}

loc_80867384:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80867368;
    }
}

loc_8086738C:
{
    r3 = -1;
}

loc_80867390:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000003B gpr_write=0x80000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808672F4 func_808672F4 preserves=true fpr_mask=0x00000000
