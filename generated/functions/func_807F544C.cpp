#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807F544C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

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

    goto loc_807F544C;

loc_807F544C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r3 = r4;
    // inline leaf 0x80860ACC (9 guest instruction(s))
}

loc_inl0_0x80860ACC:
{
}

loc_inl0_0x80860AD0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_inl0_0x80860ADC;
    }
}

loc_inl0_0x80860AD4:
{
    r3 = 0;
    goto loc_inl0_cont_80860ACC;
}

loc_inl0_0x80860ADC:
{
    r4 = 0x808B0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + -2304);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
}

loc_inl0_cont_80860ACC:
{
    // end of inlined leaf 0x80860ACC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F5474:
{
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F55B0;
    }
}

loc_807F547C:
{
    r31 = 0x808B0000u;
    r3 = r29;
    r31 = (r31 + -23804);
    r5 = r30;
    r4 = (r31 + 172);
    ctx->lr = 0x807F5494u;
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
    InvokeDirectCpu<0x8063E0F0u>(ctx);
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
    r3 = r29;
    r5 = r30;
    r4 = (r31 + 187);
    ctx->lr = 0x807F54A4u;
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
    InvokeDirectCpu<0x8063E0F0u>(ctx);
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
    r4 = (r31 + 198);
    r3 = (r29 + 168);
    ctx->lr = 0x807F54B0u;
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
    InvokeDirectCpu<0x805E8368u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F54B4:
{
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F54C4;
    }
}

loc_807F54BC:
{
    r30 = 0;
    goto loc_807F5514;
}

loc_807F54C4:
{
    r31 = 0x80380000u;
    r31 = (r31 + 24952);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F5510;
    }
}

loc_807F54D0:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x807F54E0u;
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
    goto loc_807F54F8;
}

loc_807F54E4:
{
}

loc_807F54E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_807F54F4;
    }
}

loc_807F54EC:
{
    r0 = 1;
    goto loc_807F5504;
}

loc_807F54F4:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_807F54F8:
{
}

loc_807F54FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807F54E4;
    }
}

loc_807F5500:
{
    r0 = 0;
}

loc_807F5504:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F5508:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F5510;
    }
}

loc_807F550C:
{
    goto loc_807F5514;
}

loc_807F5510:
{
    r30 = 0;
}

loc_807F5514:
{
    r0 = MemoryInline::FlatRead8((r30 + 187));
    r4 = 0x808B0000u;
    r4 = (r4 + -23804);
    r3 = (r29 + 168);
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r30 + 187), static_cast<uint8_t>(r0));
    r4 = (r4 + 213);
    ctx->lr = 0x807F5538u;
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
    InvokeDirectCpu<0x805E8368u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F553C:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F554C;
    }
}

loc_807F5544:
{
    r31 = 0;
    goto loc_807F559C;
}

loc_807F554C:
{
    r30 = 0x80380000u;
    r30 = (r30 + 24952);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F5598;
    }
}

loc_807F5558:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x807F5568u;
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
    goto loc_807F5580;
}

loc_807F556C:
{
}

loc_807F5570:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_807F557C;
    }
}

loc_807F5574:
{
    r0 = 1;
    goto loc_807F558C;
}

loc_807F557C:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_807F5580:
{
}

loc_807F5584:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807F556C;
    }
}

loc_807F5588:
{
    r0 = 0;
}

loc_807F558C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F5590:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F5598;
    }
}

loc_807F5594:
{
    goto loc_807F559C;
}

loc_807F5598:
{
    r31 = 0;
}

loc_807F559C:
{
    r0 = MemoryInline::FlatRead8((r31 + 187));
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r31 + 187), static_cast<uint8_t>(r0));
    goto loc_807F56B8;
}

loc_807F55B0:
{
    r4 = 0x808B0000u;
    r3 = (r29 + 168);
    r4 = (r4 + -23804);
    r4 = (r4 + 224);
    ctx->lr = 0x807F55C4u;
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
    InvokeDirectCpu<0x805E8368u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F55C8:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F55D8;
    }
}

loc_807F55D0:
{
    r31 = 0;
    goto loc_807F5628;
}

loc_807F55D8:
{
    r30 = 0x80380000u;
    r30 = (r30 + 24952);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F5624;
    }
}

loc_807F55E4:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x807F55F4u;
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
    goto loc_807F560C;
}

loc_807F55F8:
{
}

loc_807F55FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_807F5608;
    }
}

loc_807F5600:
{
    r0 = 1;
    goto loc_807F5618;
}

loc_807F5608:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_807F560C:
{
}

loc_807F5610:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807F55F8;
    }
}

loc_807F5614:
{
    r0 = 0;
}

loc_807F5618:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F561C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F5624;
    }
}

loc_807F5620:
{
    goto loc_807F5628;
}

loc_807F5624:
{
    r31 = 0;
}

loc_807F5628:
{
    r0 = MemoryInline::FlatRead8((r31 + 187));
    r4 = 0x808B0000u;
    r4 = (r4 + -23804);
    r3 = (r29 + 168);
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r31 + 187), static_cast<uint8_t>(r0));
    r4 = (r4 + 239);
    ctx->lr = 0x807F5648u;
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
    InvokeDirectCpu<0x805E8368u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807F564C:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F565C;
    }
}

loc_807F5654:
{
    r31 = 0;
    goto loc_807F56AC;
}

loc_807F565C:
{
    r30 = 0x80380000u;
    r30 = (r30 + 24952);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F56A8;
    }
}

loc_807F5668:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x807F5678u;
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
    goto loc_807F5690;
}

loc_807F567C:
{
}

loc_807F5680:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_807F568C;
    }
}

loc_807F5684:
{
    r0 = 1;
    goto loc_807F569C;
}

loc_807F568C:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_807F5690:
{
}

loc_807F5694:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807F567C;
    }
}

loc_807F5698:
{
    r0 = 0;
}

loc_807F569C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807F56A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F56A8;
    }
}

loc_807F56A4:
{
    goto loc_807F56AC;
}

loc_807F56A8:
{
    r31 = 0;
}

loc_807F56AC:
{
    r0 = MemoryInline::FlatRead8((r31 + 187));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r31 + 187), static_cast<uint8_t>(r0));
}

loc_807F56B8:
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
// RECOMP_REGISTRATION base 0x807F544C func_807F544C preserves=true fpr_mask=0x00000000
