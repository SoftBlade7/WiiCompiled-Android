#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020682C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8020682C;

loc_8020682C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80206838:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if (((cr & 0x02000000u) == 0)) {
        goto loc_8020686C;
    }
}

loc_80206854:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80206E04;
}

loc_8020686C:
{
    r30 = MemoryInline::FlatRead8((r3 + 8));
    r0 = 0;
    r4 = 0x80360000u;
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r0));
    r4 = (r4 + -20912);
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020688C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80206898;
    }
}

loc_80206890:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(26));
}

loc_80206894:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_802068B0;
    }
}

loc_80206898:
{
    r4 = 0x80360000u;
    r0 = 4;
    r4 = (r4 + -20912);
    r3 = 4;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80206E04;
}

loc_802068B0:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80206924;
    }
}

loc_802068B4:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802068BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206924;
    }
}

loc_802068C0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_802068C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206924;
    }
}

loc_802068CC:
{
    r6 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(65535));
}

loc_802068D4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80206924;
    }
}

loc_802068D8:
{
    r0 = MemoryInline::FlatRead32((r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(32767));
}

loc_802068E0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80206924;
    }
}

loc_802068E4:
{
    r0 = MemoryInline::FlatRead16((r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_802068EC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80206924;
    }
}

loc_802068F0:
{
    r0 = MemoryInline::FlatRead16((r4 + 10));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_802068F8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80206924;
    }
}

loc_802068FC:
{
    r0 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80206904:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206924;
    }
}

loc_80206908:
{
    r5 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80206910:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206924;
    }
}

loc_80206914:
{
    r0 = (r0 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80206918:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80206924;
    }
}

loc_8020691C:
{
    r0 = (r5 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80206920:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020693C;
    }
}

loc_80206924:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80206E04;
}

loc_8020693C:
{
}

loc_80206940:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8020694C;
    }
}

loc_80206944:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r4 + 12), r0);
}

loc_8020694C:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_80206958:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80206964;
    }
}

loc_8020695C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r4 + 16), r0);
}

loc_80206964:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead16((r4 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80206978:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80206994;
    }
}

loc_8020697C:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80206E04;
}

loc_80206994:
{
    r3 = MemoryInline::FlatRead16((r4 + 10));
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r0 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_802069A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802069C0;
    }
}

loc_802069A8:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80206E04;
}

loc_802069C0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80206A14;
    }
}

loc_802069C8:
{
}

loc_802069CC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(97))) {
        goto loc_802069D8;
    }
}

loc_802069D0:
{
}

loc_802069D4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(122))) {
        goto loc_802069EC;
    }
}

loc_802069D8:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(65));
}

loc_802069E0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_802069FC;
    }
}

loc_802069E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(90));
}

loc_802069E8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_802069FC;
    }
}

loc_802069EC:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    // inline leaf 0x801EF3C0 (6 guest instruction(s))
}

loc_inl0_0x801EF3C0:
{
}

loc_inl0_0x801EF3C4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(97))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x801EF3C8:
{
}

loc_inl0_0x801EF3CC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(122))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x801EF3D0:
{
    r3 = (r3 + -32);
    goto loc_inl0_cont_801EF3C0;
}

loc_inl0_return:
{
}

loc_inl0_cont_801EF3C0:
{
    // end of inlined leaf 0x801EF3C0
    r31 = (r3 + -65);
    goto loc_80206A14;
}

loc_802069FC:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80206E04;
}

loc_80206A14:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80206A90;
    }
}

loc_80206A1C:
{
    r3 = 0x80360000u;
    r0 = 13;
    r3 = (r3 + -20912);
    r31 = 0;
    r3 = (r3 + 72);
    ctr = r0;
}

loc_80206A34:
{
    r0 = MemoryInline::FlatRead16((r3 + 6240));
    r30 = r3;
    r0 = (r0 & 1);
}

loc_80206A40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80206A68;
    }
}

loc_80206A44:
{
    r0 = MemoryInline::FlatRead16((r3 + 12512));
    r3 = (r3 + 6272);
    r30 = r3;
    r31 = (r31 + 1);
    r0 = (r0 & 1);
}

loc_80206A58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80206A68;
    }
}

loc_80206A5C:
{
    r3 = (r3 + 6272);
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80206A34;
    }
}

loc_80206A68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80206A6C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80206A78;
    }
}

