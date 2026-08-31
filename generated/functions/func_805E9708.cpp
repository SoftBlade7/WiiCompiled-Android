#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E9708(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_addr_6 = 0;
    uint32_t r7_addr_7 = 0;
    uint32_t r7_addr_8 = 0;
    uint32_t r7_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805E9708;

loc_805E9708:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805E9714:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0x80380000u;
    r29 = (r29 + 24960);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E9780;
    }
}

loc_805E9738:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x805E974Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805E9764;
}

loc_805E9750:
{
}

loc_805E9754:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_805E9760;
    }
}

loc_805E9758:
{
    r0 = 1;
    goto loc_805E9770;
}

loc_805E9760:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805E9764:
{
}

loc_805E9768:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805E9750;
    }
}

loc_805E976C:
{
    r0 = 0;
}

loc_805E9770:
{
}

loc_805E9774:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805E9780;
    }
}

loc_805E9778:
{
    r4 = r31;
    goto loc_805E9784;
}

loc_805E9780:
{
    r4 = 0;
}

loc_805E9784:
{
}

loc_805E9788:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805E98C0;
    }
}

loc_805E978C:
{
    r0 = 8;
    r3 = (r31 + 205);
    ctr = r0;
}

loc_805E9798:
{
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805E97AC;
    }
}

loc_805E97A4:
{
    r0 = 0;
    goto loc_805E97C8;
}

loc_805E97AC:
{
}

loc_805E97B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(76))) {
        goto loc_805E97BC;
    }
}

loc_805E97B4:
{
    r0 = 1;
    goto loc_805E97C8;
}

loc_805E97BC:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805E9798;
    }
}

loc_805E97C4:
{
    r0 = 0;
}

loc_805E97C8:
{
}

loc_805E97CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805E986C;
    }
}

loc_805E97D0:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r5 = 0;
    r6 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 112));
    ctr = r0;
}

loc_805E97E8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_805E9814;
    }
}

loc_805E97EC:
{
    r7 = MemoryInline::FlatRead32((r3 + 108));
    r7_addr_2 = (r7 + r6);
    r0 = MemoryInline::FlatRead32(r7_addr_2);
}

loc_805E97F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_805E9808;
    }
}

loc_805E97FC:
{
    r0 = (r5 * 28);
    r5 = (r7 + r0);
    goto loc_805E9818;
}

loc_805E9808:
{
    r6 = (r6 + 28);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805E97EC;
    }
}

loc_805E9814:
{
    r5 = 0;
}

loc_805E9818:
{
    r6 = MemoryInline::FlatRead32((r30 + 8));
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r6 + 24));
    r4 = MemoryInline::FlatRead32((r6 + 12));
    r3 = (r3 * 12);
    r4 = (r4 + r3);
    MemoryInline::FlatWrite32((r4 + 8), r5);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = MemoryInline::FlatRead32(r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805E9840:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E9850;
    }
}

loc_805E9844:
{
    MemoryInline::FlatWrite32(r6, r4);
    MemoryInline::FlatWrite32((r6 + 4), r4);
    goto loc_805E985C;
}

loc_805E9850:
{
    r3 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r6 + 4), r4);
}

loc_805E985C:
{
    r3 = MemoryInline::FlatRead32((r6 + 24));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r6 + 24), r0);
    goto loc_805E9B0C;
}

loc_805E986C:
{
    r5 = MemoryInline::FlatRead32((r30 + 8));
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r3 = (r3 * 12);
    r4 = (r4 + r3);
    MemoryInline::FlatWrite32((r4 + 8), r31);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805E9894:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E98A4;
    }
}

loc_805E9898:
{
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    goto loc_805E98B0;
}

loc_805E98A4:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r5 + 4), r4);
}

loc_805E98B0:
{
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r5 + 20), r0);
    goto loc_805E9B0C;
}

loc_805E98C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805E98C4:
{
    r29 = 0x80380000u;
    r29 = (r29 + 24952);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E9918;
    }
}

loc_805E98D0:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x805E98E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805E98FC;
}

loc_805E98E8:
{
}

loc_805E98EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_805E98F8;
    }
}

loc_805E98F0:
{
    r0 = 1;
    goto loc_805E9908;
}

loc_805E98F8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805E98FC:
{
}

loc_805E9900:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805E98E8;
    }
}

loc_805E9904:
{
    r0 = 0;
}

loc_805E9908:
{
}

loc_805E990C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805E9918;
    }
}

