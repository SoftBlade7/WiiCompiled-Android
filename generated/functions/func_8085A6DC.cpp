#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80631C68_statefree(uint32_t, uint32_t, uint32_t);

extern "C" void func_8085A6DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8085A6DC;

loc_8085A6DC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80531CE4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    ctx->lr = 0x8085A6F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80715FF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r4);
    r7 = MemoryInline::FlatRead32(r3);
}

loc_8085A708:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(31))) {
        goto loc_8085A730;
    }
}

loc_8085A70C:
{
}

loc_8085A710:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(47))) {
        goto loc_8085A730;
    }
}

loc_8085A714:
{
}

loc_8085A718:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(30))) {
        goto loc_8085A738;
    }
}

loc_8085A71C:
{
}

loc_8085A720:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(46))) {
        goto loc_8085A738;
    }
}

loc_8085A724:
{
}

loc_8085A728:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(48))) {
        goto loc_8085A740;
    }
}

loc_8085A72C:
{
    goto loc_8085A748;
}

loc_8085A730:
{
    r31 = 31;
    goto loc_8085A74C;
}

loc_8085A738:
{
    r31 = 30;
    goto loc_8085A74C;
}

loc_8085A740:
{
    r31 = 48;
    goto loc_8085A74C;
}

loc_8085A748:
{
    r31 = r7;
}

loc_8085A74C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r6 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_8085A75C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8085A774;
    }
}

loc_8085A760:
{
}

loc_8085A764:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_8085A788;
    }
}

loc_8085A768:
{
}

loc_8085A76C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_8085A7A4;
    }
}

loc_8085A770:
{
    goto loc_8085A7DC;
}

loc_8085A774:
{
    r5 = MemoryInline::FlatRead8((r3 + 2956));
    r0 = (r5 + -3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    goto loc_8085A7E0;
}

loc_8085A788:
{
    r8 = MemoryInline::FlatRead32((r4 + 152));
    r5 = MemoryInline::FlatRead32((r8 + 96));
    r0 = MemoryInline::FlatRead32((r8 + 100));
    r0 = (r0 - r5);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    goto loc_8085A7E0;
}

loc_8085A7A4:
{
    r8 = MemoryInline::FlatRead32((r4 + 152));
    r5 = MemoryInline::FlatRead32((r8 + 100));
    r0 = MemoryInline::FlatRead32((r8 + 104));
}

loc_8085A7B4:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_8085A7C0;
    }
}

loc_8085A7B8:
{
    r0 = 1;
    goto loc_8085A7E0;
}

loc_8085A7C0:
{
    r0 = MemoryInline::FlatRead32((r8 + 108));
}

loc_8085A7C8:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_8085A7D4;
    }
}

loc_8085A7CC:
{
    r0 = 1;
    goto loc_8085A7E0;
}

loc_8085A7D4:
{
    r0 = 0;
    goto loc_8085A7E0;
}

loc_8085A7DC:
{
    r0 = 0;
}

loc_8085A7E0:
{
}

loc_8085A7E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8085ADFC;
    }
}

loc_8085A7E8:
{
    r0 = (r7 + -30);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
}

loc_8085A7F0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8085ADE8;
    }
}

loc_8085A7F4:
{
    r5 = 0x808E0000u;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r5 = (r5 + -22444);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8085A80Cu:
        goto loc_8085A80C;
        break;
    case 0x8085ADE8u:
        goto loc_8085ADE8;
        break;
    case 0x8085A9B0u:
        goto loc_8085A9B0;
        break;
    case 0x8085AC54u:
        goto loc_8085AC54;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8085A80C:
{
    r0 = 3;
    r5 = (r3 + 40);
    r6 = (r3 + 3096);
    r9 = 0;
    r10 = 0;
    ctr = r0;
}

loc_8085A824:
{
    r0 = (r10 & 255);
    r8 = (r0 * 240);
    r4 = (r5 + r8);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085A838:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085A854;
    }
}

loc_8085A83C:
{
    r4 = (r6 + r8);
    r0 = MemoryInline::FlatRead8((r4 + 224));
}

loc_8085A848:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_8085A854;
    }
}

loc_8085A84C:
{
    r9 = 1;
    goto loc_8085A8F8;
}

