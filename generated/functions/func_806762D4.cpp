#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806762D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806762D4;

loc_806762D4:
{
    MemoryInline::FlatWriteRam32((r1 + -480), r1);
    r1 = (r1 + -480);
    r0 = ctx->lr;
    r4 = (r4 + -4);
    MemoryInline::FlatWriteRam32((r1 + 484), r0);
    r0 = 56;
    MemoryInline::FlatWriteRam32((r1 + 476), r31);
    MemoryInline::FlatWriteRam32((r1 + 472), r30);
    MemoryInline::FlatWriteRam32((r1 + 468), r29);
    r29 = r6;
    MemoryInline::FlatWriteRam32((r1 + 464), r28);
    r28 = r5;
    r5 = (r1 + 4);
    ctr = r0;
}

loc_80676308:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80676308;
    }
}

loc_8067631C:
{
    r0 = MemoryInline::FlatRead32((r1 + 236));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    r31 = 0;
}

loc_80676330:
{
    r30 = (r3 + 131072);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80676358;
    }
}

loc_80676338:
{
    r0 = MemoryInline::FlatRead32((r1 + 240));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80676340:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80676358;
    }
}

loc_80676344:
{
    r3 = (r1 + 244);
    ctx->lr = 0x8067634Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800CB8B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80676350:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80676358;
    }
}

loc_80676354:
{
    r31 = 1;
}

loc_80676358:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8067635C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806763C0;
    }
}

loc_80676360:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r31 = 0;
}

loc_8067636C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80676390;
    }
}

loc_80676370:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80676378:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80676390;
    }
}

loc_8067637C:
{
    r3 = (r1 + 20);
    ctx->lr = 0x80676384u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800CB8B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80676388:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80676390;
    }
}

loc_8067638C:
{
    r31 = 1;
}

loc_80676390:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80676394:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806763C0;
    }
}

loc_80676398:
{
    MemoryInline::FlatWriteRam8((r1 + 428), static_cast<uint8_t>(r29));
    r5 = r28;
    r4 = (r1 + 8);
    r6 = 0;
    MemoryInline::FlatWriteRam8((r1 + 204), static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead32((r30 + 20476));
    r3 = (r3 + 131072);
    r3 = (r3 + 13064);
    ctx->lr = 0x806763BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80548C58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806763C4;
}

loc_806763C0:
{
    r3 = 0;
}

loc_806763C4:
{
    r0 = MemoryInline::FlatRead32((r1 + 484));
    r31 = MemoryInline::FlatRead32((r1 + 476));
    r30 = MemoryInline::FlatRead32((r1 + 472));
    r29 = MemoryInline::FlatRead32((r1 + 468));
    r28 = MemoryInline::FlatRead32((r1 + 464));
    ctx->lr = r0;
    r1 = (r1 + 480);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80007FB gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x806762D4 func_806762D4 preserves=true fpr_mask=0x00000000
