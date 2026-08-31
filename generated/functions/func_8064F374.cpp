#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8064F374(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r0_subfc_sub_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r6_adde_left_0 = 0;
    uint32_t r6_adde_left_1 = 0;
    uint32_t r6_adde_left_2 = 0;
    uint32_t r6_adde_left_3 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r6_ca_1 = 0;
    uint32_t r6_ca_2 = 0;
    uint32_t r6_ca_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8064F374;

loc_8064F374:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 456));
}

loc_8064F390:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8064F3A0;
    }
}

loc_8064F394:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8064F398:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064F60C;
    }
}

loc_8064F39C:
{
    goto loc_8064F648;
}

loc_8064F3A0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r4 = MemoryInline::FlatRead32(r3);
    r8 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(104));
}

loc_8064F3B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8064F3C0;
    }
}

loc_8064F3B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(111));
}

loc_8064F3BC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8064F3D4;
    }
}

loc_8064F3C0:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r8), static_cast<int32_t>(112));
}

loc_8064F3C4:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8064F648;
    }
}

loc_8064F3C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(119));
}

loc_8064F3CC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8064F458;
    }
}

loc_8064F3D0:
{
    goto loc_8064F648;
}

loc_8064F3D4:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 8408));
    r0 = MemoryInline::FlatRead32((r4 + 10524));
    r0 = (r0 * 88);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_8064F3F0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8064F400;
    }
}

loc_8064F3F4:
{
    r0 = MemoryInline::FlatRead8((r4 + 139));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8064F3FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064F648;
    }
}

loc_8064F400:
{
    r0 = (r8 + -104);
    r4 = -1;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
}

loc_8064F40C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8064F444;
    }
}

loc_8064F410:
{
    r5 = 0x808C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r5 + 316);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8064F428u:
        goto loc_8064F428;
        break;
    case 0x8064F430u:
        goto loc_8064F430;
        break;
    case 0x8064F438u:
        goto loc_8064F438;
        break;
    case 0x8064F440u:
        goto loc_8064F440;
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
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8064F428:
{
    r4 = 88;
    goto loc_8064F444;
}

loc_8064F430:
{
    r4 = 94;
    goto loc_8064F444;
}

loc_8064F438:
{
    r4 = 89;
    goto loc_8064F444;
}

loc_8064F440:
{
    r4 = 95;
}

loc_8064F444:
{
    r5 = 0;
    ctx->lr = 0x8064F44Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80635A3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 456), r0);
    goto loc_8064F648;
}

loc_8064F458:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 8408));
    r0 = MemoryInline::FlatRead32((r4 + 10524));
    r0 = (r0 * 88);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_8064F474:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8064F490;
    }
}

loc_8064F478:
{
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r0 = (r0 & 1);
}

loc_8064F480:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8064F490;
    }
}

loc_8064F484:
{
    r0 = MemoryInline::FlatRead8((r4 + 90));
}

loc_8064F48C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8064F4DC;
    }
}

loc_8064F490:
{
}

loc_8064F494:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(112))) {
        goto loc_8064F4A0;
    }
}

loc_8064F498:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(115));
}

loc_8064F49C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8064F4B4;
    }
}

loc_8064F4A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(116));
}

loc_8064F4A4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8064F4D0;
    }
}

loc_8064F4A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(119));
}

loc_8064F4AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8064F4C4;
    }
}

loc_8064F4B0:
{
    goto loc_8064F4D0;
}

loc_8064F4B4:
{
    r4 = 86;
    r5 = 0;
    ctx->lr = 0x8064F4C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80635A3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_8064F4D0;
}

loc_8064F4C4:
{
    r4 = 92;
    r5 = 0;
    ctx->lr = 0x8064F4D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80635A3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8064F4D0:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 456), r0);
    goto loc_8064F648;
}

loc_8064F4DC:
{
    r0 = MemoryInline::FlatRead8((r4 + 139));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8064F4E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064F648;
    }
}

loc_8064F4E8:
{
}

loc_8064F4EC:
{
    r4 = -1;
    r6 = 0;
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(116))) {
        goto loc_8064F508;
    }
}

loc_8064F4F8:
{
}

loc_8064F4FC:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(114))) {
        goto loc_8064F538;
    }
}

loc_8064F500:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_8064F518;
    }
}

loc_8064F504:
{
    goto loc_8064F55C;
}

loc_8064F508:
{
}

loc_8064F50C:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(120))) {
        goto loc_8064F55C;
    }
}

