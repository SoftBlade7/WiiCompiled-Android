#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807125D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r0_subfc_min_3 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807125D4;

loc_807125D4:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r4 = MemoryInline::FlatRead32((r3 + 64));
    r0 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_807125FC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80712AC0;
    }
}

loc_80712600:
{
}

loc_80712604:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(7))) {
        goto loc_80712610;
    }
}

loc_80712608:
{
    goto loc_807126A8;
}

loc_80712610:
{
    r6 = MemoryInline::FlatRead8((r3 + 20));
    r5 = 0x809C0000u;
    r4 = 4;
    r0 = (r6 + 1);
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r5 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_1);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
    r0 = MemoryInline::FlatRead8((r31 + 20));
    r29 = r3;
}

loc_80712638:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(180))) {
        goto loc_807126A0;
    }
}

loc_8071263C:
{
    r0 = MemoryInline::FlatRead8((r31 + 21));
    r4 = 180;
    MemoryInline::FlatWrite8((r31 + 20), static_cast<uint8_t>(r4));
}

loc_8071264C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807126A0;
    }
}

loc_80712650:
{
}

loc_80712654:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_807126A0;
    }
}

loc_80712658:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r4 + -104);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8071266C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80712688;
    }
}

loc_80712670:
{
    r0 = (r4 + -112);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80712678:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80712688;
    }
}

loc_8071267C:
{
    r0 = (r4 + -116);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80712684:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807126A0;
    }
}

loc_80712688:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 220;
    r5 = -1;
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x807126A0u;
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
    ctx->gpr[12] = r12;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807126A0:
{
    MemoryInline::FlatWrite8((r31 + 21), static_cast<uint8_t>(r29));
    goto loc_807126C8;
}

loc_807126A8:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r0 = MemoryInline::FlatRead32((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_807126B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807126C8;
    }
}

loc_807126BC:
{
    r4 = 7;
    ctx->lr = 0x807126C4u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80711AC4u>(ctx);
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80712AC0;
}

loc_807126C8:
{
    r0 = MemoryInline::FlatRead32((r31 + 64));
}

loc_807126D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_807126E8;
    }
}

loc_807126D4:
{
}

loc_807126D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80712874;
    }
}

loc_807126DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_807126E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807128A4;
    }
}

loc_807126E4:
{
    goto loc_80712AC0;
}

loc_807126E8:
{
    r3 = MemoryInline::FlatRead32((r31 + 68));
    r0 = (r3 + -9);
}

loc_807126F4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80712700;
    }
}

loc_807126F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_807126FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80712AC0;
    }
}

loc_80712700:
{
    r4 = 0x808B0000u;
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 42), static_cast<uint8_t>(r0));
    r4 = (r4 + 11588);
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    MemoryInline::FlatWriteRam32((r1 + 32), r4);
    r4 = (r1 + 32);
    MemoryInline::FlatWriteRam16((r1 + 36), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 38), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 40), static_cast<uint16_t>(r0));
    // inline leaf 0x80535CA0 (29 guest instruction(s))
}

loc_inl1_0x80535CA0:
{
    r5 = MemoryInline::FlatRead32((r3 + 20));
}

loc_inl1_0x80535CA8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x80535CF8;
    }
}

loc_inl1_0x80535CAC:
{
    r0 = MemoryInline::FlatRead16((r5 + 20));
    MemoryInline::FlatWriteRam16((r4 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 22));
    MemoryInline::FlatWriteRam8((r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 24));
    MemoryInline::FlatWriteRam16((r4 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 26));
    MemoryInline::FlatWriteRam8((r4 + 10), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = MemoryInline::FlatRead8((r3 + 64));
}

loc_inl1_0x80535CD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80535CDC:
{
    r3 = 65536;
    r0 = 0;
    r3 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r4 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r4 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r4 + 8), static_cast<uint16_t>(r0));
    goto loc_inl1_cont_80535CA0;
}

loc_inl1_0x80535CF8:
{
    r0 = 0;
    r3 = 1;
    MemoryInline::FlatWriteRam8((r4 + 10), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam16((r4 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r4 + 8), static_cast<uint16_t>(r0));
    goto loc_inl1_cont_80535CA0;
}

loc_inl1_return:
{
}

loc_inl1_cont_80535CA0:
{
    // end of inlined leaf 0x80535CA0
    r3 = 0x809C0000u;
    r3 = (r3 + 10248);
    r4 = MemoryInline::FlatRead8((r3 + 10));
}

loc_80712740:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8071274C;
    }
}

loc_80712744:
{
    r0 = 0;
    goto loc_807127B4;
}

loc_8071274C:
{
    r0 = MemoryInline::FlatRead8((r31 + 58));
}

loc_80712754:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80712760;
    }
}

loc_80712758:
{
    r0 = 1;
    goto loc_807127B4;
}