loc_805E9910:
{
    r4 = r31;
    goto loc_805E991C;
}

loc_805E9918:
{
    r4 = 0;
}

loc_805E991C:
{
}

loc_805E9920:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805E9A58;
    }
}

loc_805E9924:
{
    r0 = 8;
    r3 = (r31 + 205);
    ctr = r0;
}

loc_805E9930:
{
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805E9944;
    }
}

loc_805E993C:
{
    r0 = 0;
    goto loc_805E9960;
}

loc_805E9944:
{
}

loc_805E9948:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(77))) {
        goto loc_805E9954;
    }
}

loc_805E994C:
{
    r0 = 1;
    goto loc_805E9960;
}

loc_805E9954:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805E9930;
    }
}

loc_805E995C:
{
    r0 = 0;
}

loc_805E9960:
{
}

loc_805E9964:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805E9A04;
    }
}

loc_805E9968:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r5 = 0;
    r6 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 120));
    ctr = r0;
}

loc_805E9980:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_805E99AC;
    }
}

loc_805E9984:
{
    r7 = MemoryInline::FlatRead32((r3 + 116));
    r7_addr_6 = (r7 + r6);
    r0 = MemoryInline::FlatRead32(r7_addr_6);
}

loc_805E9990:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_805E99A0;
    }
}

loc_805E9994:
{
    r0 = (r5 * 24);
    r5 = (r7 + r0);
    goto loc_805E99B0;
}

loc_805E99A0:
{
    r6 = (r6 + 24);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805E9984;
    }
}

loc_805E99AC:
{
    r5 = 0;
}

loc_805E99B0:
{
    r6 = MemoryInline::FlatRead32((r30 + 8));
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r6 + 28));
    r4 = MemoryInline::FlatRead32((r6 + 16));
    r3 = (r3 * 12);
    r4 = (r4 + r3);
    MemoryInline::FlatWrite32((r4 + 8), r5);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = MemoryInline::FlatRead32(r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805E99D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E99E8;
    }
}

loc_805E99DC:
{
    MemoryInline::FlatWrite32(r6, r4);
    MemoryInline::FlatWrite32((r6 + 4), r4);
    goto loc_805E99F4;
}

loc_805E99E8:
{
    r3 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r6 + 4), r4);
}

loc_805E99F4:
{
    r3 = MemoryInline::FlatRead32((r6 + 28));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r6 + 28), r0);
    goto loc_805E9B0C;
}

loc_805E9A04:
{
    r5 = MemoryInline::FlatRead32((r30 + 8));
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r3 = (r3 * 12);
    r4 = (r4 + r3);
    MemoryInline::FlatWrite32((r4 + 8), r31);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805E9A2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E9A3C;
    }
}

loc_805E9A30:
{
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    goto loc_805E9A48;
}

loc_805E9A3C:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r5 + 4), r4);
}

loc_805E9A48:
{
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r5 + 20), r0);
    goto loc_805E9B0C;
}

loc_805E9A58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805E9A5C:
{
    r29 = 0x80380000u;
    r29 = (r29 + 24968);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E9AB0;
    }
}

loc_805E9A68:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x805E9A7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805E9A94;
}

loc_805E9A80:
{
}

loc_805E9A84:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_805E9A90;
    }
}

loc_805E9A88:
{
    r0 = 1;
    goto loc_805E9AA0;
}

loc_805E9A90:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805E9A94:
{
}

loc_805E9A98:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805E9A80;
    }
}

loc_805E9A9C:
{
    r0 = 0;
}

loc_805E9AA0:
{
}

loc_805E9AA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805E9AB0;
    }
}

loc_805E9AA8:
{
    r0 = r31;
    goto loc_805E9AB4;
}

loc_805E9AB0:
{
    r0 = 0;
}

loc_805E9AB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805E9AB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E9B0C;
    }
}

loc_805E9ABC:
{
    r5 = MemoryInline::FlatRead32((r30 + 8));
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r3 = (r3 * 12);
    r4 = (r4 + r3);
    MemoryInline::FlatWrite32((r4 + 8), r31);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805E9AE4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E9AF4;
    }
}

loc_805E9AE8:
{
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    goto loc_805E9B00;
}

loc_805E9AF4:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r5 + 4), r4);
}

loc_805E9B00:
{
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r5 + 20), r0);
}

loc_805E9B0C:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
// RECOMP_REGISTRATION base 0x805E9708 func_805E9708 preserves=true fpr_mask=0x00000000