loc_8085A854:
{
    r10 = (r10 + 1);
    r0 = (r10 & 255);
    r8 = (r0 * 240);
    r4 = (r5 + r8);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085A86C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085A888;
    }
}

loc_8085A870:
{
    r4 = (r6 + r8);
    r0 = MemoryInline::FlatRead8((r4 + 224));
}

loc_8085A87C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_8085A888;
    }
}

loc_8085A880:
{
    r9 = 1;
    goto loc_8085A8F8;
}

loc_8085A888:
{
    r10 = (r10 + 1);
    r0 = (r10 & 255);
    r8 = (r0 * 240);
    r4 = (r5 + r8);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085A8A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085A8BC;
    }
}

loc_8085A8A4:
{
    r4 = (r6 + r8);
    r0 = MemoryInline::FlatRead8((r4 + 224));
}

loc_8085A8B0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_8085A8BC;
    }
}

loc_8085A8B4:
{
    r9 = 1;
    goto loc_8085A8F8;
}

loc_8085A8BC:
{
    r10 = (r10 + 1);
    r0 = (r10 & 255);
    r8 = (r0 * 240);
    r4 = (r5 + r8);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085A8D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085A8F0;
    }
}

loc_8085A8D8:
{
    r4 = (r6 + r8);
    r0 = MemoryInline::FlatRead8((r4 + 224));
}

loc_8085A8E4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_8085A8F0;
    }
}

loc_8085A8E8:
{
    r9 = 1;
    goto loc_8085A8F8;
}

loc_8085A8F0:
{
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8085A824;
    }
}

loc_8085A8F8:
{
}

loc_8085A8FC:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8085A948;
    }
}

loc_8085A900:
{
}

loc_8085A904:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(32))) {
        goto loc_8085A910;
    }
}

loc_8085A908:
{
}

loc_8085A90C:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(35))) {
        goto loc_8085A92C;
    }
}

loc_8085A910:
{
}

loc_8085A914:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(30))) {
        goto loc_8085A920;
    }
}

loc_8085A918:
{
}

loc_8085A91C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(46))) {
        goto loc_8085A934;
    }
}

loc_8085A920:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r3 + 5988), r0);
    goto loc_8085A934;
}

loc_8085A92C:
{
    r0 = 8;
    MemoryInline::FlatWrite32((r3 + 5988), r0);
}

loc_8085A934:
{
    r3 = 0x809C0000u;
    r0 = 55;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWrite32((r3 + 5976), r0);
    goto loc_8085A960;
}

loc_8085A948:
{
    r0 = 12;
    MemoryInline::FlatWrite32((r3 + 5988), r0);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = 56;
    MemoryInline::FlatWrite32((r3 + 5976), r0);
}

loc_8085A960:
{
    r3 = 0x809C0000u;
    r0 = 11;
    r4 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = 0x809C0000u;
    MemoryInline::FlatWrite32((r4 + 5984), r0);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8085A984:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(32))) {
        goto loc_8085A990;
    }
}

loc_8085A988:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(35));
}

loc_8085A98C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8085A9A8;
    }
}

loc_8085A990:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(30));
}

loc_8085A994:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085A9A0;
    }
}

loc_8085A998:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(46));
}

loc_8085A99C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8085AFE0;
    }
}

loc_8085A9A0:
{
    r31 = 53;
    goto loc_8085AFE0;
}

loc_8085A9A8:
{
    r31 = 54;
    goto loc_8085AFE0;
}

loc_8085A9B0:
{
    r0 = 6;
    r6 = (r3 + 40);
    r7 = (r3 + 3096);
    r10 = 0;
    r11 = 0;
    r12 = 0;
    r27 = 0;
    ctr = r0;
}

loc_8085A9D0:
{
    r0 = (r27 & 255);
    r9 = (r0 * 240);
    r8 = (r6 + r9);
    r0 = MemoryInline::FlatRead32((r8 + 16));
}

loc_8085A9E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8085AA14;
    }
}

loc_8085A9E8:
{
    r5 = MemoryInline::FlatRead32((r8 + 204));
}

loc_8085A9F0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8085AA00;
    }
}

loc_8085A9F4:
{
    r3 = (r7 + r9);
    r0 = MemoryInline::FlatRead16((r3 + 218));
    r10 = (r10 + r0);
}

loc_8085AA00:
{
}

loc_8085AA04:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8085AA14;
    }
}

