#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E94D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805E94D8;

loc_805E94D8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805E94E4:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x80380000u;
    r30 = (r30 + 24960);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E9550;
    }
}

loc_805E9508:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x805E951Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805E9534;
}

loc_805E9520:
{
}

loc_805E9524:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_805E9530;
    }
}

loc_805E9528:
{
    r0 = 1;
    goto loc_805E9540;
}

loc_805E9530:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805E9534:
{
}

loc_805E9538:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805E9520;
    }
}

loc_805E953C:
{
    r0 = 0;
}

loc_805E9540:
{
}

loc_805E9544:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805E9550;
    }
}

loc_805E9548:
{
    r0 = r29;
    goto loc_805E9554;
}

loc_805E9550:
{
    r0 = 0;
}

loc_805E9554:
{
}

loc_805E9558:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805E95BC;
    }
}

loc_805E955C:
{
    r0 = 8;
    r3 = (r29 + 205);
    ctr = r0;
}

loc_805E9568:
{
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805E957C;
    }
}

loc_805E9574:
{
    r0 = 0;
    goto loc_805E9598;
}

loc_805E957C:
{
}

loc_805E9580:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(76))) {
        goto loc_805E958C;
    }
}

loc_805E9584:
{
    r0 = 1;
    goto loc_805E9598;
}

loc_805E958C:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805E9568;
    }
}

loc_805E9594:
{
    r0 = 0;
}

loc_805E9598:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805E959C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E95AC;
    }
}

loc_805E95A0:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 8), r0);
}

loc_805E95AC:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_805E96EC;
}

loc_805E95BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805E95C0:
{
    r30 = 0x80380000u;
    r30 = (r30 + 24952);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E9614;
    }
}

loc_805E95CC:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x805E95E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805E95F8;
}

loc_805E95E4:
{
}

loc_805E95E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_805E95F4;
    }
}

loc_805E95EC:
{
    r0 = 1;
    goto loc_805E9604;
}

loc_805E95F4:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805E95F8:
{
}

loc_805E95FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805E95E4;
    }
}

loc_805E9600:
{
    r0 = 0;
}

loc_805E9604:
{
}

loc_805E9608:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805E9614;
    }
}

loc_805E960C:
{
    r0 = r29;
    goto loc_805E9618;
}

loc_805E9614:
{
    r0 = 0;
}

loc_805E9618:
{
}

loc_805E961C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805E9680;
    }
}

loc_805E9620:
{
    r0 = 8;
    r3 = (r29 + 205);
    ctr = r0;
}

loc_805E962C:
{
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805E9640;
    }
}

loc_805E9638:
{
    r0 = 0;
    goto loc_805E965C;
}

loc_805E9640:
{
}

loc_805E9644:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(77))) {
        goto loc_805E9650;
    }
}

loc_805E9648:
{
    r0 = 1;
    goto loc_805E965C;
}

loc_805E9650:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805E962C;
    }
}

loc_805E9658:
{
    r0 = 0;
}

loc_805E965C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805E9660:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E9670;
    }
}

loc_805E9664:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 12), r0);
}

loc_805E9670:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_805E96EC;
}

loc_805E9680:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805E9684:
{
    r30 = 0x80380000u;
    r30 = (r30 + 24968);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E96D4;
    }
}

loc_805E9690:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x805E96A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805E96BC;
}

loc_805E96A8:
{
}

loc_805E96AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_805E96B8;
    }
}

loc_805E96B0:
{
    r0 = 1;
    goto loc_805E96C8;
}

loc_805E96B8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805E96BC:
{
}

loc_805E96C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805E96A8;
    }
}

loc_805E96C4:
{
    r0 = 0;
}

loc_805E96C8:
{
}

loc_805E96CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805E96D4;
    }
}

loc_805E96D0:
{
    goto loc_805E96D8;
}

loc_805E96D4:
{
    r29 = 0;
}

loc_805E96D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805E96DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E96EC;
    }
}

loc_805E96E0:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 4), r0);
}

loc_805E96EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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
// RECOMP_REGISTRATION base 0x805E94D8 func_805E94D8 preserves=true fpr_mask=0x00000000
