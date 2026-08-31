#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80230458(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80230458;

loc_80230458:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 0x802A0000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80230468:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r5 = (r5 + 12744);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r4;
    MemoryInline::FlatWrite32((r3 + 16), r5);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802304C0;
    }
}

loc_80230490:
{
    r4 = 0x80240000u;
    r3 = r29;
    r4 = (r4 + 32640);
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    r4 = (r1 + 24);
    r12 = MemoryInline::FlatRead32(r29);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x802304B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_802304B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802304C0;
    }
}

loc_802304BC:
{
    r30 = 1;
}

loc_802304C0:
{
}

loc_802304C4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_802304CC;
    }
}

loc_802304C8:
{
    goto loc_802304D0;
}

loc_802304CC:
{
    r29 = 0;
}

loc_802304D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_802304D4:
{
    r0 = 0;
    r3 = 5;
    MemoryInline::FlatWrite32(r31, r29);
    r30 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r3);
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r31 + 12), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80230524;
    }
}

loc_802304F4:
{
    r4 = 0x80240000u;
    r3 = r29;
    r4 = (r4 + 32712);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    r4 = (r1 + 20);
    r12 = MemoryInline::FlatRead32(r29);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x80230518u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8023051C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80230524;
    }
}

loc_80230520:
{
    r30 = 1;
}

loc_80230524:
{
}

loc_80230528:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80230530;
    }
}

loc_8023052C:
{
    goto loc_80230534;
}

loc_80230530:
{
    r29 = 0;
}

loc_80230534:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80230538:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80230548;
    }
}

loc_8023053C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_80230670;
}

loc_80230548:
{
    r30 = MemoryInline::FlatRead32(r31);
    r29 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80230554:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80230588;
    }
}

loc_80230558:
{
    r4 = 0x80240000u;
    r3 = r30;
    r4 = (r4 + 32688);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    r4 = (r1 + 16);
    r12 = MemoryInline::FlatRead32(r30);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x8023057Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80230580:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80230588;
    }
}

loc_80230584:
{
    r29 = 1;
}

loc_80230588:
{
}

loc_8023058C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80230594;
    }
}

loc_80230590:
{
    goto loc_80230598;
}

loc_80230594:
{
    r30 = 0;
}

loc_80230598:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8023059C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802305AC;
    }
}

loc_802305A0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_80230670;
}

loc_802305AC:
{
    r30 = MemoryInline::FlatRead32(r31);
    r29 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_802305B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802305EC;
    }
}

loc_802305BC:
{
    r4 = 0x80240000u;
    r3 = r30;
    r4 = (r4 + 32744);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r4 = (r1 + 12);
    r12 = MemoryInline::FlatRead32(r30);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x802305E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_802305E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802305EC;
    }
}

loc_802305E8:
{
    r29 = 1;
}

loc_802305EC:
{
}

loc_802305F0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_802305F8;
    }
}

loc_802305F4:
{
    goto loc_802305FC;
}

loc_802305F8:
{
    r30 = 0;
}

loc_802305FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80230600:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80230610;
    }
}

loc_80230604:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_80230670;
}

loc_80230610:
{
    r30 = MemoryInline::FlatRead32(r31);
    r29 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8023061C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80230650;
    }
}

loc_80230620:
{
    r4 = 0x80260000u;
    r3 = r30;
    r4 = (r4 + -31392);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r4 = (r1 + 8);
    r12 = MemoryInline::FlatRead32(r30);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x80230644u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80230648:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80230650;
    }
}

loc_8023064C:
{
    r29 = 1;
}

loc_80230650:
{
}

loc_80230654:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8023065C;
    }
}

loc_80230658:
{
    goto loc_80230660;
}

loc_8023065C:
{
    r30 = 0;
}

loc_80230660:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80230664:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80230670;
    }
}

loc_80230668:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 4), r0);
}

loc_80230670:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80230458 func_80230458 preserves=true fpr_mask=0x00000000