loc_8085AA08:
{
    r3 = (r7 + r9);
    r0 = MemoryInline::FlatRead16((r3 + 218));
    r11 = (r11 + r0);
}

loc_8085AA14:
{
    r3 = (r7 + r9);
    r5 = MemoryInline::FlatRead16((r8 + 216));
    r0 = MemoryInline::FlatRead16((r3 + 218));
    r0 = (r0 - r5);
}

loc_8085AA28:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r12))) {
        goto loc_8085AA30;
    }
}

loc_8085AA2C:
{
    r12 = r0;
}

loc_8085AA30:
{
    r27 = (r27 + 1);
    r0 = (r27 & 255);
    r9 = (r0 * 240);
    r8 = (r6 + r9);
    r0 = MemoryInline::FlatRead32((r8 + 16));
}

loc_8085AA48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8085AA78;
    }
}

loc_8085AA4C:
{
    r5 = MemoryInline::FlatRead32((r8 + 204));
}

loc_8085AA54:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8085AA64;
    }
}

loc_8085AA58:
{
    r3 = (r7 + r9);
    r0 = MemoryInline::FlatRead16((r3 + 218));
    r10 = (r10 + r0);
}

loc_8085AA64:
{
}

loc_8085AA68:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8085AA78;
    }
}

loc_8085AA6C:
{
    r3 = (r7 + r9);
    r0 = MemoryInline::FlatRead16((r3 + 218));
    r11 = (r11 + r0);
}

loc_8085AA78:
{
    r3 = (r7 + r9);
    r5 = MemoryInline::FlatRead16((r8 + 216));
    r0 = MemoryInline::FlatRead16((r3 + 218));
    r0 = (r0 - r5);
}

loc_8085AA8C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r12))) {
        goto loc_8085AA94;
    }
}

loc_8085AA90:
{
    r12 = r0;
}

loc_8085AA94:
{
    r27 = (r27 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8085A9D0;
    }
}

loc_8085AA9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(r11));
}

loc_8085AAA0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8085AAAC;
    }
}

loc_8085AAA4:
{
    r6 = 0;
    goto loc_8085AAB8;
}

loc_8085AAAC:
{
    r6 = 2;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8085AAB8;
    }
}

loc_8085AAB4:
{
    r6 = 1;
}

loc_8085AAB8:
{
    r4 = MemoryInline::FlatRead32((r4 + 152));
    r3 = 0x809C0000u;
    r0 = 2;
    r7 = 0;
    MemoryInline::FlatWrite32((r4 + 112), r6);
    r8 = 0;
    r5 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = (r5 + 40);
    ctr = r0;
}

loc_8085AADC:
{
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085AAF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085AB08;
    }
}

loc_8085AAF4:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085AAFC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085AB08;
    }
}

loc_8085AB00:
{
    r7 = 1;
    goto loc_8085AC00;
}

loc_8085AB08:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085AB20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085AB38;
    }
}

loc_8085AB24:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085AB2C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085AB38;
    }
}

loc_8085AB30:
{
    r7 = 1;
    goto loc_8085AC00;
}

loc_8085AB38:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085AB50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085AB68;
    }
}

loc_8085AB54:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085AB5C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085AB68;
    }
}

loc_8085AB60:
{
    r7 = 1;
    goto loc_8085AC00;
}

loc_8085AB68:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085AB80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085AB98;
    }
}

loc_8085AB84:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085AB8C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085AB98;
    }
}

loc_8085AB90:
{
    r7 = 1;
    goto loc_8085AC00;
}

loc_8085AB98:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085ABB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085ABC8;
    }
}

loc_8085ABB4:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085ABBC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085ABC8;
    }
}

loc_8085ABC0:
{
    r7 = 1;
    goto loc_8085AC00;
}

loc_8085ABC8:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085ABE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085ABF8;
    }
}

loc_8085ABE4:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085ABEC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085ABF8;
    }
}

loc_8085ABF0:
{
    r7 = 1;
    goto loc_8085AC00;
}

loc_8085ABF8:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8085AADC;
    }
}

loc_8085AC00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8085AC04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085AC24;
    }
}

loc_8085AC08:
{
    r0 = 9;
    MemoryInline::FlatWrite32((r5 + 5988), r0);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = 55;
    MemoryInline::FlatWrite32((r3 + 5976), r0);
    goto loc_8085AC3C;
}

