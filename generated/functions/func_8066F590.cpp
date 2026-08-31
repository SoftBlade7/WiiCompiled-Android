#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066F590(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_subfic_ra_0 = 0;
    uint32_t r1_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8066F590;

loc_8066F590:
{
    r11 = (r1 & 31);
    r12 = r1;
    r11_subfic_ra_0 = r11;
    r11 = (-1056 - r11_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1056) >= static_cast<uint32_t>(r11_subfic_ra_0) ? 1u : 0u) << 29);
    r1_addr_0 = (r1 + r11);
    MemoryInline::FlatWrite32(r1_addr_0, r1);
    r1 = r1_addr_0;
    r0 = ctx->lr;
    r4 = 0x808B0000u;
    r5 = 448;
    MemoryInline::FlatWriteRam32((r12 + 4), r0);
    r4 = (r4 + 11400);
    MemoryInline::FlatWriteRam32((r12 + -20), r27);
    MemoryInline::FlatWriteRam32((r12 + -16), r28);
    MemoryInline::FlatWriteRam32((r12 + -12), r29);
    MemoryInline::FlatWriteRam32((r12 + -8), r30);
    MemoryInline::FlatWriteRam32((r12 + -4), r31);
    r30 = r3;
    r31 = (r3 + 16896);
    r3 = (r1 + 560);
    MemoryInline::FlatWriteRam32((r1 + 552), r4);
    r4 = 0;
    ctx->lr = 0x8066F5D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r30 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066F5D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066F620;
    }
}

loc_8066F5DC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 28), r0);
    r3 = MemoryInline::FlatRead32((r30 + 30092));
    r12 = MemoryInline::FlatRead32((r3 + 24));
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8066F5F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066F5FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066F60C;
    }
}

loc_8066F600:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 32), static_cast<uint8_t>(r0));
    goto loc_8066F620;
}

loc_8066F60C:
{
    r3 = MemoryInline::FlatRead32((r30 + 30092));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r30 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80233184u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_8066F624;
}

loc_8066F620:
{
    r3 = 0;
}

loc_8066F624:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066F628:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066F63C;
    }
}

loc_8066F62C:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r30 + 30076), r3);
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_8066F868;
}

loc_8066F63C:
{
    r4 = 0x808B0000u;
    r3 = (r1 + 104);
    r4 = (r4 + 11400);
    MemoryInline::FlatWriteRam32((r1 + 96), r4);
    r4 = 0;
    r5 = 448;
    ctx->lr = 0x8066F658u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066F668:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066F688;
    }
}

loc_8066F66C:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r4 * r0);
    r3 = (r5 + r0);
    r29 = (r3 + 56);
    goto loc_8066F68C;
}

loc_8066F688:
{
    r29 = 0;
}

loc_8066F68C:
{
    r28 = 0;
}

loc_8066F690:
{
    r0 = (r28 & 65535);
    r3 = (r1 + 96);
    r0 = (r0 * 448);
    r4 = (r29 + r0);
    r4 = (r4 + 22992);
    ctx->lr = 0x8066F6A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805196B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066F6AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066F6E0;
    }
}

loc_8066F6B0:
{
    r3 = (r1 + 40);
    r4 = (r1 + 104);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    r4 = (r1 + 40);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8066F6D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8066F6E0;
    }
}

loc_8066F6D8:
{
    r0 = 1;
    goto loc_8066F6F0;
}

loc_8066F6E0:
{
    r28 = (r28 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(30));
}

loc_8066F6E8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066F690;
    }
}

loc_8066F6EC:
{
    r0 = 0;
}

loc_8066F6F0:
{
}

loc_8066F6F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8066F730;
    }
}

loc_8066F6F8:
{
    r29 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r1 + 206));
    r3 = MemoryInline::FlatRead32((r29 + 8464));
    ctx->lr = 0x8066F708u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8066375Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_8066F70C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8066F728;
    }
}

loc_8066F710:
{
    r0 = MemoryInline::FlatRead8((r1 + 206));
    r3 = MemoryInline::FlatRead32((r29 + 8464));
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    r29 = (r3 + 516);
    goto loc_8066F734;
}

loc_8066F728:
{
    r29 = 0;
    goto loc_8066F734;
}

loc_8066F730:
{
    r29 = 0;
}

loc_8066F734:
{
}