loc_80206A70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(26));
}

loc_80206A74:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80206AE8;
    }
}

loc_80206A78:
{
    r4 = 0x80360000u;
    r0 = 4;
    r4 = (r4 + -20912);
    r3 = 4;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80206E04;
}

loc_80206A90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80206A94:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80206AA0;
    }
}

loc_80206A98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(26));
}

loc_80206A9C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80206AB8;
    }
}

loc_80206AA0:
{
    r4 = 0x80360000u;
    r0 = 18;
    r4 = (r4 + -20912);
    r3 = 18;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80206E04;
}

loc_80206AB8:
{
    r0 = (r31 * 6272);
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 6312));
    r30 = (r3 + 72);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80206AD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206AE8;
    }
}

loc_80206AD8:
{
    r0 = 18;
    r3 = 18;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80206E04;
}

loc_80206AE8:
{
    r3 = r30;
    r4 = 0;
    r5 = 6272;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801EF500u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r6 = -1;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    MemoryInline::FlatWrite32((r30 + 56), r6);
    r5 = (r3 + 65);
    r4 = 1;
    r0 = (r30 + 6220);
    MemoryInline::FlatWrite32((r30 + 60), r6);
    r3 = r30;
    r6 = MemoryInline::FlatRead32(r29);
    MemoryInline::FlatWrite32((r30 + 6260), r6);
    MemoryInline::FlatWrite8((r30 + 6242), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r30 + 6216), r4);
    MemoryInline::FlatWrite32((r30 + 6224), r0);
    ctx->lr = 0x80206B30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801F029Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80206B34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80206B3C;
    }
}

loc_80206B38:
{
    goto loc_80206B88;
}

loc_80206B3C:
{
    r7 = MemoryInline::FlatRead32((r29 + 4));
    r3 = r30;
    r4 = MemoryInline::FlatRead32(r7);
    r5 = MemoryInline::FlatRead32((r7 + 4));
    r6 = MemoryInline::FlatRead16((r7 + 8));
    r7 = MemoryInline::FlatRead16((r7 + 10));
    // inline leaf 0x801F5AE4 (5 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 5592), r4);
    MemoryInline::FlatWrite32((r3 + 5604), r5);
    MemoryInline::FlatWrite16((r3 + 5588), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 5590), static_cast<uint16_t>(r7));
    // end of inlined leaf 0x801F5AE4
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r4 + 12));
    // inline leaf 0x801F5AF8 (4 guest instruction(s))
}

loc_inl2_0x801F5AF8:
{
}

loc_inl2_0x801F5AFC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x801F5B00:
{
    MemoryInline::FlatWrite32((r3 + 5608), r4);
    goto loc_inl2_cont_801F5AF8;
}

loc_inl2_return:
{
}

loc_inl2_cont_801F5AF8:
{
    // end of inlined leaf 0x801F5AF8
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r4 + 16));
    // inline leaf 0x801F5B08 (4 guest instruction(s))
}

loc_inl3_0x801F5B08:
{
}

loc_inl3_0x801F5B0C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x801F5B10:
{
    MemoryInline::FlatWrite32((r3 + 5612), r4);
    goto loc_inl3_cont_801F5B08;
}

loc_inl3_return:
{
}

loc_inl3_cont_801F5B08:
{
    // end of inlined leaf 0x801F5B08
    r0 = MemoryInline::FlatRead16((r30 + 6240));
    r3 = 0;
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r30 + 6240), static_cast<uint16_t>(r0));
}

loc_80206B88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80206B8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206BA0;
    }
}

loc_80206B90:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 28), r3);
    goto loc_80206E04;
}

loc_80206BA0:
{
    r0 = MemoryInline::FlatRead8((r29 + 9));
    r5 = 0x80360000u;
    r5 = (r5 + -20912);
    r3 = r30;
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 6242));
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r5 + 12), r0);
    ctx->lr = 0x80206BD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801F0218u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80206BD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206CA8;
    }
}

loc_80206BD8:
{
    r3 = r30;
    ctx->lr = 0x80206BE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801F0244u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80206BE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80206D30;
    }
}

loc_80206BE8:
{
    r0 = MemoryInline::FlatRead16((r30 + 6240));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80206BF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206C54;
    }
}

loc_80206BF4:
{
    r3 = r30;
    ctx->lr = 0x80206BFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80201328u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r30;
    ctx->lr = 0x80206C04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F6B40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F6188u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x80206C18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801F056Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80206C1C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80206C40;
    }
}