loc_8085AC24:
{
    r0 = 12;
    MemoryInline::FlatWrite32((r5 + 5988), r0);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = 56;
    MemoryInline::FlatWrite32((r3 + 5976), r0);
}

loc_8085AC3C:
{
    r3 = 0x809C0000u;
    r0 = 11;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r31 = 55;
    MemoryInline::FlatWrite32((r3 + 5984), r0);
    goto loc_8085AFE0;
}

loc_8085AC54:
{
    r4 = MemoryInline::FlatRead32((r4 + 152));
    r0 = 2;
    r5 = (r3 + 40);
    r7 = 0;
    r6 = MemoryInline::FlatRead32((r4 + 112));
    r8 = 0;
    ctr = r0;
}

loc_8085AC70:
{
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085AC84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085AC9C;
    }
}

loc_8085AC88:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085AC90:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085AC9C;
    }
}

loc_8085AC94:
{
    r7 = 1;
    goto loc_8085AD94;
}

loc_8085AC9C:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085ACB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085ACCC;
    }
}

loc_8085ACB8:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085ACC0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085ACCC;
    }
}

loc_8085ACC4:
{
    r7 = 1;
    goto loc_8085AD94;
}

loc_8085ACCC:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085ACE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085ACFC;
    }
}

loc_8085ACE8:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085ACF0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085ACFC;
    }
}

loc_8085ACF4:
{
    r7 = 1;
    goto loc_8085AD94;
}

loc_8085ACFC:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085AD14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085AD2C;
    }
}

loc_8085AD18:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085AD20:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085AD2C;
    }
}

loc_8085AD24:
{
    r7 = 1;
    goto loc_8085AD94;
}

loc_8085AD2C:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085AD44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085AD5C;
    }
}

loc_8085AD48:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085AD50:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085AD5C;
    }
}

loc_8085AD54:
{
    r7 = 1;
    goto loc_8085AD94;
}

loc_8085AD5C:
{
    r8 = (r8 + 1);
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8085AD74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8085AD8C;
    }
}

loc_8085AD78:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8085AD80:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8085AD8C;
    }
}

loc_8085AD84:
{
    r7 = 1;
    goto loc_8085AD94;
}

loc_8085AD8C:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8085AC70;
    }
}

loc_8085AD94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8085AD98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085ADB8;
    }
}

loc_8085AD9C:
{
    r0 = 10;
    MemoryInline::FlatWrite32((r3 + 5988), r0);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = 55;
    MemoryInline::FlatWrite32((r3 + 5976), r0);
    goto loc_8085ADD0;
}

loc_8085ADB8:
{
    r0 = 12;
    MemoryInline::FlatWrite32((r3 + 5988), r0);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = 56;
    MemoryInline::FlatWrite32((r3 + 5976), r0);
}

loc_8085ADD0:
{
    r3 = 0x809C0000u;
    r0 = 11;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r31 = 56;
    MemoryInline::FlatWrite32((r3 + 5984), r0);
    goto loc_8085AFE0;
}

loc_8085ADE8:
{
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r31 = 65;
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    goto loc_8085AFE0;
}

loc_8085ADFC:
{
}

loc_8085AE00:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(1))) {
        goto loc_8085AEAC;
    }
}

loc_8085AE04:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8085AE14:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8085AE34;
    }
}

loc_8085AE18:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r27 = (r3 + 56);
    goto loc_8085AE38;
}

loc_8085AE34:
{
    r27 = 0;
}

loc_8085AE38:
{
    r29 = 0;
    // inline leaf 0x808605FC (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 292));
    r3 = (r0 & 255);
    // end of inlined leaf 0x808605FC
    r0 = (r3 & 255);
}

loc_8085AE48:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_8085AE50;
    }
}

loc_8085AE4C:
{
    r29 = 2;
}

loc_8085AE50:
{
    r3 = (r27 + 65536);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + -28328));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8085AE64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8085AE70;
    }
}

loc_8085AE68:
{
    r31 = 75;
    goto loc_8085AE98;
}

loc_8085AE70:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = MemoryInline::FlatRead32((r3 + 96));
    // inline leaf 0x808606A4 (11 guest instruction(s))
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r5 = MemoryInline::FlatRead32((r4 + 152));
    r4 = MemoryInline::FlatRead32((r5 + 248));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r3 - r0);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r5 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 120));
    // end of inlined leaf 0x808606A4
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    MemoryInline::FlatWrite32((r4 + 5976), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80860358u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r31 = r3;
}