loc_80712760:
{
    r0 = MemoryInline::FlatRead16((r31 + 52));
    r5 = MemoryInline::FlatRead16((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8071276C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80712778;
    }
}

loc_80712770:
{
    r0 = 1;
    goto loc_807127B4;
}

loc_80712778:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807127B0;
    }
}

loc_8071277C:
{
    r0 = MemoryInline::FlatRead8((r31 + 54));
    r5 = MemoryInline::FlatRead8((r3 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80712788:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80712794;
    }
}

loc_8071278C:
{
    r0 = 1;
    goto loc_807127B4;
}

loc_80712794:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807127B0;
    }
}

loc_80712798:
{
    r3 = MemoryInline::FlatRead16((r3 + 8));
    r0 = MemoryInline::FlatRead16((r31 + 56));
}

loc_807127A4:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_807127B0;
    }
}

loc_807127A8:
{
    r0 = 1;
    goto loc_807127B4;
}

loc_807127B0:
{
    r0 = 0;
}

loc_807127B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807127B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80712850;
    }
}

loc_807127BC:
{
    r0 = MemoryInline::FlatRead8((r1 + 42));
}

loc_807127C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807127D0;
    }
}

loc_807127C8:
{
    r0 = 0;
    goto loc_8071283C;
}

loc_807127D0:
{
}

loc_807127D4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_807127E0;
    }
}

loc_807127D8:
{
    r0 = 1;
    goto loc_8071283C;
}

loc_807127E0:
{
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead16((r1 + 36));
    r4 = (r4 + 10248);
    r0 = MemoryInline::FlatRead16((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_807127F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80712800;
    }
}

loc_807127F8:
{
    r0 = 1;
    goto loc_8071283C;
}

loc_80712800:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80712838;
    }
}

loc_80712804:
{
    r0 = MemoryInline::FlatRead8((r4 + 6));
    r3 = MemoryInline::FlatRead8((r1 + 38));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80712810:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071281C;
    }
}

loc_80712814:
{
    r0 = 1;
    goto loc_8071283C;
}

loc_8071281C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80712838;
    }
}

loc_80712820:
{
    r3 = MemoryInline::FlatRead16((r1 + 40));
    r0 = MemoryInline::FlatRead16((r4 + 8));
}

loc_8071282C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_80712838;
    }
}

loc_80712830:
{
    r0 = 1;
    goto loc_8071283C;
}

loc_80712838:
{
    r0 = 0;
}

loc_8071283C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80712840:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80712850;
    }
}

loc_80712844:
{
    r3 = r31;
    r4 = 5;
    ctx->lr = 0x80712850u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80711AC4u>(ctx);
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80712850:
{
    r0 = MemoryInline::FlatRead16((r1 + 36));
    MemoryInline::FlatWrite16((r31 + 52), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 38));
    MemoryInline::FlatWrite8((r31 + 54), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 40));
    MemoryInline::FlatWrite16((r31 + 56), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 42));
    MemoryInline::FlatWrite8((r31 + 58), static_cast<uint8_t>(r0));
    goto loc_80712AC0;
}

loc_80712874:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 9000));
    r3 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80712884:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80712AC0;
    }
}

loc_80712888:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80712890:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80712AC0;
    }
}

loc_80712894:
{
    r3 = r31;
    r4 = 6;
    ctx->lr = 0x807128A0u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80711AC4u>(ctx);
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80712AC0;
}

loc_807128A4:
{
    r3 = MemoryInline::FlatRead32((r31 + 68));
    r0 = (r3 + -9);
}

loc_807128B0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_807128BC;
    }
}

loc_807128B4:
{
}

loc_807128B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_80712A90;
    }
}

loc_807128BC:
{
    r4 = 0x808B0000u;
    r3 = 0x809C0000u;
    r30 = 0;
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r30));
    r29 = (r4 + 11588);
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r4 = (r1 + 20);
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r30));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r30));
    // inline leaf 0x80535CA0 (29 guest instruction(s))
}

loc_inl2_0x80535CA0:
{
    r5 = MemoryInline::FlatRead32((r3 + 20));
}

loc_inl2_0x80535CA8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x80535CF8;
    }
}

loc_inl2_0x80535CAC:
{
    r0 = MemoryInline::FlatRead16((r5 + 20));
    MemoryInline::FlatWriteRam16((r4 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 22));
    MemoryInline::FlatWriteRam8((r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 24));
    MemoryInline::FlatWriteRam16((r4 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 26));
    MemoryInline::FlatWriteRam8((r4 + 10), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = MemoryInline::FlatRead8((r3 + 64));
}

loc_inl2_0x80535CD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80535CDC:
{
    r3 = 65536;
    r0 = 0;
    r3 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r4 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r4 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r4 + 8), static_cast<uint16_t>(r0));
    goto loc_inl2_cont_80535CA0;
}