loc_8064F510:
{
}

loc_8064F514:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(118))) {
        goto loc_8064F538;
    }
}

loc_8064F518:
{
    r6 = MemoryInline::FlatRead32((r3 + 152));
    r0 = 3;
    r5 = 0;
    r7 = MemoryInline::FlatRead32((r6 + 720));
    r6 = (static_cast<int32_t>(r7) >> 31);
    r0_subfc_sub_1 = r0;
    r0 = (r7 - r0_subfc_sub_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r0_subfc_sub_1) ? 1u : 0u) << 29);
    r6_adde_left_1 = r6;
    r6_ca_1 = (xer >> 29) & 1u;
    r6 = (r6_adde_left_1 + r5);
    r6 = (r6 + r6_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_adde_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    goto loc_8064F55C;
}

loc_8064F538:
{
    r5 = MemoryInline::FlatRead32((r3 + 152));
    r6 = 1;
    r0 = MemoryInline::FlatRead32((r5 + 104));
}

loc_8064F548:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_8064F55C;
    }
}

loc_8064F54C:
{
    r0 = MemoryInline::FlatRead32((r5 + 108));
}

loc_8064F554:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_8064F55C;
    }
}

loc_8064F558:
{
    r6 = 0;
}

loc_8064F55C:
{
}

loc_8064F560:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8064F598;
    }
}

loc_8064F564:
{
}

loc_8064F568:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(112))) {
        goto loc_8064F574;
    }
}

loc_8064F56C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(115));
}

loc_8064F570:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8064F588;
    }
}

loc_8064F574:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(116));
}

loc_8064F578:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8064F5F8;
    }
}

loc_8064F57C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(119));
}

loc_8064F580:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8064F590;
    }
}

loc_8064F584:
{
    goto loc_8064F5F8;
}

loc_8064F588:
{
    r4 = 86;
    goto loc_8064F5F8;
}

loc_8064F590:
{
    r4 = 92;
    goto loc_8064F5F8;
}

loc_8064F598:
{
    r0 = (r8 + -112);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
}

loc_8064F5A0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8064F5F8;
    }
}

loc_8064F5A4:
{
    r5 = 0x808C0000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r5 = (r5 + 284);
    r5_addr_3 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_3);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8064F5BCu:
        goto loc_8064F5BC;
        break;
    case 0x8064F5C4u:
        goto loc_8064F5C4;
        break;
    case 0x8064F5CCu:
        goto loc_8064F5CC;
        break;
    case 0x8064F5D4u:
        goto loc_8064F5D4;
        break;
    case 0x8064F5DCu:
        goto loc_8064F5DC;
        break;
    case 0x8064F5E4u:
        goto loc_8064F5E4;
        break;
    case 0x8064F5ECu:
        goto loc_8064F5EC;
        break;
    case 0x8064F5F4u:
        goto loc_8064F5F4;
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
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8064F5BC:
{
    r4 = 96;
    goto loc_8064F5F8;
}

loc_8064F5C4:
{
    r4 = 97;
    goto loc_8064F5F8;
}

loc_8064F5CC:
{
    r4 = 98;
    goto loc_8064F5F8;
}

loc_8064F5D4:
{
    r4 = 99;
    goto loc_8064F5F8;
}

loc_8064F5DC:
{
    r4 = 100;
    goto loc_8064F5F8;
}

loc_8064F5E4:
{
    r4 = 101;
    goto loc_8064F5F8;
}

loc_8064F5EC:
{
    r4 = 102;
    goto loc_8064F5F8;
}

loc_8064F5F4:
{
    r4 = 103;
}

loc_8064F5F8:
{
    r5 = 0;
    ctx->lr = 0x8064F600u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80635A3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 456), r0);
    goto loc_8064F648;
}

loc_8064F60C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8064F614:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8064F648;
    }
}

loc_8064F618:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(30));
}

loc_8064F620:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8064F648;
    }
}

loc_8064F624:
{
    r5 = 0x808A0000u;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -25420));
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl0_0x80602488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl0_0x8060248C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x80602494;
    }
}

loc_inl0_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl0_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl0_cont_80602488:
{
    // end of inlined leaf 0x80602488
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r5 = 255;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80635AC8u>(ctx);
    r0 = ctx->gpr[0];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
}

loc_8064F648:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00001FB gpr_write=0xF00001FB gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8064F374 func_8064F374 preserves=true fpr_mask=0x00000000