loc_8085AE98:
{
    r3 = 0x809C0000u;
    r0 = 5;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWrite32((r3 + 5988), r0);
    goto loc_8085AFE0;
}

loc_8085AEAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(3));
}

loc_8085AEB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8085AF5C;
    }
}

loc_8085AEB4:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8085AEC4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8085AEE4;
    }
}

loc_8085AEC8:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r27 = (r3 + 56);
    goto loc_8085AEE8;
}

loc_8085AEE4:
{
    r27 = 0;
}

loc_8085AEE8:
{
    r29 = 1;
    // inline leaf 0x808605FC (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 292));
    r3 = (r0 & 255);
    // end of inlined leaf 0x808605FC
    r0 = (r3 & 255);
}

loc_8085AEF8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_8085AF00;
    }
}

loc_8085AEFC:
{
    r29 = 3;
}

loc_8085AF00:
{
    r3 = (r27 + 65536);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + -28328));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8085AF14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8085AF20;
    }
}

loc_8085AF18:
{
    r31 = 76;
    goto loc_8085AF48;
}

loc_8085AF20:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = MemoryInline::FlatRead32((r3 + 96));
    // inline leaf 0x808606D0 (15 guest instruction(s))
    r5 = 1717960704;
    r4 = 0x809C0000u;
    r0 = (r5 + 26215);
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    r0 = (r0 + r5);
    r0 = (r0 * 10);
    r0 = (r3 - r0);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 252));
    // end of inlined leaf 0x808606D0
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    MemoryInline::FlatWrite32((r4 + 5976), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80860358u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r31 = r3;
}

loc_8085AF48:
{
    r3 = 0x809C0000u;
    r0 = 5;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWrite32((r3 + 5988), r0);
    goto loc_8085AFE0;
}

loc_8085AF5C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80860358u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_8085AF64:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085AF80;
    }
}

loc_8085AF6C:
{
    r3 = 0x809C0000u;
    r0 = 5;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWrite32((r3 + 5988), r0);
    goto loc_8085AFE0;
}

loc_8085AF80:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r31 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(31));
}

loc_8085AF94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085AFBC;
    }
}

loc_8085AF98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(47));
}

loc_8085AF9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085AFBC;
    }
}

loc_8085AFA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(30));
}

loc_8085AFA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085AFC4;
    }
}

loc_8085AFA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(46));
}

loc_8085AFAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085AFC4;
    }
}

loc_8085AFB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(48));
}

loc_8085AFB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085AFCC;
    }
}

loc_8085AFB8:
{
    goto loc_8085AFD0;
}

loc_8085AFBC:
{
    r31 = 31;
    goto loc_8085AFD0;
}

loc_8085AFC4:
{
    r31 = 30;
    goto loc_8085AFD0;
}

loc_8085AFCC:
{
    r31 = 48;
}

loc_8085AFD0:
{
    r3 = 0x809C0000u;
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWrite32((r3 + 5988), r0);
}

loc_8085AFE0:
{
    r12 = MemoryInline::FlatRead32(r28);
    f1.d = f31.d;
    r3 = r28;
    r4 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x8085B000u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x809C0000u;
    r3 = r31;
    r27 = MemoryInline::FlatRead32((r4 + 9000));
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x80631C68u) && KnownTranslatedCpuCall<0x80631C68u>::kAvailable && !KnownTranslatedCpuCall<0x80631C68u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80631C68u>()) {
        const auto state_free_result_80631C68_8B5E = func_80631C68_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80631C68_8B5E[0]);
        cr = static_cast<uint32_t>(state_free_result_80631C68_8B5E[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80631C68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = r27;
    r5 = 1;
    ctx->lr = 0x8085B020u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806F8DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8085BBE0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621410 (9 guest instruction(s))
}

loc_inl4_0x80621410:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl4_0x80621418:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x8062141C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl4_0x80621424:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x80621428:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl4_cont_80621410;
}

loc_inl4_return:
{
}

loc_inl4_cont_80621410:
{
    // end of inlined leaf 0x80621410
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 256);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 256));
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8085A6DC func_8085A6DC preserves=false fpr_mask=0x80000000
