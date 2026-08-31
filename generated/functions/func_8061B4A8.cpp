#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8061B4A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8061B4A8;

loc_8061B4A8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
}

loc_8061B4D0:
{
    r0 = (r30 & 255);
    r3 = MemoryInline::FlatRead32((r31 + -10484));
    r0 = (r0 * 2336);
    r3 = (r3 + r0);
    r3 = (r3 + 5920);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8061B4F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r30 & 255);
}

loc_8061B4F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8061B514;
    }
}

loc_8061B4F8:
{
}

loc_8061B4FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8061B51C;
    }
}

loc_8061B500:
{
}

loc_8061B504:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8061B524;
    }
}

loc_8061B508:
{
}

loc_8061B50C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8061B52C;
    }
}

loc_8061B510:
{
    goto loc_8061B530;
}

loc_8061B514:
{
    r29 = 272;
    goto loc_8061B530;
}

loc_8061B51C:
{
    r29 = 528;
    goto loc_8061B530;
}

loc_8061B524:
{
    r29 = 784;
    goto loc_8061B530;
}

loc_8061B52C:
{
    r29 = 1040;
}

loc_8061B530:
{
}

loc_8061B534:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8061B550;
    }
}

loc_8061B53C:
{
}

loc_8061B540:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8061B558;
    }
}

loc_8061B544:
{
}

loc_8061B548:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_8061B560;
    }
}

loc_8061B54C:
{
    goto loc_8061B564;
}

loc_8061B550:
{
    r0 = 1;
    goto loc_8061B564;
}

loc_8061B558:
{
    r0 = 2;
    goto loc_8061B564;
}

loc_8061B560:
{
    r0 = 3;
}

loc_8061B564:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8061B568:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B578;
    }
}

loc_8061B56C:
{
    r0 = (r0 | r29);
    MemoryInline::FlatWrite32((r28 + 4), r0);
    goto loc_8061B584;
}

loc_8061B578:
{
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
}

loc_8061B580:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8061B4D0;
    }
}

loc_8061B584:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8061B4A8 func_8061B4A8 preserves=true fpr_mask=0x00000000