loc_inl2_0x80535CF8:
{
    r0 = 0;
    r3 = 1;
    MemoryInline::FlatWriteRam8((r4 + 10), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam16((r4 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r4 + 8), static_cast<uint16_t>(r0));
    goto loc_inl2_cont_80535CA0;
}

loc_inl2_return:
{
}

loc_inl2_cont_80535CA0:
{
    // end of inlined leaf 0x80535CA0
    r10 = 10;
    r4 = MemoryInline::FlatRead8((r1 + 30));
    r3 = 1;
    r5 = MemoryInline::FlatRead16((r1 + 24));
    r8 = 0;
    r6 = MemoryInline::FlatRead8((r1 + 26));
    r7 = MemoryInline::FlatRead16((r1 + 28));
    ctr = r10;
}

loc_8071290C:
{
}

loc_80712910:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r30));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r30));
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80712930;
    }
}

loc_80712928:
{
    r0 = 0;
    goto loc_80712994;
}

loc_80712930:
{
    r0 = MemoryInline::FlatRead8((r31 + 58));
}

loc_80712938:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80712944;
    }
}

loc_8071293C:
{
    r0 = 1;
    goto loc_80712994;
}

loc_80712944:
{
    r0 = MemoryInline::FlatRead16((r31 + 52));
}

loc_8071294C:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r0))) {
        goto loc_80712958;
    }
}

loc_80712950:
{
    r0 = 1;
    goto loc_80712994;
}

loc_80712958:
{
}

loc_8071295C:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_80712990;
    }
}

loc_80712960:
{
    r0 = MemoryInline::FlatRead8((r31 + 54));
    r9 = (r10 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r9), static_cast<uint32_t>(r0));
}

loc_8071296C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80712978;
    }
}

loc_80712970:
{
    r0 = 1;
    goto loc_80712994;
}

loc_80712978:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80712990;
    }
}

loc_8071297C:
{
    r0 = MemoryInline::FlatRead16((r31 + 56));
}

loc_80712984:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r0))) {
        goto loc_80712990;
    }
}

loc_80712988:
{
    r0 = 1;
    goto loc_80712994;
}

loc_80712990:
{
    r0 = 0;
}

loc_80712994:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80712998:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80712A64;
    }
}

loc_8071299C:
{
}

loc_807129A0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_807129AC;
    }
}

loc_807129A4:
{
    r0 = 0;
    goto loc_80712A04;
}

loc_807129AC:
{
}

loc_807129B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807129BC;
    }
}

loc_807129B4:
{
    r0 = 1;
    goto loc_80712A04;
}

loc_807129BC:
{
    r0 = MemoryInline::FlatRead16((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_807129C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807129D0;
    }
}

loc_807129C8:
{
    r0 = 1;
    goto loc_80712A04;
}

loc_807129D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80712A00;
    }
}

loc_807129D4:
{
    r0 = MemoryInline::FlatRead8((r1 + 14));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_807129DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807129E8;
    }
}

loc_807129E0:
{
    r0 = 1;
    goto loc_80712A04;
}

loc_807129E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80712A00;
    }
}

loc_807129EC:
{
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_807129F4:
{
    if ((static_cast<uint32_t>(r7) > static_cast<uint32_t>(r0))) {
        goto loc_80712A00;
    }
}

loc_807129F8:
{
    r0 = 1;
    goto loc_80712A04;
}

loc_80712A00:
{
    r0 = 0;
}

loc_80712A04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80712A08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80712A64;
    }
}

loc_80712A0C:
{
    r0 = (r10 + 252);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
}

loc_80712A18:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80712A40;
    }
}

loc_80712A1C:
{
    r3 = 0x809C0000u;
    r4 = 235;
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    r5 = -1;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80712A3Cu;
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
    ctx->gpr[12] = r12;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80712A6C;
}

loc_80712A40:
{
    r3 = 0x809C0000u;
    r4 = 236;
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    r5 = -1;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80712A60u;
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
    ctx->gpr[12] = r12;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80712A6C;
}

loc_80712A64:
{
    r10 = (r10 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8071290C;
    }
}

loc_80712A6C:
{
    r0 = MemoryInline::FlatRead16((r1 + 24));
    MemoryInline::FlatWrite16((r31 + 52), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 26));
    MemoryInline::FlatWrite8((r31 + 54), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 28));
    MemoryInline::FlatWrite16((r31 + 56), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 30));
    MemoryInline::FlatWrite8((r31 + 58), static_cast<uint8_t>(r0));
    goto loc_80712AC0;
}

loc_80712A90:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r31 + 63));
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80712AB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80712AC0;
    }
}

loc_80712AB4:
{
    r3 = r31;
    r4 = 7;
    ctx->lr = 0x80712AC0u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80711AC4u>(ctx);
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80712AC0:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x807125D4 func_807125D4 preserves=true fpr_mask=0x00000000