loc_80206C20:
{
    r0 = MemoryInline::FlatRead16((r30 + 6240));
    r0 = (r0 & 2);
}

loc_80206C28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80206C34;
    }
}

loc_80206C2C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 5632), r0);
}

loc_80206C34:
{
    r0 = MemoryInline::FlatRead16((r30 + 6240));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite16((r30 + 6240), static_cast<uint16_t>(r0));
}

loc_80206C40:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
}

loc_80206C54:
{
    r0 = MemoryInline::FlatRead16((r30 + 6240));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80206C5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80206C94;
    }
}

loc_80206C60:
{
    r3 = r30;
    ctx->lr = 0x80206C68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80205758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80206C6C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80206C74;
    }
}

loc_80206C70:
{
    goto loc_80206C98;
}

loc_80206C74:
{
    r0 = MemoryInline::FlatRead16((r30 + 6244));
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    r0 = (r0 & 65528);
    MemoryInline::FlatWrite16((r30 + 6244), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
}

loc_80206C94:
{
    r3 = 0;
}

loc_80206C98:
{
}

loc_80206C9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80206D30;
    }
}

loc_80206CA0:
{
    r31 = r3;
    goto loc_80206D34;
}

loc_80206CA8:
{
    r0 = MemoryInline::FlatRead16((r30 + 6240));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80206CB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206D30;
    }
}

loc_80206CB4:
{
    r3 = r30;
    ctx->lr = 0x80206CBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801F0244u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80206CC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206D24;
    }
}

loc_80206CC4:
{
    r3 = r30;
    ctx->lr = 0x80206CCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80201328u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r30;
    ctx->lr = 0x80206CD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F6B40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F6188u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x80206CE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801F056Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80206CEC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80206D10;
    }
}

loc_80206CF0:
{
    r0 = MemoryInline::FlatRead16((r30 + 6240));
    r0 = (r0 & 2);
}

loc_80206CF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80206D04;
    }
}

loc_80206CFC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 5632), r0);
}

loc_80206D04:
{
    r0 = MemoryInline::FlatRead16((r30 + 6240));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite16((r30 + 6240), static_cast<uint16_t>(r0));
}

loc_80206D10:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
}

loc_80206D24:
{
    r0 = MemoryInline::FlatRead16((r30 + 6240));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite16((r30 + 6240), static_cast<uint16_t>(r0));
}

loc_80206D30:
{
    r31 = 0;
}

loc_80206D34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80206D38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206D70;
    }
}

loc_80206D3C:
{
    r3 = r30;
    ctx->lr = 0x80206D44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801F0218u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80206D48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206D58;
    }
}

loc_80206D4C:
{
    r0 = MemoryInline::FlatRead8((r29 + 9));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r0));
}

loc_80206D58:
{
    r4 = 0x80360000u;
    r3 = 0;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 28), r31);
    MemoryInline::FlatWrite32((r30 + 6228), r31);
    goto loc_80206E04;
}

loc_80206D70:
{
    r3 = r30;
    ctx->lr = 0x80206D78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801F0218u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80206D7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206E00;
    }
}

loc_80206D80:
{
    r0 = MemoryInline::FlatRead8((r29 + 9));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 6240));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80206D94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80206DD0;
    }
}

loc_80206D98:
{
    r3 = r30;
    ctx->lr = 0x80206DA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80205758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80206DA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80206DB0;
    }
}

loc_80206DA8:
{
    r0 = r3;
    goto loc_80206DD4;
}

loc_80206DB0:
{
    r0 = MemoryInline::FlatRead16((r30 + 6244));
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    r0 = (r0 & 65528);
    MemoryInline::FlatWrite16((r30 + 6244), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
}

loc_80206DD0:
{
    r0 = 0;
}

loc_80206DD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80206DD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206DF4;
    }
}

loc_80206DDC:
{
    r4 = 0x80360000u;
    r3 = 0;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    MemoryInline::FlatWrite32((r30 + 6228), r0);
    goto loc_80206E04;
}

loc_80206DF4:
{
    r0 = MemoryInline::FlatRead8((r29 + 9));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r0));
}

loc_80206E00:
{
    r3 = 0;
}

loc_80206E04:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8020682C func_8020682C preserves=true fpr_mask=0x00000000