loc_8066F738:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8066F860;
    }
}

loc_8066F73C:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066F74C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066F76C;
    }
}

loc_8066F750:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r4 * r0);
    r3 = (r5 + r0);
    r27 = (r3 + 56);
    goto loc_8066F770;
}

loc_8066F76C:
{
    r27 = 0;
}

loc_8066F770:
{
    r28 = 0;
}

loc_8066F774:
{
    r0 = (r28 & 65535);
    r3 = (r1 + 552);
    r0 = (r0 * 448);
    r4 = (r27 + r0);
    r4 = (r4 + 22992);
    ctx->lr = 0x8066F78Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805196B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066F790:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066F7C4;
    }
}

loc_8066F794:
{
    r3 = (r1 + 32);
    r4 = (r1 + 560);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    r4 = (r1 + 32);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8066F7B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8066F7C4;
    }
}

loc_8066F7BC:
{
    r0 = 1;
    goto loc_8066F7D4;
}

loc_8066F7C4:
{
    r28 = (r28 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(30));
}

loc_8066F7CC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066F774;
    }
}

loc_8066F7D0:
{
    r0 = 0;
}

loc_8066F7D4:
{
}

loc_8066F7D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8066F860;
    }
}

loc_8066F7DC:
{
    r0 = MemoryInline::FlatRead16((r1 + 576));
    r3 = (r0 & 1);
}

loc_8066F7E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8066F7F0;
    }
}

loc_8066F7E8:
{
    r0 = 0;
    goto loc_8066F804;
}

loc_8066F7F0:
{
    r0 = (r0 & 2);
}

loc_8066F7F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8066F800;
    }
}

loc_8066F7F8:
{
    r0 = 1;
    goto loc_8066F804;
}

loc_8066F800:
{
    r0 = 2;
}

loc_8066F804:
{
}

loc_8066F808:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8066F860;
    }
}

loc_8066F80C:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 0x80380000u;
    r5 = MemoryInline::FlatRead32((r1 + 568));
    r6 = MemoryInline::FlatRead32((r1 + 572));
    r4 = MemoryInline::FlatRead8((r1 + 663));
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    MemoryInline::FlatWriteRam32((r1 + 68), r6);
    MemoryInline::FlatWriteRam32((r1 + 64), r5);
    // inline leaf 0x8000B2E0 (10 guest instruction(s))
}

loc_inl0_0x8000B2E0:
{
    r0 = (r4 + -65);
    r3 = 1380777984;
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
}

loc_inl0_0x8000B2F0:
{
    r3 = (r3 + 17232);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8000B2F8:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r3 = (r3 + 1380777984);
    r3 = (r3 + 17152);
    goto loc_inl0_cont_8000B2E0;
}

loc_inl0_return:
{
}

loc_inl0_cont_8000B2E0:
{
    // end of inlined leaf 0x8000B2E0
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
    r3 = (r1 + 64);
    ctx->lr = 0x8066F844u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801E7588u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066F848:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066F860;
    }
}

loc_8066F84C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = 6;
    MemoryInline::FlatWrite32((r30 + 30076), r3);
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_8066F868;
}

loc_8066F860:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 20), r0);
}

loc_8066F868:
{
    r0 = MemoryInline::FlatRead8((r30 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066F870:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066F8A4;
    }
}

loc_8066F874:
{
    r3 = MemoryInline::FlatRead32((r30 + 30092));
    r12 = MemoryInline::FlatRead32((r3 + 24));
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8066F888u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066F88C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066F89C;
    }
}

loc_8066F890:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 32), static_cast<uint8_t>(r0));
    goto loc_8066F8A4;
}

loc_8066F89C:
{
    r3 = MemoryInline::FlatRead32((r30 + 30092));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80233184u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_8066F8A4:
{
    r10 = MemoryInline::FlatRead32(r1);
    r27 = MemoryInline::FlatRead32((r10 + -20));
    r28 = MemoryInline::FlatRead32((r10 + -16));
    r29 = MemoryInline::FlatRead32((r10 + -12));
    r30 = MemoryInline::FlatRead32((r10 + -8));
    r31 = MemoryInline::FlatRead32((r10 + -4));
    r0 = MemoryInline::FlatRead32((r10 + 4));
    ctx->lr = r0;
    r1 = r10;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8066F590 func_8066F590 preserves=true fpr_mask=0x00000000
